/*
 * Copyright 2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#pragma once

#include <aws/core/utils/StringUtils.h>
#include <cloudwatch_metrics_common/definitions/definitions.h>

namespace Aws {
namespace CloudWatchMetrics {
namespace Utils {

MetricDatum DeserializeMetricDatum(const Aws::String &basic_string);
Aws::String  SerializeMetricDatum(const MetricDatum &datum);

}  // namespace Utils
}  // namespace CloudWatchMetrics
}  // namespace Aws
