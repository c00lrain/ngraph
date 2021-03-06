//*****************************************************************************
// Copyright 2017-2019 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//*****************************************************************************

#pragma once

#include "ngraph/coordinate_diff.hpp"
#include "ngraph/op/op.hpp"

namespace ngraph
{
    namespace op
    {
        /// \brief Modes for the `Pad` operator.
        enum class PadMode
        {
            CONSTANT = 0,
            EDGE,
            REFLECT
        };

        /// \brief Generic padding operation.
        class Pad : public Op
        {
        public:
            /// \brief Constructs a generic padding operation.
            ///
            /// \param arg The node producing input tensor to be padded.
            /// \param arg_pad_value The node producing the scalar value to be inserted for padding.
            /// \param padding_below The padding-below widths.
            /// \param padding_above The padding-above widths.
            /// \param pad_mode The padding mode: CONSTANT(default), EDGE or REFLECT.
            Pad(const std::shared_ptr<Node>& arg,
                const std::shared_ptr<Node>& arg_pad_value,
                const CoordinateDiff& padding_below,
                const CoordinateDiff& padding_above,
                PadMode pad_mode = PadMode::CONSTANT);

            virtual std::shared_ptr<Node>
                copy_with_new_args(const NodeVector& new_args) const override;
            /// \return The padding-below sizes.
            const CoordinateDiff& get_padding_below() const { return m_padding_below; }
            /// \return The padding-above sizes.
            const CoordinateDiff& get_padding_above() const { return m_padding_above; }
            /// \brief DEPRECATED. This is just a stub for backends that used to implement the
            ///        interior padding feature, which is no longer supported.
            /// \return Returns a shape full of zeros, with the same rank as get_padding_below().
            const Shape& get_padding_interior() const { return m_padding_interior_fake; }
            /// \return The padding mode.
            PadMode get_pad_mode() const { return m_pad_mode; }
            /// \return The default value for Pad.
            virtual std::shared_ptr<Node> get_default_value() const override;

        protected:
            void validate_and_infer_types() override;
            virtual void generate_adjoints(autodiff::Adjoints& adjoints,
                                           const NodeVector& deltas) override;
            CoordinateDiff m_padding_below;
            CoordinateDiff m_padding_above;
            Shape m_padding_interior_fake; // LEGACY: This is all zeros.
            PadMode m_pad_mode;
        };
    }
}
