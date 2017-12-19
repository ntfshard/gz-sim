/*
 * Copyright (C) 2015 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef IGNITION_MATH_BOXPRIVATE_HH_
#define IGNITION_MATH_BOXPRIVATE_HH_

#include <ignition/math/Vector3.hh>
#include <ignition/math/config.hh>

namespace ignition
{
  namespace math
  {
    inline namespace IGNITION_MATH_VERSION_NAMESPACE
    {
    /// \internal
    /// \brief Private data for Box class
    class BoxPrivate
    {
      /// \brief Minimum corner of the box
      public: Vector3d min = Vector3d(MAX_D, MAX_D, MAX_D);

      /// \brief Maximum corner of the box
      public: Vector3d max = Vector3d(LOW_D, LOW_D, LOW_D);
    };
    }
  }
}
#endif
