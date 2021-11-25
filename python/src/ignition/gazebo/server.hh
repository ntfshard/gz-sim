// Copyright 2021 Open Source Robotics Foundation, Inc.
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

#ifndef IGNITION_GAZEBO_PYTHON__SERVER_HPP_
#define IGNITION_GAZEBO_PYTHON__SERVER_HPP_

#include <pybind11/pybind11.h>

namespace ignition
{
namespace gazebo
{
namespace python
{
/// Define a pybind11 wrapper for an ignition::gazebo::Server
/**
 * \param[in] module a pybind11 module to add the definition to
 */
void
define_gazebo_server(pybind11::object module);

}  // namespace python
}  // namespace gazebo
}  // namespace ignition

#endif  // IGNITION_GAZEBO_PYTHON__SERVER_CONFIG_HPP_
