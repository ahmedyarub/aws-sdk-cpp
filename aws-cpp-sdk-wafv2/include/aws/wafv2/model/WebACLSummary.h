﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   * <p>High-level information about a <a>WebACL</a>, returned by operations like
   * create and list. This provides information like the ID, that you can use to
   * retrieve and manage a <code>WebACL</code>, and the ARN, that you provide to
   * operations like <a>AssociateWebACL</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/WebACLSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API WebACLSummary
  {
  public:
    WebACLSummary();
    WebACLSummary(Aws::Utils::Json::JsonView jsonValue);
    WebACLSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline WebACLSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline WebACLSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline WebACLSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline WebACLSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline WebACLSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline WebACLSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline WebACLSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline WebACLSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline WebACLSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A token used for optimistic locking. WAF returns a token to your get and list
     * requests, to mark the state of the entity at the time of the request. To make
     * changes to the entity associated with the token, you provide the token to
     * operations like update and delete. WAF uses the token to ensure that no changes
     * have been made to the entity since you last retrieved it. If a change has been
     * made, the update fails with a <code>WAFOptimisticLockException</code>. If this
     * happens, perform another get, and use the new token returned by that operation.
     * </p>
     */
    inline const Aws::String& GetLockToken() const{ return m_lockToken; }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your get and list
     * requests, to mark the state of the entity at the time of the request. To make
     * changes to the entity associated with the token, you provide the token to
     * operations like update and delete. WAF uses the token to ensure that no changes
     * have been made to the entity since you last retrieved it. If a change has been
     * made, the update fails with a <code>WAFOptimisticLockException</code>. If this
     * happens, perform another get, and use the new token returned by that operation.
     * </p>
     */
    inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your get and list
     * requests, to mark the state of the entity at the time of the request. To make
     * changes to the entity associated with the token, you provide the token to
     * operations like update and delete. WAF uses the token to ensure that no changes
     * have been made to the entity since you last retrieved it. If a change has been
     * made, the update fails with a <code>WAFOptimisticLockException</code>. If this
     * happens, perform another get, and use the new token returned by that operation.
     * </p>
     */
    inline void SetLockToken(const Aws::String& value) { m_lockTokenHasBeenSet = true; m_lockToken = value; }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your get and list
     * requests, to mark the state of the entity at the time of the request. To make
     * changes to the entity associated with the token, you provide the token to
     * operations like update and delete. WAF uses the token to ensure that no changes
     * have been made to the entity since you last retrieved it. If a change has been
     * made, the update fails with a <code>WAFOptimisticLockException</code>. If this
     * happens, perform another get, and use the new token returned by that operation.
     * </p>
     */
    inline void SetLockToken(Aws::String&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your get and list
     * requests, to mark the state of the entity at the time of the request. To make
     * changes to the entity associated with the token, you provide the token to
     * operations like update and delete. WAF uses the token to ensure that no changes
     * have been made to the entity since you last retrieved it. If a change has been
     * made, the update fails with a <code>WAFOptimisticLockException</code>. If this
     * happens, perform another get, and use the new token returned by that operation.
     * </p>
     */
    inline void SetLockToken(const char* value) { m_lockTokenHasBeenSet = true; m_lockToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your get and list
     * requests, to mark the state of the entity at the time of the request. To make
     * changes to the entity associated with the token, you provide the token to
     * operations like update and delete. WAF uses the token to ensure that no changes
     * have been made to the entity since you last retrieved it. If a change has been
     * made, the update fails with a <code>WAFOptimisticLockException</code>. If this
     * happens, perform another get, and use the new token returned by that operation.
     * </p>
     */
    inline WebACLSummary& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your get and list
     * requests, to mark the state of the entity at the time of the request. To make
     * changes to the entity associated with the token, you provide the token to
     * operations like update and delete. WAF uses the token to ensure that no changes
     * have been made to the entity since you last retrieved it. If a change has been
     * made, the update fails with a <code>WAFOptimisticLockException</code>. If this
     * happens, perform another get, and use the new token returned by that operation.
     * </p>
     */
    inline WebACLSummary& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. WAF returns a token to your get and list
     * requests, to mark the state of the entity at the time of the request. To make
     * changes to the entity associated with the token, you provide the token to
     * operations like update and delete. WAF uses the token to ensure that no changes
     * have been made to the entity since you last retrieved it. If a change has been
     * made, the update fails with a <code>WAFOptimisticLockException</code>. If this
     * happens, perform another get, and use the new token returned by that operation.
     * </p>
     */
    inline WebACLSummary& WithLockToken(const char* value) { SetLockToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline WebACLSummary& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline WebACLSummary& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline WebACLSummary& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
