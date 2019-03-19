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

//
// The public API for ngraph++
//

#pragma once

#ifdef IN_NGRAPH_LIBRARY
#error("ngraph.hpp is for external use only")
#endif

/// \namespace ngraph
/// \brief The Intel Nervana Graph C++ API.

/// \namespace ngraph::descriptor
/// \brief Descriptors are compile-time representations of objects that will appear at run-time.

/// \namespace ngraph::descriptor::layout
/// \brief Layout descriptors describe how tensor views are implemented.

/// \namespace ngraph::op
/// \brief Ops used in graph-building.

/// \namespace ngraph::runtime
/// \brief The objects used for executing the graph.

/// \namespace ngraph::builder
/// \brief Convenience functions that create addional graph nodes to implement commonly-used
///        recipes, for example auto-broadcast.

#include "ngraph/builder/autobroadcast.hpp"
#include "ngraph/builder/numpy_transpose.hpp"
#include "ngraph/builder/reduce_ops.hpp"
#include "ngraph/builder/tensor_mask.hpp"
#include "ngraph/coordinate_transform.hpp"
#include "ngraph/descriptor/input.hpp"
#include "ngraph/descriptor/layout/dense_tensor_layout.hpp"
#include "ngraph/descriptor/layout/tensor_layout.hpp"
#include "ngraph/descriptor/output.hpp"
#include "ngraph/descriptor/tensor.hpp"
#include "ngraph/dimension.hpp"
#include "ngraph/except.hpp"
#include "ngraph/function.hpp"
#include "ngraph/node.hpp"
#include "ngraph/node_input.hpp"
#include "ngraph/node_output.hpp"
#include "ngraph/op/abs.hpp"
#include "ngraph/op/acos.hpp"
#include "ngraph/op/add.hpp"
#include "ngraph/op/all.hpp"
#include "ngraph/op/allreduce.hpp"
#include "ngraph/op/and.hpp"
#include "ngraph/op/any.hpp"
#include "ngraph/op/argmax.hpp"
#include "ngraph/op/argmin.hpp"
#include "ngraph/op/asin.hpp"
#include "ngraph/op/atan.hpp"
#include "ngraph/op/avg_pool.hpp"
#include "ngraph/op/batch_norm.hpp"
#include "ngraph/op/broadcast.hpp"
#include "ngraph/op/ceiling.hpp"
#include "ngraph/op/concat.hpp"
#include "ngraph/op/constant.hpp"
#include "ngraph/op/convert.hpp"
#include "ngraph/op/convolution.hpp"
#include "ngraph/op/cos.hpp"
#include "ngraph/op/cosh.hpp"
#include "ngraph/op/dequantize.hpp"
#include "ngraph/op/divide.hpp"
#include "ngraph/op/dot.hpp"
#include "ngraph/op/embedding_lookup.hpp"
#include "ngraph/op/equal.hpp"
#include "ngraph/op/exp.hpp"
#include "ngraph/op/experimental/dyn_reshape.hpp"
#include "ngraph/op/experimental/dyn_slice.hpp"
#include "ngraph/op/experimental/shape_of.hpp"
#include "ngraph/op/experimental/transpose.hpp"
#include "ngraph/op/floor.hpp"
#include "ngraph/op/get_output_element.hpp"
#include "ngraph/op/greater.hpp"
#include "ngraph/op/greater_eq.hpp"
#include "ngraph/op/less.hpp"
#include "ngraph/op/less_eq.hpp"
#include "ngraph/op/log.hpp"
#include "ngraph/op/lrn.hpp"
#include "ngraph/op/max.hpp"
#include "ngraph/op/max_pool.hpp"
#include "ngraph/op/maximum.hpp"
#include "ngraph/op/min.hpp"
#include "ngraph/op/minimum.hpp"
#include "ngraph/op/multiply.hpp"
#include "ngraph/op/negative.hpp"
#include "ngraph/op/not.hpp"
#include "ngraph/op/not_equal.hpp"
#include "ngraph/op/one_hot.hpp"
#include "ngraph/op/op.hpp"
#include "ngraph/op/or.hpp"
#include "ngraph/op/pad.hpp"
#include "ngraph/op/parameter.hpp"
#include "ngraph/op/power.hpp"
#include "ngraph/op/product.hpp"
#include "ngraph/op/quantize.hpp"
#include "ngraph/op/relu.hpp"
#include "ngraph/op/replace_slice.hpp"
#include "ngraph/op/reshape.hpp"
#include "ngraph/op/reverse.hpp"
#include "ngraph/op/reverse_sequence.hpp"
#include "ngraph/op/select.hpp"
#include "ngraph/op/sigmoid.hpp"
#include "ngraph/op/sign.hpp"
#include "ngraph/op/sin.hpp"
#include "ngraph/op/sinh.hpp"
#include "ngraph/op/slice.hpp"
#include "ngraph/op/softmax.hpp"
#include "ngraph/op/sqrt.hpp"
#include "ngraph/op/stop_gradient.hpp"
#include "ngraph/op/subtract.hpp"
#include "ngraph/op/sum.hpp"
#include "ngraph/op/tan.hpp"
#include "ngraph/op/tanh.hpp"
#include "ngraph/op/topk.hpp"
#include "ngraph/partial_shape.hpp"
#include "ngraph/runtime/backend.hpp"
#include "ngraph/runtime/tensor.hpp"
#include "ngraph/shape.hpp"
#include "ngraph/shape_util.hpp"
#include "ngraph/specialize_shapes.hpp"
#include "ngraph/type/element_type.hpp"
