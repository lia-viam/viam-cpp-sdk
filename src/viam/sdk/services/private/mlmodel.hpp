// Copyright 2023 Viam Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <cstdint>
#include <variant>
#include <vector>

#include <viam/api/service/mlmodel/v1/mlmodel.grpc.pb.h>

#include <viam/sdk/services/mlmodel.hpp>

namespace viam {
namespace sdk {
namespace impl {
namespace mlmodel {

using tensor_storage = std::vector<std::variant<std::vector<std::int8_t>,
                                                std::vector<std::uint8_t>,
                                                std::vector<std::int16_t>,
                                                std::vector<std::uint16_t>,
                                                std::vector<std::int32_t>,
                                                std::vector<std::uint32_t>,
                                                std::vector<std::int64_t>,
                                                std::vector<std::uint64_t>,
                                                std::vector<float>,
                                                std::vector<double>>>;

void copy_sdk_tensor_to_api_tensor(const MLModelService::tensor_views& source,
                                   ::viam::service::mlmodel::v1::FlatTensor* target);

MLModelService::tensor_views make_sdk_tensor_from_api_tensor(
    const ::viam::service::mlmodel::v1::FlatTensor& api_tensor, tensor_storage* storage = nullptr);

}  // namespace mlmodel
}  // namespace impl
}  // namespace sdk
}  // namespace viam
