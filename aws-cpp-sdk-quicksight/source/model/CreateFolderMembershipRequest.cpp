﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateFolderMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFolderMembershipRequest::CreateFolderMembershipRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_memberType(MemberType::NOT_SET),
    m_memberTypeHasBeenSet(false)
{
}

Aws::String CreateFolderMembershipRequest::SerializePayload() const
{
  return {};
}




