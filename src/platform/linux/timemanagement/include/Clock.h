/**
 * Copyright 2020 Amazon.com, Inc. and its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: LicenseRef-.amazon.com.-AmznSL-1.0
 * Licensed under the Amazon Software License (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 * http://aws.amazon.com/asl/
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#pragma once

// Includes
#include "TimeTypes.h"
#include <string>

namespace Aws
{
namespace IoTFleetWise
{
namespace Platform
{
namespace Linux
{

/**
 * @brief Clock API. Offers the system time since EPOCH.
 */
class Clock
{
public:
    /**
     * @brief Computes the timestamp since epoch from the system clock
     * @return timestamp in milliseconds
     */
    virtual Timestamp timeSinceEpochMs() const = 0;

    /**
     * @brief  Convert the current time to "%Y-%m-%d %I:%M:%S %p" format.
     * @return current time in a string format
     */
    virtual std::string timestampToString() const = 0;

    /**
     * @brief virtual destructor
     */
    virtual ~Clock() = default;
};
} // namespace Linux
} // namespace Platform
} // namespace IoTFleetWise
} // namespace Aws