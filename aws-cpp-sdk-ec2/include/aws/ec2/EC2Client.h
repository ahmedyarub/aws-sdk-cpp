﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/AcceptReservedInstancesExchangeQuoteResponse.h>
#include <aws/ec2/model/AcceptVpcPeeringConnectionResponse.h>
#include <aws/ec2/model/AllocateAddressResponse.h>
#include <aws/ec2/model/AllocateHostsResponse.h>
#include <aws/ec2/model/AssignIpv6AddressesResponse.h>
#include <aws/ec2/model/AssociateAddressResponse.h>
#include <aws/ec2/model/AssociateIamInstanceProfileResponse.h>
#include <aws/ec2/model/AssociateRouteTableResponse.h>
#include <aws/ec2/model/AssociateSubnetCidrBlockResponse.h>
#include <aws/ec2/model/AssociateVpcCidrBlockResponse.h>
#include <aws/ec2/model/AttachClassicLinkVpcResponse.h>
#include <aws/ec2/model/AttachNetworkInterfaceResponse.h>
#include <aws/ec2/model/AttachVolumeResponse.h>
#include <aws/ec2/model/AttachVpnGatewayResponse.h>
#include <aws/ec2/model/BundleInstanceResponse.h>
#include <aws/ec2/model/CancelBundleTaskResponse.h>
#include <aws/ec2/model/CancelImportTaskResponse.h>
#include <aws/ec2/model/CancelReservedInstancesListingResponse.h>
#include <aws/ec2/model/CancelSpotFleetRequestsResponse.h>
#include <aws/ec2/model/CancelSpotInstanceRequestsResponse.h>
#include <aws/ec2/model/ConfirmProductInstanceResponse.h>
#include <aws/ec2/model/CopyFpgaImageResponse.h>
#include <aws/ec2/model/CopyImageResponse.h>
#include <aws/ec2/model/CopySnapshotResponse.h>
#include <aws/ec2/model/CreateCustomerGatewayResponse.h>
#include <aws/ec2/model/CreateDefaultVpcResponse.h>
#include <aws/ec2/model/CreateDhcpOptionsResponse.h>
#include <aws/ec2/model/CreateEgressOnlyInternetGatewayResponse.h>
#include <aws/ec2/model/CreateFlowLogsResponse.h>
#include <aws/ec2/model/CreateFpgaImageResponse.h>
#include <aws/ec2/model/CreateImageResponse.h>
#include <aws/ec2/model/CreateInstanceExportTaskResponse.h>
#include <aws/ec2/model/CreateInternetGatewayResponse.h>
#include <aws/ec2/model/CreateKeyPairResponse.h>
#include <aws/ec2/model/CreateNatGatewayResponse.h>
#include <aws/ec2/model/CreateNetworkAclResponse.h>
#include <aws/ec2/model/CreateNetworkInterfaceResponse.h>
#include <aws/ec2/model/CreateNetworkInterfacePermissionResponse.h>
#include <aws/ec2/model/CreateReservedInstancesListingResponse.h>
#include <aws/ec2/model/CreateRouteResponse.h>
#include <aws/ec2/model/CreateRouteTableResponse.h>
#include <aws/ec2/model/CreateSecurityGroupResponse.h>
#include <aws/ec2/model/CreateSnapshotResponse.h>
#include <aws/ec2/model/CreateSpotDatafeedSubscriptionResponse.h>
#include <aws/ec2/model/CreateSubnetResponse.h>
#include <aws/ec2/model/CreateVolumeResponse.h>
#include <aws/ec2/model/CreateVpcResponse.h>
#include <aws/ec2/model/CreateVpcEndpointResponse.h>
#include <aws/ec2/model/CreateVpcPeeringConnectionResponse.h>
#include <aws/ec2/model/CreateVpnConnectionResponse.h>
#include <aws/ec2/model/CreateVpnGatewayResponse.h>
#include <aws/ec2/model/DeleteEgressOnlyInternetGatewayResponse.h>
#include <aws/ec2/model/DeleteFlowLogsResponse.h>
#include <aws/ec2/model/DeleteFpgaImageResponse.h>
#include <aws/ec2/model/DeleteNatGatewayResponse.h>
#include <aws/ec2/model/DeleteNetworkInterfacePermissionResponse.h>
#include <aws/ec2/model/DeleteVpcEndpointsResponse.h>
#include <aws/ec2/model/DeleteVpcPeeringConnectionResponse.h>
#include <aws/ec2/model/DescribeAccountAttributesResponse.h>
#include <aws/ec2/model/DescribeAddressesResponse.h>
#include <aws/ec2/model/DescribeAvailabilityZonesResponse.h>
#include <aws/ec2/model/DescribeBundleTasksResponse.h>
#include <aws/ec2/model/DescribeClassicLinkInstancesResponse.h>
#include <aws/ec2/model/DescribeConversionTasksResponse.h>
#include <aws/ec2/model/DescribeCustomerGatewaysResponse.h>
#include <aws/ec2/model/DescribeDhcpOptionsResponse.h>
#include <aws/ec2/model/DescribeEgressOnlyInternetGatewaysResponse.h>
#include <aws/ec2/model/DescribeElasticGpusResponse.h>
#include <aws/ec2/model/DescribeExportTasksResponse.h>
#include <aws/ec2/model/DescribeFlowLogsResponse.h>
#include <aws/ec2/model/DescribeFpgaImageAttributeResponse.h>
#include <aws/ec2/model/DescribeFpgaImagesResponse.h>
#include <aws/ec2/model/DescribeHostReservationOfferingsResponse.h>
#include <aws/ec2/model/DescribeHostReservationsResponse.h>
#include <aws/ec2/model/DescribeHostsResponse.h>
#include <aws/ec2/model/DescribeIamInstanceProfileAssociationsResponse.h>
#include <aws/ec2/model/DescribeIdFormatResponse.h>
#include <aws/ec2/model/DescribeIdentityIdFormatResponse.h>
#include <aws/ec2/model/DescribeImageAttributeResponse.h>
#include <aws/ec2/model/DescribeImagesResponse.h>
#include <aws/ec2/model/DescribeImportImageTasksResponse.h>
#include <aws/ec2/model/DescribeImportSnapshotTasksResponse.h>
#include <aws/ec2/model/DescribeInstanceAttributeResponse.h>
#include <aws/ec2/model/DescribeInstanceStatusResponse.h>
#include <aws/ec2/model/DescribeInstancesResponse.h>
#include <aws/ec2/model/DescribeInternetGatewaysResponse.h>
#include <aws/ec2/model/DescribeKeyPairsResponse.h>
#include <aws/ec2/model/DescribeMovingAddressesResponse.h>
#include <aws/ec2/model/DescribeNatGatewaysResponse.h>
#include <aws/ec2/model/DescribeNetworkAclsResponse.h>
#include <aws/ec2/model/DescribeNetworkInterfaceAttributeResponse.h>
#include <aws/ec2/model/DescribeNetworkInterfacePermissionsResponse.h>
#include <aws/ec2/model/DescribeNetworkInterfacesResponse.h>
#include <aws/ec2/model/DescribePlacementGroupsResponse.h>
#include <aws/ec2/model/DescribePrefixListsResponse.h>
#include <aws/ec2/model/DescribeRegionsResponse.h>
#include <aws/ec2/model/DescribeReservedInstancesResponse.h>
#include <aws/ec2/model/DescribeReservedInstancesListingsResponse.h>
#include <aws/ec2/model/DescribeReservedInstancesModificationsResponse.h>
#include <aws/ec2/model/DescribeReservedInstancesOfferingsResponse.h>
#include <aws/ec2/model/DescribeRouteTablesResponse.h>
#include <aws/ec2/model/DescribeScheduledInstanceAvailabilityResponse.h>
#include <aws/ec2/model/DescribeScheduledInstancesResponse.h>
#include <aws/ec2/model/DescribeSecurityGroupReferencesResponse.h>
#include <aws/ec2/model/DescribeSecurityGroupsResponse.h>
#include <aws/ec2/model/DescribeSnapshotAttributeResponse.h>
#include <aws/ec2/model/DescribeSnapshotsResponse.h>
#include <aws/ec2/model/DescribeSpotDatafeedSubscriptionResponse.h>
#include <aws/ec2/model/DescribeSpotFleetInstancesResponse.h>
#include <aws/ec2/model/DescribeSpotFleetRequestHistoryResponse.h>
#include <aws/ec2/model/DescribeSpotFleetRequestsResponse.h>
#include <aws/ec2/model/DescribeSpotInstanceRequestsResponse.h>
#include <aws/ec2/model/DescribeSpotPriceHistoryResponse.h>
#include <aws/ec2/model/DescribeStaleSecurityGroupsResponse.h>
#include <aws/ec2/model/DescribeSubnetsResponse.h>
#include <aws/ec2/model/DescribeTagsResponse.h>
#include <aws/ec2/model/DescribeVolumeAttributeResponse.h>
#include <aws/ec2/model/DescribeVolumeStatusResponse.h>
#include <aws/ec2/model/DescribeVolumesResponse.h>
#include <aws/ec2/model/DescribeVolumesModificationsResponse.h>
#include <aws/ec2/model/DescribeVpcAttributeResponse.h>
#include <aws/ec2/model/DescribeVpcClassicLinkResponse.h>
#include <aws/ec2/model/DescribeVpcClassicLinkDnsSupportResponse.h>
#include <aws/ec2/model/DescribeVpcEndpointServicesResponse.h>
#include <aws/ec2/model/DescribeVpcEndpointsResponse.h>
#include <aws/ec2/model/DescribeVpcPeeringConnectionsResponse.h>
#include <aws/ec2/model/DescribeVpcsResponse.h>
#include <aws/ec2/model/DescribeVpnConnectionsResponse.h>
#include <aws/ec2/model/DescribeVpnGatewaysResponse.h>
#include <aws/ec2/model/DetachClassicLinkVpcResponse.h>
#include <aws/ec2/model/DetachVolumeResponse.h>
#include <aws/ec2/model/DisableVpcClassicLinkResponse.h>
#include <aws/ec2/model/DisableVpcClassicLinkDnsSupportResponse.h>
#include <aws/ec2/model/DisassociateIamInstanceProfileResponse.h>
#include <aws/ec2/model/DisassociateSubnetCidrBlockResponse.h>
#include <aws/ec2/model/DisassociateVpcCidrBlockResponse.h>
#include <aws/ec2/model/EnableVpcClassicLinkResponse.h>
#include <aws/ec2/model/EnableVpcClassicLinkDnsSupportResponse.h>
#include <aws/ec2/model/GetConsoleOutputResponse.h>
#include <aws/ec2/model/GetConsoleScreenshotResponse.h>
#include <aws/ec2/model/GetHostReservationPurchasePreviewResponse.h>
#include <aws/ec2/model/GetPasswordDataResponse.h>
#include <aws/ec2/model/GetReservedInstancesExchangeQuoteResponse.h>
#include <aws/ec2/model/ImportImageResponse.h>
#include <aws/ec2/model/ImportInstanceResponse.h>
#include <aws/ec2/model/ImportKeyPairResponse.h>
#include <aws/ec2/model/ImportSnapshotResponse.h>
#include <aws/ec2/model/ImportVolumeResponse.h>
#include <aws/ec2/model/ModifyFpgaImageAttributeResponse.h>
#include <aws/ec2/model/ModifyHostsResponse.h>
#include <aws/ec2/model/ModifyInstancePlacementResponse.h>
#include <aws/ec2/model/ModifyReservedInstancesResponse.h>
#include <aws/ec2/model/ModifySpotFleetRequestResponse.h>
#include <aws/ec2/model/ModifyVolumeResponse.h>
#include <aws/ec2/model/ModifyVpcEndpointResponse.h>
#include <aws/ec2/model/ModifyVpcPeeringConnectionOptionsResponse.h>
#include <aws/ec2/model/MonitorInstancesResponse.h>
#include <aws/ec2/model/MoveAddressToVpcResponse.h>
#include <aws/ec2/model/PurchaseHostReservationResponse.h>
#include <aws/ec2/model/PurchaseReservedInstancesOfferingResponse.h>
#include <aws/ec2/model/PurchaseScheduledInstancesResponse.h>
#include <aws/ec2/model/RegisterImageResponse.h>
#include <aws/ec2/model/RejectVpcPeeringConnectionResponse.h>
#include <aws/ec2/model/ReleaseHostsResponse.h>
#include <aws/ec2/model/ReplaceIamInstanceProfileAssociationResponse.h>
#include <aws/ec2/model/ReplaceNetworkAclAssociationResponse.h>
#include <aws/ec2/model/ReplaceRouteTableAssociationResponse.h>
#include <aws/ec2/model/RequestSpotFleetResponse.h>
#include <aws/ec2/model/RequestSpotInstancesResponse.h>
#include <aws/ec2/model/ResetFpgaImageAttributeResponse.h>
#include <aws/ec2/model/RestoreAddressToClassicResponse.h>
#include <aws/ec2/model/RunInstancesResponse.h>
#include <aws/ec2/model/RunScheduledInstancesResponse.h>
#include <aws/ec2/model/StartInstancesResponse.h>
#include <aws/ec2/model/StopInstancesResponse.h>
#include <aws/ec2/model/TerminateInstancesResponse.h>
#include <aws/ec2/model/UnassignIpv6AddressesResponse.h>
#include <aws/ec2/model/UnmonitorInstancesResponse.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsEgressResponse.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsIngressResponse.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace EC2
{

namespace Model
{
        class AcceptReservedInstancesExchangeQuoteRequest;
        class AcceptVpcPeeringConnectionRequest;
        class AllocateAddressRequest;
        class AllocateHostsRequest;
        class AssignIpv6AddressesRequest;
        class AssignPrivateIpAddressesRequest;
        class AssociateAddressRequest;
        class AssociateDhcpOptionsRequest;
        class AssociateIamInstanceProfileRequest;
        class AssociateRouteTableRequest;
        class AssociateSubnetCidrBlockRequest;
        class AssociateVpcCidrBlockRequest;
        class AttachClassicLinkVpcRequest;
        class AttachInternetGatewayRequest;
        class AttachNetworkInterfaceRequest;
        class AttachVolumeRequest;
        class AttachVpnGatewayRequest;
        class AuthorizeSecurityGroupEgressRequest;
        class AuthorizeSecurityGroupIngressRequest;
        class BundleInstanceRequest;
        class CancelBundleTaskRequest;
        class CancelConversionTaskRequest;
        class CancelExportTaskRequest;
        class CancelImportTaskRequest;
        class CancelReservedInstancesListingRequest;
        class CancelSpotFleetRequestsRequest;
        class CancelSpotInstanceRequestsRequest;
        class ConfirmProductInstanceRequest;
        class CopyFpgaImageRequest;
        class CopyImageRequest;
        class CopySnapshotRequest;
        class CreateCustomerGatewayRequest;
        class CreateDefaultVpcRequest;
        class CreateDhcpOptionsRequest;
        class CreateEgressOnlyInternetGatewayRequest;
        class CreateFlowLogsRequest;
        class CreateFpgaImageRequest;
        class CreateImageRequest;
        class CreateInstanceExportTaskRequest;
        class CreateInternetGatewayRequest;
        class CreateKeyPairRequest;
        class CreateNatGatewayRequest;
        class CreateNetworkAclRequest;
        class CreateNetworkAclEntryRequest;
        class CreateNetworkInterfaceRequest;
        class CreateNetworkInterfacePermissionRequest;
        class CreatePlacementGroupRequest;
        class CreateReservedInstancesListingRequest;
        class CreateRouteRequest;
        class CreateRouteTableRequest;
        class CreateSecurityGroupRequest;
        class CreateSnapshotRequest;
        class CreateSpotDatafeedSubscriptionRequest;
        class CreateSubnetRequest;
        class CreateTagsRequest;
        class CreateVolumeRequest;
        class CreateVpcRequest;
        class CreateVpcEndpointRequest;
        class CreateVpcPeeringConnectionRequest;
        class CreateVpnConnectionRequest;
        class CreateVpnConnectionRouteRequest;
        class CreateVpnGatewayRequest;
        class DeleteCustomerGatewayRequest;
        class DeleteDhcpOptionsRequest;
        class DeleteEgressOnlyInternetGatewayRequest;
        class DeleteFlowLogsRequest;
        class DeleteFpgaImageRequest;
        class DeleteInternetGatewayRequest;
        class DeleteKeyPairRequest;
        class DeleteNatGatewayRequest;
        class DeleteNetworkAclRequest;
        class DeleteNetworkAclEntryRequest;
        class DeleteNetworkInterfaceRequest;
        class DeleteNetworkInterfacePermissionRequest;
        class DeletePlacementGroupRequest;
        class DeleteRouteRequest;
        class DeleteRouteTableRequest;
        class DeleteSecurityGroupRequest;
        class DeleteSnapshotRequest;
        class DeleteSpotDatafeedSubscriptionRequest;
        class DeleteSubnetRequest;
        class DeleteTagsRequest;
        class DeleteVolumeRequest;
        class DeleteVpcRequest;
        class DeleteVpcEndpointsRequest;
        class DeleteVpcPeeringConnectionRequest;
        class DeleteVpnConnectionRequest;
        class DeleteVpnConnectionRouteRequest;
        class DeleteVpnGatewayRequest;
        class DeregisterImageRequest;
        class DescribeAccountAttributesRequest;
        class DescribeAddressesRequest;
        class DescribeAvailabilityZonesRequest;
        class DescribeBundleTasksRequest;
        class DescribeClassicLinkInstancesRequest;
        class DescribeConversionTasksRequest;
        class DescribeCustomerGatewaysRequest;
        class DescribeDhcpOptionsRequest;
        class DescribeEgressOnlyInternetGatewaysRequest;
        class DescribeElasticGpusRequest;
        class DescribeExportTasksRequest;
        class DescribeFlowLogsRequest;
        class DescribeFpgaImageAttributeRequest;
        class DescribeFpgaImagesRequest;
        class DescribeHostReservationOfferingsRequest;
        class DescribeHostReservationsRequest;
        class DescribeHostsRequest;
        class DescribeIamInstanceProfileAssociationsRequest;
        class DescribeIdFormatRequest;
        class DescribeIdentityIdFormatRequest;
        class DescribeImageAttributeRequest;
        class DescribeImagesRequest;
        class DescribeImportImageTasksRequest;
        class DescribeImportSnapshotTasksRequest;
        class DescribeInstanceAttributeRequest;
        class DescribeInstanceStatusRequest;
        class DescribeInstancesRequest;
        class DescribeInternetGatewaysRequest;
        class DescribeKeyPairsRequest;
        class DescribeMovingAddressesRequest;
        class DescribeNatGatewaysRequest;
        class DescribeNetworkAclsRequest;
        class DescribeNetworkInterfaceAttributeRequest;
        class DescribeNetworkInterfacePermissionsRequest;
        class DescribeNetworkInterfacesRequest;
        class DescribePlacementGroupsRequest;
        class DescribePrefixListsRequest;
        class DescribeRegionsRequest;
        class DescribeReservedInstancesRequest;
        class DescribeReservedInstancesListingsRequest;
        class DescribeReservedInstancesModificationsRequest;
        class DescribeReservedInstancesOfferingsRequest;
        class DescribeRouteTablesRequest;
        class DescribeScheduledInstanceAvailabilityRequest;
        class DescribeScheduledInstancesRequest;
        class DescribeSecurityGroupReferencesRequest;
        class DescribeSecurityGroupsRequest;
        class DescribeSnapshotAttributeRequest;
        class DescribeSnapshotsRequest;
        class DescribeSpotDatafeedSubscriptionRequest;
        class DescribeSpotFleetInstancesRequest;
        class DescribeSpotFleetRequestHistoryRequest;
        class DescribeSpotFleetRequestsRequest;
        class DescribeSpotInstanceRequestsRequest;
        class DescribeSpotPriceHistoryRequest;
        class DescribeStaleSecurityGroupsRequest;
        class DescribeSubnetsRequest;
        class DescribeTagsRequest;
        class DescribeVolumeAttributeRequest;
        class DescribeVolumeStatusRequest;
        class DescribeVolumesRequest;
        class DescribeVolumesModificationsRequest;
        class DescribeVpcAttributeRequest;
        class DescribeVpcClassicLinkRequest;
        class DescribeVpcClassicLinkDnsSupportRequest;
        class DescribeVpcEndpointServicesRequest;
        class DescribeVpcEndpointsRequest;
        class DescribeVpcPeeringConnectionsRequest;
        class DescribeVpcsRequest;
        class DescribeVpnConnectionsRequest;
        class DescribeVpnGatewaysRequest;
        class DetachClassicLinkVpcRequest;
        class DetachInternetGatewayRequest;
        class DetachNetworkInterfaceRequest;
        class DetachVolumeRequest;
        class DetachVpnGatewayRequest;
        class DisableVgwRoutePropagationRequest;
        class DisableVpcClassicLinkRequest;
        class DisableVpcClassicLinkDnsSupportRequest;
        class DisassociateAddressRequest;
        class DisassociateIamInstanceProfileRequest;
        class DisassociateRouteTableRequest;
        class DisassociateSubnetCidrBlockRequest;
        class DisassociateVpcCidrBlockRequest;
        class EnableVgwRoutePropagationRequest;
        class EnableVolumeIORequest;
        class EnableVpcClassicLinkRequest;
        class EnableVpcClassicLinkDnsSupportRequest;
        class GetConsoleOutputRequest;
        class GetConsoleScreenshotRequest;
        class GetHostReservationPurchasePreviewRequest;
        class GetPasswordDataRequest;
        class GetReservedInstancesExchangeQuoteRequest;
        class ImportImageRequest;
        class ImportInstanceRequest;
        class ImportKeyPairRequest;
        class ImportSnapshotRequest;
        class ImportVolumeRequest;
        class ModifyFpgaImageAttributeRequest;
        class ModifyHostsRequest;
        class ModifyIdFormatRequest;
        class ModifyIdentityIdFormatRequest;
        class ModifyImageAttributeRequest;
        class ModifyInstanceAttributeRequest;
        class ModifyInstancePlacementRequest;
        class ModifyNetworkInterfaceAttributeRequest;
        class ModifyReservedInstancesRequest;
        class ModifySnapshotAttributeRequest;
        class ModifySpotFleetRequestRequest;
        class ModifySubnetAttributeRequest;
        class ModifyVolumeRequest;
        class ModifyVolumeAttributeRequest;
        class ModifyVpcAttributeRequest;
        class ModifyVpcEndpointRequest;
        class ModifyVpcPeeringConnectionOptionsRequest;
        class MonitorInstancesRequest;
        class MoveAddressToVpcRequest;
        class PurchaseHostReservationRequest;
        class PurchaseReservedInstancesOfferingRequest;
        class PurchaseScheduledInstancesRequest;
        class RebootInstancesRequest;
        class RegisterImageRequest;
        class RejectVpcPeeringConnectionRequest;
        class ReleaseAddressRequest;
        class ReleaseHostsRequest;
        class ReplaceIamInstanceProfileAssociationRequest;
        class ReplaceNetworkAclAssociationRequest;
        class ReplaceNetworkAclEntryRequest;
        class ReplaceRouteRequest;
        class ReplaceRouteTableAssociationRequest;
        class ReportInstanceStatusRequest;
        class RequestSpotFleetRequest;
        class RequestSpotInstancesRequest;
        class ResetFpgaImageAttributeRequest;
        class ResetImageAttributeRequest;
        class ResetInstanceAttributeRequest;
        class ResetNetworkInterfaceAttributeRequest;
        class ResetSnapshotAttributeRequest;
        class RestoreAddressToClassicRequest;
        class RevokeSecurityGroupEgressRequest;
        class RevokeSecurityGroupIngressRequest;
        class RunInstancesRequest;
        class RunScheduledInstancesRequest;
        class StartInstancesRequest;
        class StopInstancesRequest;
        class TerminateInstancesRequest;
        class UnassignIpv6AddressesRequest;
        class UnassignPrivateIpAddressesRequest;
        class UnmonitorInstancesRequest;
        class UpdateSecurityGroupRuleDescriptionsEgressRequest;
        class UpdateSecurityGroupRuleDescriptionsIngressRequest;

        typedef Aws::Utils::Outcome<AcceptReservedInstancesExchangeQuoteResponse, Aws::Client::AWSError<EC2Errors>> AcceptReservedInstancesExchangeQuoteOutcome;
        typedef Aws::Utils::Outcome<AcceptVpcPeeringConnectionResponse, Aws::Client::AWSError<EC2Errors>> AcceptVpcPeeringConnectionOutcome;
        typedef Aws::Utils::Outcome<AllocateAddressResponse, Aws::Client::AWSError<EC2Errors>> AllocateAddressOutcome;
        typedef Aws::Utils::Outcome<AllocateHostsResponse, Aws::Client::AWSError<EC2Errors>> AllocateHostsOutcome;
        typedef Aws::Utils::Outcome<AssignIpv6AddressesResponse, Aws::Client::AWSError<EC2Errors>> AssignIpv6AddressesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> AssignPrivateIpAddressesOutcome;
        typedef Aws::Utils::Outcome<AssociateAddressResponse, Aws::Client::AWSError<EC2Errors>> AssociateAddressOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> AssociateDhcpOptionsOutcome;
        typedef Aws::Utils::Outcome<AssociateIamInstanceProfileResponse, Aws::Client::AWSError<EC2Errors>> AssociateIamInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<AssociateRouteTableResponse, Aws::Client::AWSError<EC2Errors>> AssociateRouteTableOutcome;
        typedef Aws::Utils::Outcome<AssociateSubnetCidrBlockResponse, Aws::Client::AWSError<EC2Errors>> AssociateSubnetCidrBlockOutcome;
        typedef Aws::Utils::Outcome<AssociateVpcCidrBlockResponse, Aws::Client::AWSError<EC2Errors>> AssociateVpcCidrBlockOutcome;
        typedef Aws::Utils::Outcome<AttachClassicLinkVpcResponse, Aws::Client::AWSError<EC2Errors>> AttachClassicLinkVpcOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> AttachInternetGatewayOutcome;
        typedef Aws::Utils::Outcome<AttachNetworkInterfaceResponse, Aws::Client::AWSError<EC2Errors>> AttachNetworkInterfaceOutcome;
        typedef Aws::Utils::Outcome<AttachVolumeResponse, Aws::Client::AWSError<EC2Errors>> AttachVolumeOutcome;
        typedef Aws::Utils::Outcome<AttachVpnGatewayResponse, Aws::Client::AWSError<EC2Errors>> AttachVpnGatewayOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> AuthorizeSecurityGroupEgressOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> AuthorizeSecurityGroupIngressOutcome;
        typedef Aws::Utils::Outcome<BundleInstanceResponse, Aws::Client::AWSError<EC2Errors>> BundleInstanceOutcome;
        typedef Aws::Utils::Outcome<CancelBundleTaskResponse, Aws::Client::AWSError<EC2Errors>> CancelBundleTaskOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> CancelConversionTaskOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> CancelExportTaskOutcome;
        typedef Aws::Utils::Outcome<CancelImportTaskResponse, Aws::Client::AWSError<EC2Errors>> CancelImportTaskOutcome;
        typedef Aws::Utils::Outcome<CancelReservedInstancesListingResponse, Aws::Client::AWSError<EC2Errors>> CancelReservedInstancesListingOutcome;
        typedef Aws::Utils::Outcome<CancelSpotFleetRequestsResponse, Aws::Client::AWSError<EC2Errors>> CancelSpotFleetRequestsOutcome;
        typedef Aws::Utils::Outcome<CancelSpotInstanceRequestsResponse, Aws::Client::AWSError<EC2Errors>> CancelSpotInstanceRequestsOutcome;
        typedef Aws::Utils::Outcome<ConfirmProductInstanceResponse, Aws::Client::AWSError<EC2Errors>> ConfirmProductInstanceOutcome;
        typedef Aws::Utils::Outcome<CopyFpgaImageResponse, Aws::Client::AWSError<EC2Errors>> CopyFpgaImageOutcome;
        typedef Aws::Utils::Outcome<CopyImageResponse, Aws::Client::AWSError<EC2Errors>> CopyImageOutcome;
        typedef Aws::Utils::Outcome<CopySnapshotResponse, Aws::Client::AWSError<EC2Errors>> CopySnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateCustomerGatewayResponse, Aws::Client::AWSError<EC2Errors>> CreateCustomerGatewayOutcome;
        typedef Aws::Utils::Outcome<CreateDefaultVpcResponse, Aws::Client::AWSError<EC2Errors>> CreateDefaultVpcOutcome;
        typedef Aws::Utils::Outcome<CreateDhcpOptionsResponse, Aws::Client::AWSError<EC2Errors>> CreateDhcpOptionsOutcome;
        typedef Aws::Utils::Outcome<CreateEgressOnlyInternetGatewayResponse, Aws::Client::AWSError<EC2Errors>> CreateEgressOnlyInternetGatewayOutcome;
        typedef Aws::Utils::Outcome<CreateFlowLogsResponse, Aws::Client::AWSError<EC2Errors>> CreateFlowLogsOutcome;
        typedef Aws::Utils::Outcome<CreateFpgaImageResponse, Aws::Client::AWSError<EC2Errors>> CreateFpgaImageOutcome;
        typedef Aws::Utils::Outcome<CreateImageResponse, Aws::Client::AWSError<EC2Errors>> CreateImageOutcome;
        typedef Aws::Utils::Outcome<CreateInstanceExportTaskResponse, Aws::Client::AWSError<EC2Errors>> CreateInstanceExportTaskOutcome;
        typedef Aws::Utils::Outcome<CreateInternetGatewayResponse, Aws::Client::AWSError<EC2Errors>> CreateInternetGatewayOutcome;
        typedef Aws::Utils::Outcome<CreateKeyPairResponse, Aws::Client::AWSError<EC2Errors>> CreateKeyPairOutcome;
        typedef Aws::Utils::Outcome<CreateNatGatewayResponse, Aws::Client::AWSError<EC2Errors>> CreateNatGatewayOutcome;
        typedef Aws::Utils::Outcome<CreateNetworkAclResponse, Aws::Client::AWSError<EC2Errors>> CreateNetworkAclOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> CreateNetworkAclEntryOutcome;
        typedef Aws::Utils::Outcome<CreateNetworkInterfaceResponse, Aws::Client::AWSError<EC2Errors>> CreateNetworkInterfaceOutcome;
        typedef Aws::Utils::Outcome<CreateNetworkInterfacePermissionResponse, Aws::Client::AWSError<EC2Errors>> CreateNetworkInterfacePermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> CreatePlacementGroupOutcome;
        typedef Aws::Utils::Outcome<CreateReservedInstancesListingResponse, Aws::Client::AWSError<EC2Errors>> CreateReservedInstancesListingOutcome;
        typedef Aws::Utils::Outcome<CreateRouteResponse, Aws::Client::AWSError<EC2Errors>> CreateRouteOutcome;
        typedef Aws::Utils::Outcome<CreateRouteTableResponse, Aws::Client::AWSError<EC2Errors>> CreateRouteTableOutcome;
        typedef Aws::Utils::Outcome<CreateSecurityGroupResponse, Aws::Client::AWSError<EC2Errors>> CreateSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<CreateSnapshotResponse, Aws::Client::AWSError<EC2Errors>> CreateSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateSpotDatafeedSubscriptionResponse, Aws::Client::AWSError<EC2Errors>> CreateSpotDatafeedSubscriptionOutcome;
        typedef Aws::Utils::Outcome<CreateSubnetResponse, Aws::Client::AWSError<EC2Errors>> CreateSubnetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<CreateVolumeResponse, Aws::Client::AWSError<EC2Errors>> CreateVolumeOutcome;
        typedef Aws::Utils::Outcome<CreateVpcResponse, Aws::Client::AWSError<EC2Errors>> CreateVpcOutcome;
        typedef Aws::Utils::Outcome<CreateVpcEndpointResponse, Aws::Client::AWSError<EC2Errors>> CreateVpcEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateVpcPeeringConnectionResponse, Aws::Client::AWSError<EC2Errors>> CreateVpcPeeringConnectionOutcome;
        typedef Aws::Utils::Outcome<CreateVpnConnectionResponse, Aws::Client::AWSError<EC2Errors>> CreateVpnConnectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> CreateVpnConnectionRouteOutcome;
        typedef Aws::Utils::Outcome<CreateVpnGatewayResponse, Aws::Client::AWSError<EC2Errors>> CreateVpnGatewayOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteCustomerGatewayOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteDhcpOptionsOutcome;
        typedef Aws::Utils::Outcome<DeleteEgressOnlyInternetGatewayResponse, Aws::Client::AWSError<EC2Errors>> DeleteEgressOnlyInternetGatewayOutcome;
        typedef Aws::Utils::Outcome<DeleteFlowLogsResponse, Aws::Client::AWSError<EC2Errors>> DeleteFlowLogsOutcome;
        typedef Aws::Utils::Outcome<DeleteFpgaImageResponse, Aws::Client::AWSError<EC2Errors>> DeleteFpgaImageOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteInternetGatewayOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteKeyPairOutcome;
        typedef Aws::Utils::Outcome<DeleteNatGatewayResponse, Aws::Client::AWSError<EC2Errors>> DeleteNatGatewayOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteNetworkAclOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteNetworkAclEntryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteNetworkInterfaceOutcome;
        typedef Aws::Utils::Outcome<DeleteNetworkInterfacePermissionResponse, Aws::Client::AWSError<EC2Errors>> DeleteNetworkInterfacePermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeletePlacementGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteRouteOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteRouteTableOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteSnapshotOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteSpotDatafeedSubscriptionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteSubnetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteVolumeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteVpcOutcome;
        typedef Aws::Utils::Outcome<DeleteVpcEndpointsResponse, Aws::Client::AWSError<EC2Errors>> DeleteVpcEndpointsOutcome;
        typedef Aws::Utils::Outcome<DeleteVpcPeeringConnectionResponse, Aws::Client::AWSError<EC2Errors>> DeleteVpcPeeringConnectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteVpnConnectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteVpnConnectionRouteOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeleteVpnGatewayOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DeregisterImageOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountAttributesResponse, Aws::Client::AWSError<EC2Errors>> DescribeAccountAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeAddressesResponse, Aws::Client::AWSError<EC2Errors>> DescribeAddressesOutcome;
        typedef Aws::Utils::Outcome<DescribeAvailabilityZonesResponse, Aws::Client::AWSError<EC2Errors>> DescribeAvailabilityZonesOutcome;
        typedef Aws::Utils::Outcome<DescribeBundleTasksResponse, Aws::Client::AWSError<EC2Errors>> DescribeBundleTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeClassicLinkInstancesResponse, Aws::Client::AWSError<EC2Errors>> DescribeClassicLinkInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeConversionTasksResponse, Aws::Client::AWSError<EC2Errors>> DescribeConversionTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeCustomerGatewaysResponse, Aws::Client::AWSError<EC2Errors>> DescribeCustomerGatewaysOutcome;
        typedef Aws::Utils::Outcome<DescribeDhcpOptionsResponse, Aws::Client::AWSError<EC2Errors>> DescribeDhcpOptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeEgressOnlyInternetGatewaysResponse, Aws::Client::AWSError<EC2Errors>> DescribeEgressOnlyInternetGatewaysOutcome;
        typedef Aws::Utils::Outcome<DescribeElasticGpusResponse, Aws::Client::AWSError<EC2Errors>> DescribeElasticGpusOutcome;
        typedef Aws::Utils::Outcome<DescribeExportTasksResponse, Aws::Client::AWSError<EC2Errors>> DescribeExportTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeFlowLogsResponse, Aws::Client::AWSError<EC2Errors>> DescribeFlowLogsOutcome;
        typedef Aws::Utils::Outcome<DescribeFpgaImageAttributeResponse, Aws::Client::AWSError<EC2Errors>> DescribeFpgaImageAttributeOutcome;
        typedef Aws::Utils::Outcome<DescribeFpgaImagesResponse, Aws::Client::AWSError<EC2Errors>> DescribeFpgaImagesOutcome;
        typedef Aws::Utils::Outcome<DescribeHostReservationOfferingsResponse, Aws::Client::AWSError<EC2Errors>> DescribeHostReservationOfferingsOutcome;
        typedef Aws::Utils::Outcome<DescribeHostReservationsResponse, Aws::Client::AWSError<EC2Errors>> DescribeHostReservationsOutcome;
        typedef Aws::Utils::Outcome<DescribeHostsResponse, Aws::Client::AWSError<EC2Errors>> DescribeHostsOutcome;
        typedef Aws::Utils::Outcome<DescribeIamInstanceProfileAssociationsResponse, Aws::Client::AWSError<EC2Errors>> DescribeIamInstanceProfileAssociationsOutcome;
        typedef Aws::Utils::Outcome<DescribeIdFormatResponse, Aws::Client::AWSError<EC2Errors>> DescribeIdFormatOutcome;
        typedef Aws::Utils::Outcome<DescribeIdentityIdFormatResponse, Aws::Client::AWSError<EC2Errors>> DescribeIdentityIdFormatOutcome;
        typedef Aws::Utils::Outcome<DescribeImageAttributeResponse, Aws::Client::AWSError<EC2Errors>> DescribeImageAttributeOutcome;
        typedef Aws::Utils::Outcome<DescribeImagesResponse, Aws::Client::AWSError<EC2Errors>> DescribeImagesOutcome;
        typedef Aws::Utils::Outcome<DescribeImportImageTasksResponse, Aws::Client::AWSError<EC2Errors>> DescribeImportImageTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeImportSnapshotTasksResponse, Aws::Client::AWSError<EC2Errors>> DescribeImportSnapshotTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceAttributeResponse, Aws::Client::AWSError<EC2Errors>> DescribeInstanceAttributeOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceStatusResponse, Aws::Client::AWSError<EC2Errors>> DescribeInstanceStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancesResponse, Aws::Client::AWSError<EC2Errors>> DescribeInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeInternetGatewaysResponse, Aws::Client::AWSError<EC2Errors>> DescribeInternetGatewaysOutcome;
        typedef Aws::Utils::Outcome<DescribeKeyPairsResponse, Aws::Client::AWSError<EC2Errors>> DescribeKeyPairsOutcome;
        typedef Aws::Utils::Outcome<DescribeMovingAddressesResponse, Aws::Client::AWSError<EC2Errors>> DescribeMovingAddressesOutcome;
        typedef Aws::Utils::Outcome<DescribeNatGatewaysResponse, Aws::Client::AWSError<EC2Errors>> DescribeNatGatewaysOutcome;
        typedef Aws::Utils::Outcome<DescribeNetworkAclsResponse, Aws::Client::AWSError<EC2Errors>> DescribeNetworkAclsOutcome;
        typedef Aws::Utils::Outcome<DescribeNetworkInterfaceAttributeResponse, Aws::Client::AWSError<EC2Errors>> DescribeNetworkInterfaceAttributeOutcome;
        typedef Aws::Utils::Outcome<DescribeNetworkInterfacePermissionsResponse, Aws::Client::AWSError<EC2Errors>> DescribeNetworkInterfacePermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeNetworkInterfacesResponse, Aws::Client::AWSError<EC2Errors>> DescribeNetworkInterfacesOutcome;
        typedef Aws::Utils::Outcome<DescribePlacementGroupsResponse, Aws::Client::AWSError<EC2Errors>> DescribePlacementGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribePrefixListsResponse, Aws::Client::AWSError<EC2Errors>> DescribePrefixListsOutcome;
        typedef Aws::Utils::Outcome<DescribeRegionsResponse, Aws::Client::AWSError<EC2Errors>> DescribeRegionsOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedInstancesResponse, Aws::Client::AWSError<EC2Errors>> DescribeReservedInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedInstancesListingsResponse, Aws::Client::AWSError<EC2Errors>> DescribeReservedInstancesListingsOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedInstancesModificationsResponse, Aws::Client::AWSError<EC2Errors>> DescribeReservedInstancesModificationsOutcome;
        typedef Aws::Utils::Outcome<DescribeReservedInstancesOfferingsResponse, Aws::Client::AWSError<EC2Errors>> DescribeReservedInstancesOfferingsOutcome;
        typedef Aws::Utils::Outcome<DescribeRouteTablesResponse, Aws::Client::AWSError<EC2Errors>> DescribeRouteTablesOutcome;
        typedef Aws::Utils::Outcome<DescribeScheduledInstanceAvailabilityResponse, Aws::Client::AWSError<EC2Errors>> DescribeScheduledInstanceAvailabilityOutcome;
        typedef Aws::Utils::Outcome<DescribeScheduledInstancesResponse, Aws::Client::AWSError<EC2Errors>> DescribeScheduledInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeSecurityGroupReferencesResponse, Aws::Client::AWSError<EC2Errors>> DescribeSecurityGroupReferencesOutcome;
        typedef Aws::Utils::Outcome<DescribeSecurityGroupsResponse, Aws::Client::AWSError<EC2Errors>> DescribeSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeSnapshotAttributeResponse, Aws::Client::AWSError<EC2Errors>> DescribeSnapshotAttributeOutcome;
        typedef Aws::Utils::Outcome<DescribeSnapshotsResponse, Aws::Client::AWSError<EC2Errors>> DescribeSnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeSpotDatafeedSubscriptionResponse, Aws::Client::AWSError<EC2Errors>> DescribeSpotDatafeedSubscriptionOutcome;
        typedef Aws::Utils::Outcome<DescribeSpotFleetInstancesResponse, Aws::Client::AWSError<EC2Errors>> DescribeSpotFleetInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeSpotFleetRequestHistoryResponse, Aws::Client::AWSError<EC2Errors>> DescribeSpotFleetRequestHistoryOutcome;
        typedef Aws::Utils::Outcome<DescribeSpotFleetRequestsResponse, Aws::Client::AWSError<EC2Errors>> DescribeSpotFleetRequestsOutcome;
        typedef Aws::Utils::Outcome<DescribeSpotInstanceRequestsResponse, Aws::Client::AWSError<EC2Errors>> DescribeSpotInstanceRequestsOutcome;
        typedef Aws::Utils::Outcome<DescribeSpotPriceHistoryResponse, Aws::Client::AWSError<EC2Errors>> DescribeSpotPriceHistoryOutcome;
        typedef Aws::Utils::Outcome<DescribeStaleSecurityGroupsResponse, Aws::Client::AWSError<EC2Errors>> DescribeStaleSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeSubnetsResponse, Aws::Client::AWSError<EC2Errors>> DescribeSubnetsOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResponse, Aws::Client::AWSError<EC2Errors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeVolumeAttributeResponse, Aws::Client::AWSError<EC2Errors>> DescribeVolumeAttributeOutcome;
        typedef Aws::Utils::Outcome<DescribeVolumeStatusResponse, Aws::Client::AWSError<EC2Errors>> DescribeVolumeStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeVolumesResponse, Aws::Client::AWSError<EC2Errors>> DescribeVolumesOutcome;
        typedef Aws::Utils::Outcome<DescribeVolumesModificationsResponse, Aws::Client::AWSError<EC2Errors>> DescribeVolumesModificationsOutcome;
        typedef Aws::Utils::Outcome<DescribeVpcAttributeResponse, Aws::Client::AWSError<EC2Errors>> DescribeVpcAttributeOutcome;
        typedef Aws::Utils::Outcome<DescribeVpcClassicLinkResponse, Aws::Client::AWSError<EC2Errors>> DescribeVpcClassicLinkOutcome;
        typedef Aws::Utils::Outcome<DescribeVpcClassicLinkDnsSupportResponse, Aws::Client::AWSError<EC2Errors>> DescribeVpcClassicLinkDnsSupportOutcome;
        typedef Aws::Utils::Outcome<DescribeVpcEndpointServicesResponse, Aws::Client::AWSError<EC2Errors>> DescribeVpcEndpointServicesOutcome;
        typedef Aws::Utils::Outcome<DescribeVpcEndpointsResponse, Aws::Client::AWSError<EC2Errors>> DescribeVpcEndpointsOutcome;
        typedef Aws::Utils::Outcome<DescribeVpcPeeringConnectionsResponse, Aws::Client::AWSError<EC2Errors>> DescribeVpcPeeringConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribeVpcsResponse, Aws::Client::AWSError<EC2Errors>> DescribeVpcsOutcome;
        typedef Aws::Utils::Outcome<DescribeVpnConnectionsResponse, Aws::Client::AWSError<EC2Errors>> DescribeVpnConnectionsOutcome;
        typedef Aws::Utils::Outcome<DescribeVpnGatewaysResponse, Aws::Client::AWSError<EC2Errors>> DescribeVpnGatewaysOutcome;
        typedef Aws::Utils::Outcome<DetachClassicLinkVpcResponse, Aws::Client::AWSError<EC2Errors>> DetachClassicLinkVpcOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DetachInternetGatewayOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DetachNetworkInterfaceOutcome;
        typedef Aws::Utils::Outcome<DetachVolumeResponse, Aws::Client::AWSError<EC2Errors>> DetachVolumeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DetachVpnGatewayOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DisableVgwRoutePropagationOutcome;
        typedef Aws::Utils::Outcome<DisableVpcClassicLinkResponse, Aws::Client::AWSError<EC2Errors>> DisableVpcClassicLinkOutcome;
        typedef Aws::Utils::Outcome<DisableVpcClassicLinkDnsSupportResponse, Aws::Client::AWSError<EC2Errors>> DisableVpcClassicLinkDnsSupportOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DisassociateAddressOutcome;
        typedef Aws::Utils::Outcome<DisassociateIamInstanceProfileResponse, Aws::Client::AWSError<EC2Errors>> DisassociateIamInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> DisassociateRouteTableOutcome;
        typedef Aws::Utils::Outcome<DisassociateSubnetCidrBlockResponse, Aws::Client::AWSError<EC2Errors>> DisassociateSubnetCidrBlockOutcome;
        typedef Aws::Utils::Outcome<DisassociateVpcCidrBlockResponse, Aws::Client::AWSError<EC2Errors>> DisassociateVpcCidrBlockOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> EnableVgwRoutePropagationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> EnableVolumeIOOutcome;
        typedef Aws::Utils::Outcome<EnableVpcClassicLinkResponse, Aws::Client::AWSError<EC2Errors>> EnableVpcClassicLinkOutcome;
        typedef Aws::Utils::Outcome<EnableVpcClassicLinkDnsSupportResponse, Aws::Client::AWSError<EC2Errors>> EnableVpcClassicLinkDnsSupportOutcome;
        typedef Aws::Utils::Outcome<GetConsoleOutputResponse, Aws::Client::AWSError<EC2Errors>> GetConsoleOutputOutcome;
        typedef Aws::Utils::Outcome<GetConsoleScreenshotResponse, Aws::Client::AWSError<EC2Errors>> GetConsoleScreenshotOutcome;
        typedef Aws::Utils::Outcome<GetHostReservationPurchasePreviewResponse, Aws::Client::AWSError<EC2Errors>> GetHostReservationPurchasePreviewOutcome;
        typedef Aws::Utils::Outcome<GetPasswordDataResponse, Aws::Client::AWSError<EC2Errors>> GetPasswordDataOutcome;
        typedef Aws::Utils::Outcome<GetReservedInstancesExchangeQuoteResponse, Aws::Client::AWSError<EC2Errors>> GetReservedInstancesExchangeQuoteOutcome;
        typedef Aws::Utils::Outcome<ImportImageResponse, Aws::Client::AWSError<EC2Errors>> ImportImageOutcome;
        typedef Aws::Utils::Outcome<ImportInstanceResponse, Aws::Client::AWSError<EC2Errors>> ImportInstanceOutcome;
        typedef Aws::Utils::Outcome<ImportKeyPairResponse, Aws::Client::AWSError<EC2Errors>> ImportKeyPairOutcome;
        typedef Aws::Utils::Outcome<ImportSnapshotResponse, Aws::Client::AWSError<EC2Errors>> ImportSnapshotOutcome;
        typedef Aws::Utils::Outcome<ImportVolumeResponse, Aws::Client::AWSError<EC2Errors>> ImportVolumeOutcome;
        typedef Aws::Utils::Outcome<ModifyFpgaImageAttributeResponse, Aws::Client::AWSError<EC2Errors>> ModifyFpgaImageAttributeOutcome;
        typedef Aws::Utils::Outcome<ModifyHostsResponse, Aws::Client::AWSError<EC2Errors>> ModifyHostsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ModifyIdFormatOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ModifyIdentityIdFormatOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ModifyImageAttributeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ModifyInstanceAttributeOutcome;
        typedef Aws::Utils::Outcome<ModifyInstancePlacementResponse, Aws::Client::AWSError<EC2Errors>> ModifyInstancePlacementOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ModifyNetworkInterfaceAttributeOutcome;
        typedef Aws::Utils::Outcome<ModifyReservedInstancesResponse, Aws::Client::AWSError<EC2Errors>> ModifyReservedInstancesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ModifySnapshotAttributeOutcome;
        typedef Aws::Utils::Outcome<ModifySpotFleetRequestResponse, Aws::Client::AWSError<EC2Errors>> ModifySpotFleetRequestOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ModifySubnetAttributeOutcome;
        typedef Aws::Utils::Outcome<ModifyVolumeResponse, Aws::Client::AWSError<EC2Errors>> ModifyVolumeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ModifyVolumeAttributeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ModifyVpcAttributeOutcome;
        typedef Aws::Utils::Outcome<ModifyVpcEndpointResponse, Aws::Client::AWSError<EC2Errors>> ModifyVpcEndpointOutcome;
        typedef Aws::Utils::Outcome<ModifyVpcPeeringConnectionOptionsResponse, Aws::Client::AWSError<EC2Errors>> ModifyVpcPeeringConnectionOptionsOutcome;
        typedef Aws::Utils::Outcome<MonitorInstancesResponse, Aws::Client::AWSError<EC2Errors>> MonitorInstancesOutcome;
        typedef Aws::Utils::Outcome<MoveAddressToVpcResponse, Aws::Client::AWSError<EC2Errors>> MoveAddressToVpcOutcome;
        typedef Aws::Utils::Outcome<PurchaseHostReservationResponse, Aws::Client::AWSError<EC2Errors>> PurchaseHostReservationOutcome;
        typedef Aws::Utils::Outcome<PurchaseReservedInstancesOfferingResponse, Aws::Client::AWSError<EC2Errors>> PurchaseReservedInstancesOfferingOutcome;
        typedef Aws::Utils::Outcome<PurchaseScheduledInstancesResponse, Aws::Client::AWSError<EC2Errors>> PurchaseScheduledInstancesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> RebootInstancesOutcome;
        typedef Aws::Utils::Outcome<RegisterImageResponse, Aws::Client::AWSError<EC2Errors>> RegisterImageOutcome;
        typedef Aws::Utils::Outcome<RejectVpcPeeringConnectionResponse, Aws::Client::AWSError<EC2Errors>> RejectVpcPeeringConnectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ReleaseAddressOutcome;
        typedef Aws::Utils::Outcome<ReleaseHostsResponse, Aws::Client::AWSError<EC2Errors>> ReleaseHostsOutcome;
        typedef Aws::Utils::Outcome<ReplaceIamInstanceProfileAssociationResponse, Aws::Client::AWSError<EC2Errors>> ReplaceIamInstanceProfileAssociationOutcome;
        typedef Aws::Utils::Outcome<ReplaceNetworkAclAssociationResponse, Aws::Client::AWSError<EC2Errors>> ReplaceNetworkAclAssociationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ReplaceNetworkAclEntryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ReplaceRouteOutcome;
        typedef Aws::Utils::Outcome<ReplaceRouteTableAssociationResponse, Aws::Client::AWSError<EC2Errors>> ReplaceRouteTableAssociationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ReportInstanceStatusOutcome;
        typedef Aws::Utils::Outcome<RequestSpotFleetResponse, Aws::Client::AWSError<EC2Errors>> RequestSpotFleetOutcome;
        typedef Aws::Utils::Outcome<RequestSpotInstancesResponse, Aws::Client::AWSError<EC2Errors>> RequestSpotInstancesOutcome;
        typedef Aws::Utils::Outcome<ResetFpgaImageAttributeResponse, Aws::Client::AWSError<EC2Errors>> ResetFpgaImageAttributeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ResetImageAttributeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ResetInstanceAttributeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ResetNetworkInterfaceAttributeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> ResetSnapshotAttributeOutcome;
        typedef Aws::Utils::Outcome<RestoreAddressToClassicResponse, Aws::Client::AWSError<EC2Errors>> RestoreAddressToClassicOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> RevokeSecurityGroupEgressOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> RevokeSecurityGroupIngressOutcome;
        typedef Aws::Utils::Outcome<RunInstancesResponse, Aws::Client::AWSError<EC2Errors>> RunInstancesOutcome;
        typedef Aws::Utils::Outcome<RunScheduledInstancesResponse, Aws::Client::AWSError<EC2Errors>> RunScheduledInstancesOutcome;
        typedef Aws::Utils::Outcome<StartInstancesResponse, Aws::Client::AWSError<EC2Errors>> StartInstancesOutcome;
        typedef Aws::Utils::Outcome<StopInstancesResponse, Aws::Client::AWSError<EC2Errors>> StopInstancesOutcome;
        typedef Aws::Utils::Outcome<TerminateInstancesResponse, Aws::Client::AWSError<EC2Errors>> TerminateInstancesOutcome;
        typedef Aws::Utils::Outcome<UnassignIpv6AddressesResponse, Aws::Client::AWSError<EC2Errors>> UnassignIpv6AddressesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EC2Errors>> UnassignPrivateIpAddressesOutcome;
        typedef Aws::Utils::Outcome<UnmonitorInstancesResponse, Aws::Client::AWSError<EC2Errors>> UnmonitorInstancesOutcome;
        typedef Aws::Utils::Outcome<UpdateSecurityGroupRuleDescriptionsEgressResponse, Aws::Client::AWSError<EC2Errors>> UpdateSecurityGroupRuleDescriptionsEgressOutcome;
        typedef Aws::Utils::Outcome<UpdateSecurityGroupRuleDescriptionsIngressResponse, Aws::Client::AWSError<EC2Errors>> UpdateSecurityGroupRuleDescriptionsIngressOutcome;

        typedef std::future<AcceptReservedInstancesExchangeQuoteOutcome> AcceptReservedInstancesExchangeQuoteOutcomeCallable;
        typedef std::future<AcceptVpcPeeringConnectionOutcome> AcceptVpcPeeringConnectionOutcomeCallable;
        typedef std::future<AllocateAddressOutcome> AllocateAddressOutcomeCallable;
        typedef std::future<AllocateHostsOutcome> AllocateHostsOutcomeCallable;
        typedef std::future<AssignIpv6AddressesOutcome> AssignIpv6AddressesOutcomeCallable;
        typedef std::future<AssignPrivateIpAddressesOutcome> AssignPrivateIpAddressesOutcomeCallable;
        typedef std::future<AssociateAddressOutcome> AssociateAddressOutcomeCallable;
        typedef std::future<AssociateDhcpOptionsOutcome> AssociateDhcpOptionsOutcomeCallable;
        typedef std::future<AssociateIamInstanceProfileOutcome> AssociateIamInstanceProfileOutcomeCallable;
        typedef std::future<AssociateRouteTableOutcome> AssociateRouteTableOutcomeCallable;
        typedef std::future<AssociateSubnetCidrBlockOutcome> AssociateSubnetCidrBlockOutcomeCallable;
        typedef std::future<AssociateVpcCidrBlockOutcome> AssociateVpcCidrBlockOutcomeCallable;
        typedef std::future<AttachClassicLinkVpcOutcome> AttachClassicLinkVpcOutcomeCallable;
        typedef std::future<AttachInternetGatewayOutcome> AttachInternetGatewayOutcomeCallable;
        typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
        typedef std::future<AttachVolumeOutcome> AttachVolumeOutcomeCallable;
        typedef std::future<AttachVpnGatewayOutcome> AttachVpnGatewayOutcomeCallable;
        typedef std::future<AuthorizeSecurityGroupEgressOutcome> AuthorizeSecurityGroupEgressOutcomeCallable;
        typedef std::future<AuthorizeSecurityGroupIngressOutcome> AuthorizeSecurityGroupIngressOutcomeCallable;
        typedef std::future<BundleInstanceOutcome> BundleInstanceOutcomeCallable;
        typedef std::future<CancelBundleTaskOutcome> CancelBundleTaskOutcomeCallable;
        typedef std::future<CancelConversionTaskOutcome> CancelConversionTaskOutcomeCallable;
        typedef std::future<CancelExportTaskOutcome> CancelExportTaskOutcomeCallable;
        typedef std::future<CancelImportTaskOutcome> CancelImportTaskOutcomeCallable;
        typedef std::future<CancelReservedInstancesListingOutcome> CancelReservedInstancesListingOutcomeCallable;
        typedef std::future<CancelSpotFleetRequestsOutcome> CancelSpotFleetRequestsOutcomeCallable;
        typedef std::future<CancelSpotInstanceRequestsOutcome> CancelSpotInstanceRequestsOutcomeCallable;
        typedef std::future<ConfirmProductInstanceOutcome> ConfirmProductInstanceOutcomeCallable;
        typedef std::future<CopyFpgaImageOutcome> CopyFpgaImageOutcomeCallable;
        typedef std::future<CopyImageOutcome> CopyImageOutcomeCallable;
        typedef std::future<CopySnapshotOutcome> CopySnapshotOutcomeCallable;
        typedef std::future<CreateCustomerGatewayOutcome> CreateCustomerGatewayOutcomeCallable;
        typedef std::future<CreateDefaultVpcOutcome> CreateDefaultVpcOutcomeCallable;
        typedef std::future<CreateDhcpOptionsOutcome> CreateDhcpOptionsOutcomeCallable;
        typedef std::future<CreateEgressOnlyInternetGatewayOutcome> CreateEgressOnlyInternetGatewayOutcomeCallable;
        typedef std::future<CreateFlowLogsOutcome> CreateFlowLogsOutcomeCallable;
        typedef std::future<CreateFpgaImageOutcome> CreateFpgaImageOutcomeCallable;
        typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
        typedef std::future<CreateInstanceExportTaskOutcome> CreateInstanceExportTaskOutcomeCallable;
        typedef std::future<CreateInternetGatewayOutcome> CreateInternetGatewayOutcomeCallable;
        typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
        typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;
        typedef std::future<CreateNetworkAclOutcome> CreateNetworkAclOutcomeCallable;
        typedef std::future<CreateNetworkAclEntryOutcome> CreateNetworkAclEntryOutcomeCallable;
        typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
        typedef std::future<CreateNetworkInterfacePermissionOutcome> CreateNetworkInterfacePermissionOutcomeCallable;
        typedef std::future<CreatePlacementGroupOutcome> CreatePlacementGroupOutcomeCallable;
        typedef std::future<CreateReservedInstancesListingOutcome> CreateReservedInstancesListingOutcomeCallable;
        typedef std::future<CreateRouteOutcome> CreateRouteOutcomeCallable;
        typedef std::future<CreateRouteTableOutcome> CreateRouteTableOutcomeCallable;
        typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
        typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
        typedef std::future<CreateSpotDatafeedSubscriptionOutcome> CreateSpotDatafeedSubscriptionOutcomeCallable;
        typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<CreateVolumeOutcome> CreateVolumeOutcomeCallable;
        typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
        typedef std::future<CreateVpcEndpointOutcome> CreateVpcEndpointOutcomeCallable;
        typedef std::future<CreateVpcPeeringConnectionOutcome> CreateVpcPeeringConnectionOutcomeCallable;
        typedef std::future<CreateVpnConnectionOutcome> CreateVpnConnectionOutcomeCallable;
        typedef std::future<CreateVpnConnectionRouteOutcome> CreateVpnConnectionRouteOutcomeCallable;
        typedef std::future<CreateVpnGatewayOutcome> CreateVpnGatewayOutcomeCallable;
        typedef std::future<DeleteCustomerGatewayOutcome> DeleteCustomerGatewayOutcomeCallable;
        typedef std::future<DeleteDhcpOptionsOutcome> DeleteDhcpOptionsOutcomeCallable;
        typedef std::future<DeleteEgressOnlyInternetGatewayOutcome> DeleteEgressOnlyInternetGatewayOutcomeCallable;
        typedef std::future<DeleteFlowLogsOutcome> DeleteFlowLogsOutcomeCallable;
        typedef std::future<DeleteFpgaImageOutcome> DeleteFpgaImageOutcomeCallable;
        typedef std::future<DeleteInternetGatewayOutcome> DeleteInternetGatewayOutcomeCallable;
        typedef std::future<DeleteKeyPairOutcome> DeleteKeyPairOutcomeCallable;
        typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;
        typedef std::future<DeleteNetworkAclOutcome> DeleteNetworkAclOutcomeCallable;
        typedef std::future<DeleteNetworkAclEntryOutcome> DeleteNetworkAclEntryOutcomeCallable;
        typedef std::future<DeleteNetworkInterfaceOutcome> DeleteNetworkInterfaceOutcomeCallable;
        typedef std::future<DeleteNetworkInterfacePermissionOutcome> DeleteNetworkInterfacePermissionOutcomeCallable;
        typedef std::future<DeletePlacementGroupOutcome> DeletePlacementGroupOutcomeCallable;
        typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
        typedef std::future<DeleteRouteTableOutcome> DeleteRouteTableOutcomeCallable;
        typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
        typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
        typedef std::future<DeleteSpotDatafeedSubscriptionOutcome> DeleteSpotDatafeedSubscriptionOutcomeCallable;
        typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DeleteVolumeOutcome> DeleteVolumeOutcomeCallable;
        typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
        typedef std::future<DeleteVpcEndpointsOutcome> DeleteVpcEndpointsOutcomeCallable;
        typedef std::future<DeleteVpcPeeringConnectionOutcome> DeleteVpcPeeringConnectionOutcomeCallable;
        typedef std::future<DeleteVpnConnectionOutcome> DeleteVpnConnectionOutcomeCallable;
        typedef std::future<DeleteVpnConnectionRouteOutcome> DeleteVpnConnectionRouteOutcomeCallable;
        typedef std::future<DeleteVpnGatewayOutcome> DeleteVpnGatewayOutcomeCallable;
        typedef std::future<DeregisterImageOutcome> DeregisterImageOutcomeCallable;
        typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
        typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
        typedef std::future<DescribeAvailabilityZonesOutcome> DescribeAvailabilityZonesOutcomeCallable;
        typedef std::future<DescribeBundleTasksOutcome> DescribeBundleTasksOutcomeCallable;
        typedef std::future<DescribeClassicLinkInstancesOutcome> DescribeClassicLinkInstancesOutcomeCallable;
        typedef std::future<DescribeConversionTasksOutcome> DescribeConversionTasksOutcomeCallable;
        typedef std::future<DescribeCustomerGatewaysOutcome> DescribeCustomerGatewaysOutcomeCallable;
        typedef std::future<DescribeDhcpOptionsOutcome> DescribeDhcpOptionsOutcomeCallable;
        typedef std::future<DescribeEgressOnlyInternetGatewaysOutcome> DescribeEgressOnlyInternetGatewaysOutcomeCallable;
        typedef std::future<DescribeElasticGpusOutcome> DescribeElasticGpusOutcomeCallable;
        typedef std::future<DescribeExportTasksOutcome> DescribeExportTasksOutcomeCallable;
        typedef std::future<DescribeFlowLogsOutcome> DescribeFlowLogsOutcomeCallable;
        typedef std::future<DescribeFpgaImageAttributeOutcome> DescribeFpgaImageAttributeOutcomeCallable;
        typedef std::future<DescribeFpgaImagesOutcome> DescribeFpgaImagesOutcomeCallable;
        typedef std::future<DescribeHostReservationOfferingsOutcome> DescribeHostReservationOfferingsOutcomeCallable;
        typedef std::future<DescribeHostReservationsOutcome> DescribeHostReservationsOutcomeCallable;
        typedef std::future<DescribeHostsOutcome> DescribeHostsOutcomeCallable;
        typedef std::future<DescribeIamInstanceProfileAssociationsOutcome> DescribeIamInstanceProfileAssociationsOutcomeCallable;
        typedef std::future<DescribeIdFormatOutcome> DescribeIdFormatOutcomeCallable;
        typedef std::future<DescribeIdentityIdFormatOutcome> DescribeIdentityIdFormatOutcomeCallable;
        typedef std::future<DescribeImageAttributeOutcome> DescribeImageAttributeOutcomeCallable;
        typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
        typedef std::future<DescribeImportImageTasksOutcome> DescribeImportImageTasksOutcomeCallable;
        typedef std::future<DescribeImportSnapshotTasksOutcome> DescribeImportSnapshotTasksOutcomeCallable;
        typedef std::future<DescribeInstanceAttributeOutcome> DescribeInstanceAttributeOutcomeCallable;
        typedef std::future<DescribeInstanceStatusOutcome> DescribeInstanceStatusOutcomeCallable;
        typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
        typedef std::future<DescribeInternetGatewaysOutcome> DescribeInternetGatewaysOutcomeCallable;
        typedef std::future<DescribeKeyPairsOutcome> DescribeKeyPairsOutcomeCallable;
        typedef std::future<DescribeMovingAddressesOutcome> DescribeMovingAddressesOutcomeCallable;
        typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;
        typedef std::future<DescribeNetworkAclsOutcome> DescribeNetworkAclsOutcomeCallable;
        typedef std::future<DescribeNetworkInterfaceAttributeOutcome> DescribeNetworkInterfaceAttributeOutcomeCallable;
        typedef std::future<DescribeNetworkInterfacePermissionsOutcome> DescribeNetworkInterfacePermissionsOutcomeCallable;
        typedef std::future<DescribeNetworkInterfacesOutcome> DescribeNetworkInterfacesOutcomeCallable;
        typedef std::future<DescribePlacementGroupsOutcome> DescribePlacementGroupsOutcomeCallable;
        typedef std::future<DescribePrefixListsOutcome> DescribePrefixListsOutcomeCallable;
        typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
        typedef std::future<DescribeReservedInstancesOutcome> DescribeReservedInstancesOutcomeCallable;
        typedef std::future<DescribeReservedInstancesListingsOutcome> DescribeReservedInstancesListingsOutcomeCallable;
        typedef std::future<DescribeReservedInstancesModificationsOutcome> DescribeReservedInstancesModificationsOutcomeCallable;
        typedef std::future<DescribeReservedInstancesOfferingsOutcome> DescribeReservedInstancesOfferingsOutcomeCallable;
        typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
        typedef std::future<DescribeScheduledInstanceAvailabilityOutcome> DescribeScheduledInstanceAvailabilityOutcomeCallable;
        typedef std::future<DescribeScheduledInstancesOutcome> DescribeScheduledInstancesOutcomeCallable;
        typedef std::future<DescribeSecurityGroupReferencesOutcome> DescribeSecurityGroupReferencesOutcomeCallable;
        typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
        typedef std::future<DescribeSnapshotAttributeOutcome> DescribeSnapshotAttributeOutcomeCallable;
        typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
        typedef std::future<DescribeSpotDatafeedSubscriptionOutcome> DescribeSpotDatafeedSubscriptionOutcomeCallable;
        typedef std::future<DescribeSpotFleetInstancesOutcome> DescribeSpotFleetInstancesOutcomeCallable;
        typedef std::future<DescribeSpotFleetRequestHistoryOutcome> DescribeSpotFleetRequestHistoryOutcomeCallable;
        typedef std::future<DescribeSpotFleetRequestsOutcome> DescribeSpotFleetRequestsOutcomeCallable;
        typedef std::future<DescribeSpotInstanceRequestsOutcome> DescribeSpotInstanceRequestsOutcomeCallable;
        typedef std::future<DescribeSpotPriceHistoryOutcome> DescribeSpotPriceHistoryOutcomeCallable;
        typedef std::future<DescribeStaleSecurityGroupsOutcome> DescribeStaleSecurityGroupsOutcomeCallable;
        typedef std::future<DescribeSubnetsOutcome> DescribeSubnetsOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DescribeVolumeAttributeOutcome> DescribeVolumeAttributeOutcomeCallable;
        typedef std::future<DescribeVolumeStatusOutcome> DescribeVolumeStatusOutcomeCallable;
        typedef std::future<DescribeVolumesOutcome> DescribeVolumesOutcomeCallable;
        typedef std::future<DescribeVolumesModificationsOutcome> DescribeVolumesModificationsOutcomeCallable;
        typedef std::future<DescribeVpcAttributeOutcome> DescribeVpcAttributeOutcomeCallable;
        typedef std::future<DescribeVpcClassicLinkOutcome> DescribeVpcClassicLinkOutcomeCallable;
        typedef std::future<DescribeVpcClassicLinkDnsSupportOutcome> DescribeVpcClassicLinkDnsSupportOutcomeCallable;
        typedef std::future<DescribeVpcEndpointServicesOutcome> DescribeVpcEndpointServicesOutcomeCallable;
        typedef std::future<DescribeVpcEndpointsOutcome> DescribeVpcEndpointsOutcomeCallable;
        typedef std::future<DescribeVpcPeeringConnectionsOutcome> DescribeVpcPeeringConnectionsOutcomeCallable;
        typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
        typedef std::future<DescribeVpnConnectionsOutcome> DescribeVpnConnectionsOutcomeCallable;
        typedef std::future<DescribeVpnGatewaysOutcome> DescribeVpnGatewaysOutcomeCallable;
        typedef std::future<DetachClassicLinkVpcOutcome> DetachClassicLinkVpcOutcomeCallable;
        typedef std::future<DetachInternetGatewayOutcome> DetachInternetGatewayOutcomeCallable;
        typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
        typedef std::future<DetachVolumeOutcome> DetachVolumeOutcomeCallable;
        typedef std::future<DetachVpnGatewayOutcome> DetachVpnGatewayOutcomeCallable;
        typedef std::future<DisableVgwRoutePropagationOutcome> DisableVgwRoutePropagationOutcomeCallable;
        typedef std::future<DisableVpcClassicLinkOutcome> DisableVpcClassicLinkOutcomeCallable;
        typedef std::future<DisableVpcClassicLinkDnsSupportOutcome> DisableVpcClassicLinkDnsSupportOutcomeCallable;
        typedef std::future<DisassociateAddressOutcome> DisassociateAddressOutcomeCallable;
        typedef std::future<DisassociateIamInstanceProfileOutcome> DisassociateIamInstanceProfileOutcomeCallable;
        typedef std::future<DisassociateRouteTableOutcome> DisassociateRouteTableOutcomeCallable;
        typedef std::future<DisassociateSubnetCidrBlockOutcome> DisassociateSubnetCidrBlockOutcomeCallable;
        typedef std::future<DisassociateVpcCidrBlockOutcome> DisassociateVpcCidrBlockOutcomeCallable;
        typedef std::future<EnableVgwRoutePropagationOutcome> EnableVgwRoutePropagationOutcomeCallable;
        typedef std::future<EnableVolumeIOOutcome> EnableVolumeIOOutcomeCallable;
        typedef std::future<EnableVpcClassicLinkOutcome> EnableVpcClassicLinkOutcomeCallable;
        typedef std::future<EnableVpcClassicLinkDnsSupportOutcome> EnableVpcClassicLinkDnsSupportOutcomeCallable;
        typedef std::future<GetConsoleOutputOutcome> GetConsoleOutputOutcomeCallable;
        typedef std::future<GetConsoleScreenshotOutcome> GetConsoleScreenshotOutcomeCallable;
        typedef std::future<GetHostReservationPurchasePreviewOutcome> GetHostReservationPurchasePreviewOutcomeCallable;
        typedef std::future<GetPasswordDataOutcome> GetPasswordDataOutcomeCallable;
        typedef std::future<GetReservedInstancesExchangeQuoteOutcome> GetReservedInstancesExchangeQuoteOutcomeCallable;
        typedef std::future<ImportImageOutcome> ImportImageOutcomeCallable;
        typedef std::future<ImportInstanceOutcome> ImportInstanceOutcomeCallable;
        typedef std::future<ImportKeyPairOutcome> ImportKeyPairOutcomeCallable;
        typedef std::future<ImportSnapshotOutcome> ImportSnapshotOutcomeCallable;
        typedef std::future<ImportVolumeOutcome> ImportVolumeOutcomeCallable;
        typedef std::future<ModifyFpgaImageAttributeOutcome> ModifyFpgaImageAttributeOutcomeCallable;
        typedef std::future<ModifyHostsOutcome> ModifyHostsOutcomeCallable;
        typedef std::future<ModifyIdFormatOutcome> ModifyIdFormatOutcomeCallable;
        typedef std::future<ModifyIdentityIdFormatOutcome> ModifyIdentityIdFormatOutcomeCallable;
        typedef std::future<ModifyImageAttributeOutcome> ModifyImageAttributeOutcomeCallable;
        typedef std::future<ModifyInstanceAttributeOutcome> ModifyInstanceAttributeOutcomeCallable;
        typedef std::future<ModifyInstancePlacementOutcome> ModifyInstancePlacementOutcomeCallable;
        typedef std::future<ModifyNetworkInterfaceAttributeOutcome> ModifyNetworkInterfaceAttributeOutcomeCallable;
        typedef std::future<ModifyReservedInstancesOutcome> ModifyReservedInstancesOutcomeCallable;
        typedef std::future<ModifySnapshotAttributeOutcome> ModifySnapshotAttributeOutcomeCallable;
        typedef std::future<ModifySpotFleetRequestOutcome> ModifySpotFleetRequestOutcomeCallable;
        typedef std::future<ModifySubnetAttributeOutcome> ModifySubnetAttributeOutcomeCallable;
        typedef std::future<ModifyVolumeOutcome> ModifyVolumeOutcomeCallable;
        typedef std::future<ModifyVolumeAttributeOutcome> ModifyVolumeAttributeOutcomeCallable;
        typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
        typedef std::future<ModifyVpcEndpointOutcome> ModifyVpcEndpointOutcomeCallable;
        typedef std::future<ModifyVpcPeeringConnectionOptionsOutcome> ModifyVpcPeeringConnectionOptionsOutcomeCallable;
        typedef std::future<MonitorInstancesOutcome> MonitorInstancesOutcomeCallable;
        typedef std::future<MoveAddressToVpcOutcome> MoveAddressToVpcOutcomeCallable;
        typedef std::future<PurchaseHostReservationOutcome> PurchaseHostReservationOutcomeCallable;
        typedef std::future<PurchaseReservedInstancesOfferingOutcome> PurchaseReservedInstancesOfferingOutcomeCallable;
        typedef std::future<PurchaseScheduledInstancesOutcome> PurchaseScheduledInstancesOutcomeCallable;
        typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
        typedef std::future<RegisterImageOutcome> RegisterImageOutcomeCallable;
        typedef std::future<RejectVpcPeeringConnectionOutcome> RejectVpcPeeringConnectionOutcomeCallable;
        typedef std::future<ReleaseAddressOutcome> ReleaseAddressOutcomeCallable;
        typedef std::future<ReleaseHostsOutcome> ReleaseHostsOutcomeCallable;
        typedef std::future<ReplaceIamInstanceProfileAssociationOutcome> ReplaceIamInstanceProfileAssociationOutcomeCallable;
        typedef std::future<ReplaceNetworkAclAssociationOutcome> ReplaceNetworkAclAssociationOutcomeCallable;
        typedef std::future<ReplaceNetworkAclEntryOutcome> ReplaceNetworkAclEntryOutcomeCallable;
        typedef std::future<ReplaceRouteOutcome> ReplaceRouteOutcomeCallable;
        typedef std::future<ReplaceRouteTableAssociationOutcome> ReplaceRouteTableAssociationOutcomeCallable;
        typedef std::future<ReportInstanceStatusOutcome> ReportInstanceStatusOutcomeCallable;
        typedef std::future<RequestSpotFleetOutcome> RequestSpotFleetOutcomeCallable;
        typedef std::future<RequestSpotInstancesOutcome> RequestSpotInstancesOutcomeCallable;
        typedef std::future<ResetFpgaImageAttributeOutcome> ResetFpgaImageAttributeOutcomeCallable;
        typedef std::future<ResetImageAttributeOutcome> ResetImageAttributeOutcomeCallable;
        typedef std::future<ResetInstanceAttributeOutcome> ResetInstanceAttributeOutcomeCallable;
        typedef std::future<ResetNetworkInterfaceAttributeOutcome> ResetNetworkInterfaceAttributeOutcomeCallable;
        typedef std::future<ResetSnapshotAttributeOutcome> ResetSnapshotAttributeOutcomeCallable;
        typedef std::future<RestoreAddressToClassicOutcome> RestoreAddressToClassicOutcomeCallable;
        typedef std::future<RevokeSecurityGroupEgressOutcome> RevokeSecurityGroupEgressOutcomeCallable;
        typedef std::future<RevokeSecurityGroupIngressOutcome> RevokeSecurityGroupIngressOutcomeCallable;
        typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
        typedef std::future<RunScheduledInstancesOutcome> RunScheduledInstancesOutcomeCallable;
        typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
        typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
        typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
        typedef std::future<UnassignIpv6AddressesOutcome> UnassignIpv6AddressesOutcomeCallable;
        typedef std::future<UnassignPrivateIpAddressesOutcome> UnassignPrivateIpAddressesOutcomeCallable;
        typedef std::future<UnmonitorInstancesOutcome> UnmonitorInstancesOutcomeCallable;
        typedef std::future<UpdateSecurityGroupRuleDescriptionsEgressOutcome> UpdateSecurityGroupRuleDescriptionsEgressOutcomeCallable;
        typedef std::future<UpdateSecurityGroupRuleDescriptionsIngressOutcome> UpdateSecurityGroupRuleDescriptionsIngressOutcomeCallable;
} // namespace Model

  class EC2Client;

    typedef std::function<void(const EC2Client*, const Model::AcceptReservedInstancesExchangeQuoteRequest&, const Model::AcceptReservedInstancesExchangeQuoteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptReservedInstancesExchangeQuoteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AcceptVpcPeeringConnectionRequest&, const Model::AcceptVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AllocateAddressRequest&, const Model::AllocateAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateAddressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AllocateHostsRequest&, const Model::AllocateHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateHostsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssignIpv6AddressesRequest&, const Model::AssignIpv6AddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignIpv6AddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssignPrivateIpAddressesRequest&, const Model::AssignPrivateIpAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignPrivateIpAddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateAddressRequest&, const Model::AssociateAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAddressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateDhcpOptionsRequest&, const Model::AssociateDhcpOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDhcpOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateIamInstanceProfileRequest&, const Model::AssociateIamInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateIamInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateRouteTableRequest&, const Model::AssociateRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateSubnetCidrBlockRequest&, const Model::AssociateSubnetCidrBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSubnetCidrBlockResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateVpcCidrBlockRequest&, const Model::AssociateVpcCidrBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateVpcCidrBlockResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachClassicLinkVpcRequest&, const Model::AttachClassicLinkVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachClassicLinkVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachInternetGatewayRequest&, const Model::AttachInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachNetworkInterfaceRequest&, const Model::AttachNetworkInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachNetworkInterfaceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachVolumeRequest&, const Model::AttachVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachVpnGatewayRequest&, const Model::AttachVpnGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachVpnGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AuthorizeSecurityGroupEgressRequest&, const Model::AuthorizeSecurityGroupEgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeSecurityGroupEgressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AuthorizeSecurityGroupIngressRequest&, const Model::AuthorizeSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::BundleInstanceRequest&, const Model::BundleInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BundleInstanceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelBundleTaskRequest&, const Model::CancelBundleTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelBundleTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelConversionTaskRequest&, const Model::CancelConversionTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelConversionTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelExportTaskRequest&, const Model::CancelExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelExportTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelImportTaskRequest&, const Model::CancelImportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelImportTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelReservedInstancesListingRequest&, const Model::CancelReservedInstancesListingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelReservedInstancesListingResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelSpotFleetRequestsRequest&, const Model::CancelSpotFleetRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSpotFleetRequestsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelSpotInstanceRequestsRequest&, const Model::CancelSpotInstanceRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSpotInstanceRequestsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ConfirmProductInstanceRequest&, const Model::ConfirmProductInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmProductInstanceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CopyFpgaImageRequest&, const Model::CopyFpgaImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyFpgaImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CopyImageRequest&, const Model::CopyImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CopySnapshotRequest&, const Model::CopySnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopySnapshotResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateCustomerGatewayRequest&, const Model::CreateCustomerGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomerGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateDefaultVpcRequest&, const Model::CreateDefaultVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDefaultVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateDhcpOptionsRequest&, const Model::CreateDhcpOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDhcpOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateEgressOnlyInternetGatewayRequest&, const Model::CreateEgressOnlyInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEgressOnlyInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateFlowLogsRequest&, const Model::CreateFlowLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowLogsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateFpgaImageRequest&, const Model::CreateFpgaImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFpgaImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateImageRequest&, const Model::CreateImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateInstanceExportTaskRequest&, const Model::CreateInstanceExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceExportTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateInternetGatewayRequest&, const Model::CreateInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateKeyPairRequest&, const Model::CreateKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeyPairResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNatGatewayRequest&, const Model::CreateNatGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNatGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNetworkAclRequest&, const Model::CreateNetworkAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkAclResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNetworkAclEntryRequest&, const Model::CreateNetworkAclEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkAclEntryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNetworkInterfaceRequest&, const Model::CreateNetworkInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkInterfaceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNetworkInterfacePermissionRequest&, const Model::CreateNetworkInterfacePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkInterfacePermissionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreatePlacementGroupRequest&, const Model::CreatePlacementGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlacementGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateReservedInstancesListingRequest&, const Model::CreateReservedInstancesListingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReservedInstancesListingResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateRouteRequest&, const Model::CreateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateRouteTableRequest&, const Model::CreateRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateSecurityGroupRequest&, const Model::CreateSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateSpotDatafeedSubscriptionRequest&, const Model::CreateSpotDatafeedSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSpotDatafeedSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateSubnetRequest&, const Model::CreateSubnetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubnetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVolumeRequest&, const Model::CreateVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpcRequest&, const Model::CreateVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpcEndpointRequest&, const Model::CreateVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpcPeeringConnectionRequest&, const Model::CreateVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpnConnectionRequest&, const Model::CreateVpnConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpnConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpnConnectionRouteRequest&, const Model::CreateVpnConnectionRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpnConnectionRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpnGatewayRequest&, const Model::CreateVpnGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpnGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteCustomerGatewayRequest&, const Model::DeleteCustomerGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomerGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteDhcpOptionsRequest&, const Model::DeleteDhcpOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDhcpOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteEgressOnlyInternetGatewayRequest&, const Model::DeleteEgressOnlyInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEgressOnlyInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteFlowLogsRequest&, const Model::DeleteFlowLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowLogsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteFpgaImageRequest&, const Model::DeleteFpgaImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFpgaImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteInternetGatewayRequest&, const Model::DeleteInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteKeyPairRequest&, const Model::DeleteKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeyPairResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNatGatewayRequest&, const Model::DeleteNatGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNatGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkAclRequest&, const Model::DeleteNetworkAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkAclResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkAclEntryRequest&, const Model::DeleteNetworkAclEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkAclEntryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkInterfaceRequest&, const Model::DeleteNetworkInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkInterfaceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkInterfacePermissionRequest&, const Model::DeleteNetworkInterfacePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkInterfacePermissionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeletePlacementGroupRequest&, const Model::DeletePlacementGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlacementGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteRouteRequest&, const Model::DeleteRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteRouteTableRequest&, const Model::DeleteRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteSecurityGroupRequest&, const Model::DeleteSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteSpotDatafeedSubscriptionRequest&, const Model::DeleteSpotDatafeedSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSpotDatafeedSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteSubnetRequest&, const Model::DeleteSubnetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubnetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVolumeRequest&, const Model::DeleteVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpcRequest&, const Model::DeleteVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpcEndpointsRequest&, const Model::DeleteVpcEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcEndpointsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpcPeeringConnectionRequest&, const Model::DeleteVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpnConnectionRequest&, const Model::DeleteVpnConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpnConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpnConnectionRouteRequest&, const Model::DeleteVpnConnectionRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpnConnectionRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpnGatewayRequest&, const Model::DeleteVpnGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpnGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeregisterImageRequest&, const Model::DeregisterImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeAddressesRequest&, const Model::DescribeAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeAvailabilityZonesRequest&, const Model::DescribeAvailabilityZonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAvailabilityZonesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeBundleTasksRequest&, const Model::DescribeBundleTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBundleTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeClassicLinkInstancesRequest&, const Model::DescribeClassicLinkInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClassicLinkInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeConversionTasksRequest&, const Model::DescribeConversionTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConversionTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeCustomerGatewaysRequest&, const Model::DescribeCustomerGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomerGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeDhcpOptionsRequest&, const Model::DescribeDhcpOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDhcpOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeEgressOnlyInternetGatewaysRequest&, const Model::DescribeEgressOnlyInternetGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEgressOnlyInternetGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeElasticGpusRequest&, const Model::DescribeElasticGpusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticGpusResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeExportTasksRequest&, const Model::DescribeExportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFlowLogsRequest&, const Model::DescribeFlowLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowLogsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFpgaImageAttributeRequest&, const Model::DescribeFpgaImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFpgaImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFpgaImagesRequest&, const Model::DescribeFpgaImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFpgaImagesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeHostReservationOfferingsRequest&, const Model::DescribeHostReservationOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHostReservationOfferingsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeHostReservationsRequest&, const Model::DescribeHostReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHostReservationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeHostsRequest&, const Model::DescribeHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHostsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeIamInstanceProfileAssociationsRequest&, const Model::DescribeIamInstanceProfileAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIamInstanceProfileAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeIdFormatRequest&, const Model::DescribeIdFormatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdFormatResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeIdentityIdFormatRequest&, const Model::DescribeIdentityIdFormatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityIdFormatResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeImageAttributeRequest&, const Model::DescribeImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeImagesRequest&, const Model::DescribeImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImagesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeImportImageTasksRequest&, const Model::DescribeImportImageTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImportImageTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeImportSnapshotTasksRequest&, const Model::DescribeImportSnapshotTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImportSnapshotTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstanceAttributeRequest&, const Model::DescribeInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstanceStatusRequest&, const Model::DescribeInstanceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceStatusResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstancesRequest&, const Model::DescribeInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInternetGatewaysRequest&, const Model::DescribeInternetGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInternetGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeKeyPairsRequest&, const Model::DescribeKeyPairsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeyPairsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeMovingAddressesRequest&, const Model::DescribeMovingAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMovingAddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNatGatewaysRequest&, const Model::DescribeNatGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNatGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkAclsRequest&, const Model::DescribeNetworkAclsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkAclsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkInterfaceAttributeRequest&, const Model::DescribeNetworkInterfaceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkInterfaceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkInterfacePermissionsRequest&, const Model::DescribeNetworkInterfacePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkInterfacePermissionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkInterfacesRequest&, const Model::DescribeNetworkInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkInterfacesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribePlacementGroupsRequest&, const Model::DescribePlacementGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlacementGroupsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribePrefixListsRequest&, const Model::DescribePrefixListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePrefixListsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeRegionsRequest&, const Model::DescribeRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRegionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeReservedInstancesRequest&, const Model::DescribeReservedInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeReservedInstancesListingsRequest&, const Model::DescribeReservedInstancesListingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstancesListingsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeReservedInstancesModificationsRequest&, const Model::DescribeReservedInstancesModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstancesModificationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeReservedInstancesOfferingsRequest&, const Model::DescribeReservedInstancesOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstancesOfferingsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeRouteTablesRequest&, const Model::DescribeRouteTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRouteTablesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeScheduledInstanceAvailabilityRequest&, const Model::DescribeScheduledInstanceAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledInstanceAvailabilityResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeScheduledInstancesRequest&, const Model::DescribeScheduledInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSecurityGroupReferencesRequest&, const Model::DescribeSecurityGroupReferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityGroupReferencesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSecurityGroupsRequest&, const Model::DescribeSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSnapshotAttributeRequest&, const Model::DescribeSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotDatafeedSubscriptionRequest&, const Model::DescribeSpotDatafeedSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotDatafeedSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotFleetInstancesRequest&, const Model::DescribeSpotFleetInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotFleetInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotFleetRequestHistoryRequest&, const Model::DescribeSpotFleetRequestHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotFleetRequestHistoryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotFleetRequestsRequest&, const Model::DescribeSpotFleetRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotFleetRequestsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotInstanceRequestsRequest&, const Model::DescribeSpotInstanceRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotInstanceRequestsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotPriceHistoryRequest&, const Model::DescribeSpotPriceHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotPriceHistoryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeStaleSecurityGroupsRequest&, const Model::DescribeStaleSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStaleSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSubnetsRequest&, const Model::DescribeSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubnetsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVolumeAttributeRequest&, const Model::DescribeVolumeAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumeAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVolumeStatusRequest&, const Model::DescribeVolumeStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumeStatusResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVolumesRequest&, const Model::DescribeVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVolumesModificationsRequest&, const Model::DescribeVolumesModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumesModificationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcAttributeRequest&, const Model::DescribeVpcAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcClassicLinkRequest&, const Model::DescribeVpcClassicLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcClassicLinkResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcClassicLinkDnsSupportRequest&, const Model::DescribeVpcClassicLinkDnsSupportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcClassicLinkDnsSupportResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcEndpointServicesRequest&, const Model::DescribeVpcEndpointServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointServicesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcEndpointsRequest&, const Model::DescribeVpcEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcPeeringConnectionsRequest&, const Model::DescribeVpcPeeringConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcPeeringConnectionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcsRequest&, const Model::DescribeVpcsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpnConnectionsRequest&, const Model::DescribeVpnConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpnConnectionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpnGatewaysRequest&, const Model::DescribeVpnGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpnGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachClassicLinkVpcRequest&, const Model::DetachClassicLinkVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachClassicLinkVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachInternetGatewayRequest&, const Model::DetachInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachNetworkInterfaceRequest&, const Model::DetachNetworkInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachNetworkInterfaceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachVolumeRequest&, const Model::DetachVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachVpnGatewayRequest&, const Model::DetachVpnGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachVpnGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableVgwRoutePropagationRequest&, const Model::DisableVgwRoutePropagationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableVgwRoutePropagationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableVpcClassicLinkRequest&, const Model::DisableVpcClassicLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableVpcClassicLinkResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableVpcClassicLinkDnsSupportRequest&, const Model::DisableVpcClassicLinkDnsSupportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableVpcClassicLinkDnsSupportResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateAddressRequest&, const Model::DisassociateAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAddressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateIamInstanceProfileRequest&, const Model::DisassociateIamInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateIamInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateRouteTableRequest&, const Model::DisassociateRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateSubnetCidrBlockRequest&, const Model::DisassociateSubnetCidrBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSubnetCidrBlockResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateVpcCidrBlockRequest&, const Model::DisassociateVpcCidrBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateVpcCidrBlockResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableVgwRoutePropagationRequest&, const Model::EnableVgwRoutePropagationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableVgwRoutePropagationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableVolumeIORequest&, const Model::EnableVolumeIOOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableVolumeIOResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableVpcClassicLinkRequest&, const Model::EnableVpcClassicLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableVpcClassicLinkResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableVpcClassicLinkDnsSupportRequest&, const Model::EnableVpcClassicLinkDnsSupportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableVpcClassicLinkDnsSupportResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetConsoleOutputRequest&, const Model::GetConsoleOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConsoleOutputResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetConsoleScreenshotRequest&, const Model::GetConsoleScreenshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConsoleScreenshotResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetHostReservationPurchasePreviewRequest&, const Model::GetHostReservationPurchasePreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostReservationPurchasePreviewResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetPasswordDataRequest&, const Model::GetPasswordDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPasswordDataResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetReservedInstancesExchangeQuoteRequest&, const Model::GetReservedInstancesExchangeQuoteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservedInstancesExchangeQuoteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportImageRequest&, const Model::ImportImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportInstanceRequest&, const Model::ImportInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportInstanceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportKeyPairRequest&, const Model::ImportKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportKeyPairResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportSnapshotRequest&, const Model::ImportSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportSnapshotResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportVolumeRequest&, const Model::ImportVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyFpgaImageAttributeRequest&, const Model::ModifyFpgaImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyFpgaImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyHostsRequest&, const Model::ModifyHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyHostsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyIdFormatRequest&, const Model::ModifyIdFormatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyIdFormatResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyIdentityIdFormatRequest&, const Model::ModifyIdentityIdFormatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyIdentityIdFormatResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyImageAttributeRequest&, const Model::ModifyImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyInstanceAttributeRequest&, const Model::ModifyInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyInstancePlacementRequest&, const Model::ModifyInstancePlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstancePlacementResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyNetworkInterfaceAttributeRequest&, const Model::ModifyNetworkInterfaceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyNetworkInterfaceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyReservedInstancesRequest&, const Model::ModifyReservedInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReservedInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifySnapshotAttributeRequest&, const Model::ModifySnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifySpotFleetRequestRequest&, const Model::ModifySpotFleetRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySpotFleetRequestResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifySubnetAttributeRequest&, const Model::ModifySubnetAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySubnetAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVolumeRequest&, const Model::ModifyVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVolumeAttributeRequest&, const Model::ModifyVolumeAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVolumeAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcAttributeRequest&, const Model::ModifyVpcAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcEndpointRequest&, const Model::ModifyVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcPeeringConnectionOptionsRequest&, const Model::ModifyVpcPeeringConnectionOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcPeeringConnectionOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::MonitorInstancesRequest&, const Model::MonitorInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MonitorInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::MoveAddressToVpcRequest&, const Model::MoveAddressToVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MoveAddressToVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::PurchaseHostReservationRequest&, const Model::PurchaseHostReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseHostReservationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::PurchaseReservedInstancesOfferingRequest&, const Model::PurchaseReservedInstancesOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedInstancesOfferingResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::PurchaseScheduledInstancesRequest&, const Model::PurchaseScheduledInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseScheduledInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RebootInstancesRequest&, const Model::RebootInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RegisterImageRequest&, const Model::RegisterImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RejectVpcPeeringConnectionRequest&, const Model::RejectVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReleaseAddressRequest&, const Model::ReleaseAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleaseAddressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReleaseHostsRequest&, const Model::ReleaseHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleaseHostsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceIamInstanceProfileAssociationRequest&, const Model::ReplaceIamInstanceProfileAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceIamInstanceProfileAssociationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceNetworkAclAssociationRequest&, const Model::ReplaceNetworkAclAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceNetworkAclAssociationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceNetworkAclEntryRequest&, const Model::ReplaceNetworkAclEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceNetworkAclEntryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceRouteRequest&, const Model::ReplaceRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceRouteTableAssociationRequest&, const Model::ReplaceRouteTableAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceRouteTableAssociationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReportInstanceStatusRequest&, const Model::ReportInstanceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReportInstanceStatusResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RequestSpotFleetRequest&, const Model::RequestSpotFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestSpotFleetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RequestSpotInstancesRequest&, const Model::RequestSpotInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestSpotInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetFpgaImageAttributeRequest&, const Model::ResetFpgaImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetFpgaImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetImageAttributeRequest&, const Model::ResetImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetInstanceAttributeRequest&, const Model::ResetInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetNetworkInterfaceAttributeRequest&, const Model::ResetNetworkInterfaceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetNetworkInterfaceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetSnapshotAttributeRequest&, const Model::ResetSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RestoreAddressToClassicRequest&, const Model::RestoreAddressToClassicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreAddressToClassicResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RevokeSecurityGroupEgressRequest&, const Model::RevokeSecurityGroupEgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeSecurityGroupEgressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RevokeSecurityGroupIngressRequest&, const Model::RevokeSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RunInstancesRequest&, const Model::RunInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RunScheduledInstancesRequest&, const Model::RunScheduledInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunScheduledInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::StartInstancesRequest&, const Model::StartInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::StopInstancesRequest&, const Model::StopInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::TerminateInstancesRequest&, const Model::TerminateInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::UnassignIpv6AddressesRequest&, const Model::UnassignIpv6AddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnassignIpv6AddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::UnassignPrivateIpAddressesRequest&, const Model::UnassignPrivateIpAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnassignPrivateIpAddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::UnmonitorInstancesRequest&, const Model::UnmonitorInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnmonitorInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::UpdateSecurityGroupRuleDescriptionsEgressRequest&, const Model::UpdateSecurityGroupRuleDescriptionsEgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityGroupRuleDescriptionsEgressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::UpdateSecurityGroupRuleDescriptionsIngressRequest&, const Model::UpdateSecurityGroupRuleDescriptionsIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityGroupRuleDescriptionsIngressResponseReceivedHandler;

  /**
   * <fullname>Amazon Elastic Compute Cloud</fullname> <p>Amazon Elastic Compute
   * Cloud (Amazon EC2) provides resizable computing capacity in the Amazon Web
   * Services (AWS) cloud. Using Amazon EC2 eliminates your need to invest in
   * hardware up front, so you can develop and deploy applications faster.</p>
   */
  class AWS_EC2_API EC2Client : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EC2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~EC2Client();

        inline virtual const char* GetServiceClientName() const override { return "ec2"; }


        /**
         * <p>Accepts the Convertible Reserved Instance exchange quote described in the
         * <a>GetReservedInstancesExchangeQuote</a> call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptReservedInstancesExchangeQuote">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptReservedInstancesExchangeQuoteOutcome AcceptReservedInstancesExchangeQuote(const Model::AcceptReservedInstancesExchangeQuoteRequest& request) const;

        /**
         * <p>Accepts the Convertible Reserved Instance exchange quote described in the
         * <a>GetReservedInstancesExchangeQuote</a> call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptReservedInstancesExchangeQuote">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptReservedInstancesExchangeQuoteOutcomeCallable AcceptReservedInstancesExchangeQuoteCallable(const Model::AcceptReservedInstancesExchangeQuoteRequest& request) const;

        /**
         * <p>Accepts the Convertible Reserved Instance exchange quote described in the
         * <a>GetReservedInstancesExchangeQuote</a> call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptReservedInstancesExchangeQuote">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptReservedInstancesExchangeQuoteAsync(const Model::AcceptReservedInstancesExchangeQuoteRequest& request, const AcceptReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accept a VPC peering connection request. To accept a request, the VPC peering
         * connection must be in the <code>pending-acceptance</code> state, and you must be
         * the owner of the peer VPC. Use <a>DescribeVpcPeeringConnections</a> to view your
         * outstanding VPC peering connection requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptVpcPeeringConnectionOutcome AcceptVpcPeeringConnection(const Model::AcceptVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Accept a VPC peering connection request. To accept a request, the VPC peering
         * connection must be in the <code>pending-acceptance</code> state, and you must be
         * the owner of the peer VPC. Use <a>DescribeVpcPeeringConnections</a> to view your
         * outstanding VPC peering connection requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptVpcPeeringConnectionOutcomeCallable AcceptVpcPeeringConnectionCallable(const Model::AcceptVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Accept a VPC peering connection request. To accept a request, the VPC peering
         * connection must be in the <code>pending-acceptance</code> state, and you must be
         * the owner of the peer VPC. Use <a>DescribeVpcPeeringConnections</a> to view your
         * outstanding VPC peering connection requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AcceptVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptVpcPeeringConnectionAsync(const Model::AcceptVpcPeeringConnectionRequest& request, const AcceptVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allocates an Elastic IP address.</p> <p>An Elastic IP address is for use
         * either in the EC2-Classic platform or in a VPC. By default, you can allocate 5
         * Elastic IP addresses for EC2-Classic per region and 5 Elastic IP addresses for
         * EC2-VPC per region.</p> <p>If you release an Elastic IP address for use in a
         * VPC, you might be able to recover it. To recover an Elastic IP address that you
         * released, specify it in the <code>Address</code> parameter. Note that you cannot
         * recover an Elastic IP address that you released after it is allocated to another
         * AWS account.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateAddressOutcome AllocateAddress(const Model::AllocateAddressRequest& request) const;

        /**
         * <p>Allocates an Elastic IP address.</p> <p>An Elastic IP address is for use
         * either in the EC2-Classic platform or in a VPC. By default, you can allocate 5
         * Elastic IP addresses for EC2-Classic per region and 5 Elastic IP addresses for
         * EC2-VPC per region.</p> <p>If you release an Elastic IP address for use in a
         * VPC, you might be able to recover it. To recover an Elastic IP address that you
         * released, specify it in the <code>Address</code> parameter. Note that you cannot
         * recover an Elastic IP address that you released after it is allocated to another
         * AWS account.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateAddressOutcomeCallable AllocateAddressCallable(const Model::AllocateAddressRequest& request) const;

        /**
         * <p>Allocates an Elastic IP address.</p> <p>An Elastic IP address is for use
         * either in the EC2-Classic platform or in a VPC. By default, you can allocate 5
         * Elastic IP addresses for EC2-Classic per region and 5 Elastic IP addresses for
         * EC2-VPC per region.</p> <p>If you release an Elastic IP address for use in a
         * VPC, you might be able to recover it. To recover an Elastic IP address that you
         * released, specify it in the <code>Address</code> parameter. Note that you cannot
         * recover an Elastic IP address that you released after it is allocated to another
         * AWS account.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateAddressAsync(const Model::AllocateAddressRequest& request, const AllocateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allocates a Dedicated Host to your account. At minimum you need to specify
         * the instance size type, Availability Zone, and quantity of hosts you want to
         * allocate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateHosts">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateHostsOutcome AllocateHosts(const Model::AllocateHostsRequest& request) const;

        /**
         * <p>Allocates a Dedicated Host to your account. At minimum you need to specify
         * the instance size type, Availability Zone, and quantity of hosts you want to
         * allocate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateHosts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateHostsOutcomeCallable AllocateHostsCallable(const Model::AllocateHostsRequest& request) const;

        /**
         * <p>Allocates a Dedicated Host to your account. At minimum you need to specify
         * the instance size type, Availability Zone, and quantity of hosts you want to
         * allocate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateHosts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateHostsAsync(const Model::AllocateHostsRequest& request, const AllocateHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more IPv6 addresses to the specified network interface. You
         * can specify one or more specific IPv6 addresses, or you can specify the number
         * of IPv6 addresses to be automatically assigned from within the subnet's IPv6
         * CIDR block range. You can assign as many IPv6 addresses to a network interface
         * as you can assign private IPv4 addresses, and the limit varies per instance
         * type. For information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
         * Addresses Per Network Interface Per Instance Type</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssignIpv6Addresses">AWS
         * API Reference</a></p>
         */
        virtual Model::AssignIpv6AddressesOutcome AssignIpv6Addresses(const Model::AssignIpv6AddressesRequest& request) const;

        /**
         * <p>Assigns one or more IPv6 addresses to the specified network interface. You
         * can specify one or more specific IPv6 addresses, or you can specify the number
         * of IPv6 addresses to be automatically assigned from within the subnet's IPv6
         * CIDR block range. You can assign as many IPv6 addresses to a network interface
         * as you can assign private IPv4 addresses, and the limit varies per instance
         * type. For information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
         * Addresses Per Network Interface Per Instance Type</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssignIpv6Addresses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssignIpv6AddressesOutcomeCallable AssignIpv6AddressesCallable(const Model::AssignIpv6AddressesRequest& request) const;

        /**
         * <p>Assigns one or more IPv6 addresses to the specified network interface. You
         * can specify one or more specific IPv6 addresses, or you can specify the number
         * of IPv6 addresses to be automatically assigned from within the subnet's IPv6
         * CIDR block range. You can assign as many IPv6 addresses to a network interface
         * as you can assign private IPv4 addresses, and the limit varies per instance
         * type. For information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP
         * Addresses Per Network Interface Per Instance Type</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssignIpv6Addresses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssignIpv6AddressesAsync(const Model::AssignIpv6AddressesRequest& request, const AssignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more secondary private IP addresses to the specified network
         * interface. You can specify one or more specific secondary IP addresses, or you
         * can specify the number of secondary IP addresses to be automatically assigned
         * within the subnet's CIDR block range. The number of secondary IP addresses that
         * you can assign to an instance varies by instance type. For information about
         * instance types, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
         * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For more
         * information about Elastic IP addresses, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>AssignPrivateIpAddresses is available only in EC2-VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssignPrivateIpAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::AssignPrivateIpAddressesOutcome AssignPrivateIpAddresses(const Model::AssignPrivateIpAddressesRequest& request) const;

        /**
         * <p>Assigns one or more secondary private IP addresses to the specified network
         * interface. You can specify one or more specific secondary IP addresses, or you
         * can specify the number of secondary IP addresses to be automatically assigned
         * within the subnet's CIDR block range. The number of secondary IP addresses that
         * you can assign to an instance varies by instance type. For information about
         * instance types, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
         * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For more
         * information about Elastic IP addresses, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>AssignPrivateIpAddresses is available only in EC2-VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssignPrivateIpAddresses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssignPrivateIpAddressesOutcomeCallable AssignPrivateIpAddressesCallable(const Model::AssignPrivateIpAddressesRequest& request) const;

        /**
         * <p>Assigns one or more secondary private IP addresses to the specified network
         * interface. You can specify one or more specific secondary IP addresses, or you
         * can specify the number of secondary IP addresses to be automatically assigned
         * within the subnet's CIDR block range. The number of secondary IP addresses that
         * you can assign to an instance varies by instance type. For information about
         * instance types, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
         * Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For more
         * information about Elastic IP addresses, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>AssignPrivateIpAddresses is available only in EC2-VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssignPrivateIpAddresses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssignPrivateIpAddressesAsync(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an Elastic IP address with an instance or a network interface.</p>
         * <p>An Elastic IP address is for use in either the EC2-Classic platform or in a
         * VPC. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>[EC2-Classic, VPC in an EC2-VPC-only account] If the Elastic IP address is
         * already associated with a different instance, it is disassociated from that
         * instance and associated with the specified instance. If you associate an Elastic
         * IP address with an instance that has an existing Elastic IP address, the
         * existing address is disassociated from the instance, but remains allocated to
         * your account.</p> <p>[VPC in an EC2-Classic account] If you don't specify a
         * private IP address, the Elastic IP address is associated with the primary IP
         * address. If the Elastic IP address is already associated with a different
         * instance or a network interface, you get an error unless you allow
         * reassociation. You cannot associate an Elastic IP address with an instance or
         * network interface that has an existing Elastic IP address.</p> <important>
         * <p>This is an idempotent operation. If you perform the operation more than once,
         * Amazon EC2 doesn't return an error, and you may be charged for each time the
         * Elastic IP address is remapped to the same instance. For more information, see
         * the <i>Elastic IP Addresses</i> section of <a
         * href="http://aws.amazon.com/ec2/pricing/">Amazon EC2 Pricing</a>.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAddressOutcome AssociateAddress(const Model::AssociateAddressRequest& request) const;

        /**
         * <p>Associates an Elastic IP address with an instance or a network interface.</p>
         * <p>An Elastic IP address is for use in either the EC2-Classic platform or in a
         * VPC. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>[EC2-Classic, VPC in an EC2-VPC-only account] If the Elastic IP address is
         * already associated with a different instance, it is disassociated from that
         * instance and associated with the specified instance. If you associate an Elastic
         * IP address with an instance that has an existing Elastic IP address, the
         * existing address is disassociated from the instance, but remains allocated to
         * your account.</p> <p>[VPC in an EC2-Classic account] If you don't specify a
         * private IP address, the Elastic IP address is associated with the primary IP
         * address. If the Elastic IP address is already associated with a different
         * instance or a network interface, you get an error unless you allow
         * reassociation. You cannot associate an Elastic IP address with an instance or
         * network interface that has an existing Elastic IP address.</p> <important>
         * <p>This is an idempotent operation. If you perform the operation more than once,
         * Amazon EC2 doesn't return an error, and you may be charged for each time the
         * Elastic IP address is remapped to the same instance. For more information, see
         * the <i>Elastic IP Addresses</i> section of <a
         * href="http://aws.amazon.com/ec2/pricing/">Amazon EC2 Pricing</a>.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAddressOutcomeCallable AssociateAddressCallable(const Model::AssociateAddressRequest& request) const;

        /**
         * <p>Associates an Elastic IP address with an instance or a network interface.</p>
         * <p>An Elastic IP address is for use in either the EC2-Classic platform or in a
         * VPC. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>[EC2-Classic, VPC in an EC2-VPC-only account] If the Elastic IP address is
         * already associated with a different instance, it is disassociated from that
         * instance and associated with the specified instance. If you associate an Elastic
         * IP address with an instance that has an existing Elastic IP address, the
         * existing address is disassociated from the instance, but remains allocated to
         * your account.</p> <p>[VPC in an EC2-Classic account] If you don't specify a
         * private IP address, the Elastic IP address is associated with the primary IP
         * address. If the Elastic IP address is already associated with a different
         * instance or a network interface, you get an error unless you allow
         * reassociation. You cannot associate an Elastic IP address with an instance or
         * network interface that has an existing Elastic IP address.</p> <important>
         * <p>This is an idempotent operation. If you perform the operation more than once,
         * Amazon EC2 doesn't return an error, and you may be charged for each time the
         * Elastic IP address is remapped to the same instance. For more information, see
         * the <i>Elastic IP Addresses</i> section of <a
         * href="http://aws.amazon.com/ec2/pricing/">Amazon EC2 Pricing</a>.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAddressAsync(const Model::AssociateAddressRequest& request, const AssociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a set of DHCP options (that you've previously created) with the
         * specified VPC, or associates no DHCP options with the VPC.</p> <p>After you
         * associate the options with the VPC, any existing instances and all new instances
         * that you launch in that VPC use the options. You don't need to restart or
         * relaunch the instances. They automatically pick up the changes within a few
         * hours, depending on how frequently the instance renews its DHCP lease. You can
         * explicitly renew the lease using the operating system on the instance.</p>
         * <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateDhcpOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDhcpOptionsOutcome AssociateDhcpOptions(const Model::AssociateDhcpOptionsRequest& request) const;

        /**
         * <p>Associates a set of DHCP options (that you've previously created) with the
         * specified VPC, or associates no DHCP options with the VPC.</p> <p>After you
         * associate the options with the VPC, any existing instances and all new instances
         * that you launch in that VPC use the options. You don't need to restart or
         * relaunch the instances. They automatically pick up the changes within a few
         * hours, depending on how frequently the instance renews its DHCP lease. You can
         * explicitly renew the lease using the operating system on the instance.</p>
         * <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateDhcpOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDhcpOptionsOutcomeCallable AssociateDhcpOptionsCallable(const Model::AssociateDhcpOptionsRequest& request) const;

        /**
         * <p>Associates a set of DHCP options (that you've previously created) with the
         * specified VPC, or associates no DHCP options with the VPC.</p> <p>After you
         * associate the options with the VPC, any existing instances and all new instances
         * that you launch in that VPC use the options. You don't need to restart or
         * relaunch the instances. They automatically pick up the changes within a few
         * hours, depending on how frequently the instance renews its DHCP lease. You can
         * explicitly renew the lease using the operating system on the instance.</p>
         * <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateDhcpOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDhcpOptionsAsync(const Model::AssociateDhcpOptionsRequest& request, const AssociateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an IAM instance profile with a running or stopped instance. You
         * cannot associate more than one IAM instance profile with an
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateIamInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateIamInstanceProfileOutcome AssociateIamInstanceProfile(const Model::AssociateIamInstanceProfileRequest& request) const;

        /**
         * <p>Associates an IAM instance profile with a running or stopped instance. You
         * cannot associate more than one IAM instance profile with an
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateIamInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateIamInstanceProfileOutcomeCallable AssociateIamInstanceProfileCallable(const Model::AssociateIamInstanceProfileRequest& request) const;

        /**
         * <p>Associates an IAM instance profile with a running or stopped instance. You
         * cannot associate more than one IAM instance profile with an
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateIamInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateIamInstanceProfileAsync(const Model::AssociateIamInstanceProfileRequest& request, const AssociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a subnet with a route table. The subnet and route table must be in
         * the same VPC. This association causes traffic originating from the subnet to be
         * routed according to the routes in the route table. The action returns an
         * association ID, which you need in order to disassociate the route table from the
         * subnet later. A route table can be associated with multiple subnets.</p> <p>For
         * more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRouteTableOutcome AssociateRouteTable(const Model::AssociateRouteTableRequest& request) const;

        /**
         * <p>Associates a subnet with a route table. The subnet and route table must be in
         * the same VPC. This association causes traffic originating from the subnet to be
         * routed according to the routes in the route table. The action returns an
         * association ID, which you need in order to disassociate the route table from the
         * subnet later. A route table can be associated with multiple subnets.</p> <p>For
         * more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateRouteTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateRouteTableOutcomeCallable AssociateRouteTableCallable(const Model::AssociateRouteTableRequest& request) const;

        /**
         * <p>Associates a subnet with a route table. The subnet and route table must be in
         * the same VPC. This association causes traffic originating from the subnet to be
         * routed according to the routes in the route table. The action returns an
         * association ID, which you need in order to disassociate the route table from the
         * subnet later. A route table can be associated with multiple subnets.</p> <p>For
         * more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateRouteTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateRouteTableAsync(const Model::AssociateRouteTableRequest& request, const AssociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a CIDR block with your subnet. You can only associate a single
         * IPv6 CIDR block with your subnet. An IPv6 CIDR block must have a prefix length
         * of /64.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateSubnetCidrBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSubnetCidrBlockOutcome AssociateSubnetCidrBlock(const Model::AssociateSubnetCidrBlockRequest& request) const;

        /**
         * <p>Associates a CIDR block with your subnet. You can only associate a single
         * IPv6 CIDR block with your subnet. An IPv6 CIDR block must have a prefix length
         * of /64.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateSubnetCidrBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSubnetCidrBlockOutcomeCallable AssociateSubnetCidrBlockCallable(const Model::AssociateSubnetCidrBlockRequest& request) const;

        /**
         * <p>Associates a CIDR block with your subnet. You can only associate a single
         * IPv6 CIDR block with your subnet. An IPv6 CIDR block must have a prefix length
         * of /64.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateSubnetCidrBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSubnetCidrBlockAsync(const Model::AssociateSubnetCidrBlockRequest& request, const AssociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a CIDR block with your VPC. You can associate a secondary IPv4
         * CIDR block, or you can associate an Amazon-provided IPv6 CIDR block. The IPv6
         * CIDR block size is fixed at /56.</p> <p>For more information about associating
         * CIDR blocks with your VPC and applicable restrictions, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html#VPC_Sizing">VPC
         * and Subnet Sizing</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateVpcCidrBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateVpcCidrBlockOutcome AssociateVpcCidrBlock(const Model::AssociateVpcCidrBlockRequest& request) const;

        /**
         * <p>Associates a CIDR block with your VPC. You can associate a secondary IPv4
         * CIDR block, or you can associate an Amazon-provided IPv6 CIDR block. The IPv6
         * CIDR block size is fixed at /56.</p> <p>For more information about associating
         * CIDR blocks with your VPC and applicable restrictions, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html#VPC_Sizing">VPC
         * and Subnet Sizing</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateVpcCidrBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateVpcCidrBlockOutcomeCallable AssociateVpcCidrBlockCallable(const Model::AssociateVpcCidrBlockRequest& request) const;

        /**
         * <p>Associates a CIDR block with your VPC. You can associate a secondary IPv4
         * CIDR block, or you can associate an Amazon-provided IPv6 CIDR block. The IPv6
         * CIDR block size is fixed at /56.</p> <p>For more information about associating
         * CIDR blocks with your VPC and applicable restrictions, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html#VPC_Sizing">VPC
         * and Subnet Sizing</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateVpcCidrBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateVpcCidrBlockAsync(const Model::AssociateVpcCidrBlockRequest& request, const AssociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Links an EC2-Classic instance to a ClassicLink-enabled VPC through one or
         * more of the VPC's security groups. You cannot link an EC2-Classic instance to
         * more than one VPC at a time. You can only link an instance that's in the
         * <code>running</code> state. An instance is automatically unlinked from a VPC
         * when it's stopped - you can link it to the VPC again when you restart it.</p>
         * <p>After you've linked an instance, you cannot change the VPC security groups
         * that are associated with it. To change the security groups, you must first
         * unlink the instance, and then link it again.</p> <p>Linking your instance to a
         * VPC is sometimes referred to as <i>attaching</i> your instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachClassicLinkVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachClassicLinkVpcOutcome AttachClassicLinkVpc(const Model::AttachClassicLinkVpcRequest& request) const;

        /**
         * <p>Links an EC2-Classic instance to a ClassicLink-enabled VPC through one or
         * more of the VPC's security groups. You cannot link an EC2-Classic instance to
         * more than one VPC at a time. You can only link an instance that's in the
         * <code>running</code> state. An instance is automatically unlinked from a VPC
         * when it's stopped - you can link it to the VPC again when you restart it.</p>
         * <p>After you've linked an instance, you cannot change the VPC security groups
         * that are associated with it. To change the security groups, you must first
         * unlink the instance, and then link it again.</p> <p>Linking your instance to a
         * VPC is sometimes referred to as <i>attaching</i> your instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachClassicLinkVpc">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachClassicLinkVpcOutcomeCallable AttachClassicLinkVpcCallable(const Model::AttachClassicLinkVpcRequest& request) const;

        /**
         * <p>Links an EC2-Classic instance to a ClassicLink-enabled VPC through one or
         * more of the VPC's security groups. You cannot link an EC2-Classic instance to
         * more than one VPC at a time. You can only link an instance that's in the
         * <code>running</code> state. An instance is automatically unlinked from a VPC
         * when it's stopped - you can link it to the VPC again when you restart it.</p>
         * <p>After you've linked an instance, you cannot change the VPC security groups
         * that are associated with it. To change the security groups, you must first
         * unlink the instance, and then link it again.</p> <p>Linking your instance to a
         * VPC is sometimes referred to as <i>attaching</i> your instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachClassicLinkVpc">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachClassicLinkVpcAsync(const Model::AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an Internet gateway to a VPC, enabling connectivity between the
         * Internet and the VPC. For more information about your VPC and Internet gateway,
         * see the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/">Amazon
         * Virtual Private Cloud User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachInternetGatewayOutcome AttachInternetGateway(const Model::AttachInternetGatewayRequest& request) const;

        /**
         * <p>Attaches an Internet gateway to a VPC, enabling connectivity between the
         * Internet and the VPC. For more information about your VPC and Internet gateway,
         * see the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/">Amazon
         * Virtual Private Cloud User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachInternetGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachInternetGatewayOutcomeCallable AttachInternetGatewayCallable(const Model::AttachInternetGatewayRequest& request) const;

        /**
         * <p>Attaches an Internet gateway to a VPC, enabling connectivity between the
         * Internet and the VPC. For more information about your VPC and Internet gateway,
         * see the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/">Amazon
         * Virtual Private Cloud User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachInternetGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachInternetGatewayAsync(const Model::AttachInternetGatewayRequest& request, const AttachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a network interface to an instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachNetworkInterfaceOutcome AttachNetworkInterface(const Model::AttachNetworkInterfaceRequest& request) const;

        /**
         * <p>Attaches a network interface to an instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachNetworkInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachNetworkInterfaceOutcomeCallable AttachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request) const;

        /**
         * <p>Attaches a network interface to an instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachNetworkInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an EBS volume to a running or stopped instance and exposes it to the
         * instance with the specified device name.</p> <p>Encrypted EBS volumes may only
         * be attached to instances that support Amazon EBS encryption. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>For a list of supported device names, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-attaching-volume.html">Attaching
         * an EBS Volume to an Instance</a>. Any device names that aren't reserved for
         * instance store volumes can be used for EBS volumes. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
         * EC2 Instance Store</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>If a volume has an AWS Marketplace product code:</p> <ul> <li>
         * <p>The volume can be attached only to a stopped instance.</p> </li> <li> <p>AWS
         * Marketplace product codes are copied from the volume to the instance.</p> </li>
         * <li> <p>You must be subscribed to the product.</p> </li> <li> <p>The instance
         * type and operating system of the instance must support the product. For example,
         * you can't detach a volume from a Windows instance and attach it to a Linux
         * instance.</p> </li> </ul> <p>For an overview of the AWS Marketplace, see <a
         * href="https://aws.amazon.com/marketplace/help/200900000">Introducing AWS
         * Marketplace</a>.</p> <p>For more information about EBS volumes, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-attaching-volume.html">Attaching
         * Amazon EBS Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachVolumeOutcome AttachVolume(const Model::AttachVolumeRequest& request) const;

        /**
         * <p>Attaches an EBS volume to a running or stopped instance and exposes it to the
         * instance with the specified device name.</p> <p>Encrypted EBS volumes may only
         * be attached to instances that support Amazon EBS encryption. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>For a list of supported device names, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-attaching-volume.html">Attaching
         * an EBS Volume to an Instance</a>. Any device names that aren't reserved for
         * instance store volumes can be used for EBS volumes. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
         * EC2 Instance Store</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>If a volume has an AWS Marketplace product code:</p> <ul> <li>
         * <p>The volume can be attached only to a stopped instance.</p> </li> <li> <p>AWS
         * Marketplace product codes are copied from the volume to the instance.</p> </li>
         * <li> <p>You must be subscribed to the product.</p> </li> <li> <p>The instance
         * type and operating system of the instance must support the product. For example,
         * you can't detach a volume from a Windows instance and attach it to a Linux
         * instance.</p> </li> </ul> <p>For an overview of the AWS Marketplace, see <a
         * href="https://aws.amazon.com/marketplace/help/200900000">Introducing AWS
         * Marketplace</a>.</p> <p>For more information about EBS volumes, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-attaching-volume.html">Attaching
         * Amazon EBS Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachVolumeOutcomeCallable AttachVolumeCallable(const Model::AttachVolumeRequest& request) const;

        /**
         * <p>Attaches an EBS volume to a running or stopped instance and exposes it to the
         * instance with the specified device name.</p> <p>Encrypted EBS volumes may only
         * be attached to instances that support Amazon EBS encryption. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>For a list of supported device names, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-attaching-volume.html">Attaching
         * an EBS Volume to an Instance</a>. Any device names that aren't reserved for
         * instance store volumes can be used for EBS volumes. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
         * EC2 Instance Store</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>If a volume has an AWS Marketplace product code:</p> <ul> <li>
         * <p>The volume can be attached only to a stopped instance.</p> </li> <li> <p>AWS
         * Marketplace product codes are copied from the volume to the instance.</p> </li>
         * <li> <p>You must be subscribed to the product.</p> </li> <li> <p>The instance
         * type and operating system of the instance must support the product. For example,
         * you can't detach a volume from a Windows instance and attach it to a Linux
         * instance.</p> </li> </ul> <p>For an overview of the AWS Marketplace, see <a
         * href="https://aws.amazon.com/marketplace/help/200900000">Introducing AWS
         * Marketplace</a>.</p> <p>For more information about EBS volumes, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-attaching-volume.html">Attaching
         * Amazon EBS Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachVolumeAsync(const Model::AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a virtual private gateway to a VPC. You can attach one virtual
         * private gateway to one VPC at a time.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachVpnGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachVpnGatewayOutcome AttachVpnGateway(const Model::AttachVpnGatewayRequest& request) const;

        /**
         * <p>Attaches a virtual private gateway to a VPC. You can attach one virtual
         * private gateway to one VPC at a time.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachVpnGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachVpnGatewayOutcomeCallable AttachVpnGatewayCallable(const Model::AttachVpnGatewayRequest& request) const;

        /**
         * <p>Attaches a virtual private gateway to a VPC. You can attach one virtual
         * private gateway to one VPC at a time.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachVpnGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachVpnGatewayAsync(const Model::AttachVpnGatewayRequest& request, const AttachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[EC2-VPC only] Adds one or more egress rules to a security group for use with
         * a VPC. Specifically, this action permits instances to send traffic to one or
         * more destination IPv4 or IPv6 CIDR address ranges, or to one or more destination
         * security groups for the same VPC. This action doesn't apply to security groups
         * for use in EC2-Classic. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.
         * For more information about security group limits, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Appendix_Limits.html">Amazon
         * VPC Limits</a>.</p> <p>Each rule consists of the protocol (for example, TCP),
         * plus either a CIDR range or a source group. For the TCP and UDP protocols, you
         * must also specify the destination port or port range. For the ICMP protocol, you
         * must also specify the ICMP type and code. You can use -1 for the type or code to
         * mean all types or all codes. You can optionally specify a description for the
         * rule.</p> <p>Rule changes are propagated to affected instances as quickly as
         * possible. However, a small delay might occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeSecurityGroupEgress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeSecurityGroupEgressOutcome AuthorizeSecurityGroupEgress(const Model::AuthorizeSecurityGroupEgressRequest& request) const;

        /**
         * <p>[EC2-VPC only] Adds one or more egress rules to a security group for use with
         * a VPC. Specifically, this action permits instances to send traffic to one or
         * more destination IPv4 or IPv6 CIDR address ranges, or to one or more destination
         * security groups for the same VPC. This action doesn't apply to security groups
         * for use in EC2-Classic. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.
         * For more information about security group limits, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Appendix_Limits.html">Amazon
         * VPC Limits</a>.</p> <p>Each rule consists of the protocol (for example, TCP),
         * plus either a CIDR range or a source group. For the TCP and UDP protocols, you
         * must also specify the destination port or port range. For the ICMP protocol, you
         * must also specify the ICMP type and code. You can use -1 for the type or code to
         * mean all types or all codes. You can optionally specify a description for the
         * rule.</p> <p>Rule changes are propagated to affected instances as quickly as
         * possible. However, a small delay might occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeSecurityGroupEgress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeSecurityGroupEgressOutcomeCallable AuthorizeSecurityGroupEgressCallable(const Model::AuthorizeSecurityGroupEgressRequest& request) const;

        /**
         * <p>[EC2-VPC only] Adds one or more egress rules to a security group for use with
         * a VPC. Specifically, this action permits instances to send traffic to one or
         * more destination IPv4 or IPv6 CIDR address ranges, or to one or more destination
         * security groups for the same VPC. This action doesn't apply to security groups
         * for use in EC2-Classic. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.
         * For more information about security group limits, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Appendix_Limits.html">Amazon
         * VPC Limits</a>.</p> <p>Each rule consists of the protocol (for example, TCP),
         * plus either a CIDR range or a source group. For the TCP and UDP protocols, you
         * must also specify the destination port or port range. For the ICMP protocol, you
         * must also specify the ICMP type and code. You can use -1 for the type or code to
         * mean all types or all codes. You can optionally specify a description for the
         * rule.</p> <p>Rule changes are propagated to affected instances as quickly as
         * possible. However, a small delay might occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeSecurityGroupEgress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeSecurityGroupEgressAsync(const Model::AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more ingress rules to a security group.</p> <p>Rule changes are
         * propagated to instances within the security group as quickly as possible.
         * However, a small delay might occur.</p> <p>[EC2-Classic] This action gives one
         * or more IPv4 CIDR address ranges permission to access a security group in your
         * account, or gives one or more security groups (called the <i>source groups</i>)
         * permission to access a security group for your account. A source group can be
         * for your own AWS account, or another. You can have up to 100 rules per
         * group.</p> <p>[EC2-VPC] This action gives one or more IPv4 or IPv6 CIDR address
         * ranges permission to access a security group in your VPC, or gives one or more
         * other security groups (called the <i>source groups</i>) permission to access a
         * security group for your VPC. The security groups must all be for the same VPC or
         * a peer VPC in a VPC peering connection. For more information about VPC security
         * group limits, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Appendix_Limits.html">Amazon
         * VPC Limits</a>.</p> <p>You can optionally specify a description for the security
         * group rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeSecurityGroupIngressOutcome AuthorizeSecurityGroupIngress(const Model::AuthorizeSecurityGroupIngressRequest& request) const;

        /**
         * <p>Adds one or more ingress rules to a security group.</p> <p>Rule changes are
         * propagated to instances within the security group as quickly as possible.
         * However, a small delay might occur.</p> <p>[EC2-Classic] This action gives one
         * or more IPv4 CIDR address ranges permission to access a security group in your
         * account, or gives one or more security groups (called the <i>source groups</i>)
         * permission to access a security group for your account. A source group can be
         * for your own AWS account, or another. You can have up to 100 rules per
         * group.</p> <p>[EC2-VPC] This action gives one or more IPv4 or IPv6 CIDR address
         * ranges permission to access a security group in your VPC, or gives one or more
         * other security groups (called the <i>source groups</i>) permission to access a
         * security group for your VPC. The security groups must all be for the same VPC or
         * a peer VPC in a VPC peering connection. For more information about VPC security
         * group limits, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Appendix_Limits.html">Amazon
         * VPC Limits</a>.</p> <p>You can optionally specify a description for the security
         * group rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeSecurityGroupIngressOutcomeCallable AuthorizeSecurityGroupIngressCallable(const Model::AuthorizeSecurityGroupIngressRequest& request) const;

        /**
         * <p>Adds one or more ingress rules to a security group.</p> <p>Rule changes are
         * propagated to instances within the security group as quickly as possible.
         * However, a small delay might occur.</p> <p>[EC2-Classic] This action gives one
         * or more IPv4 CIDR address ranges permission to access a security group in your
         * account, or gives one or more security groups (called the <i>source groups</i>)
         * permission to access a security group for your account. A source group can be
         * for your own AWS account, or another. You can have up to 100 rules per
         * group.</p> <p>[EC2-VPC] This action gives one or more IPv4 or IPv6 CIDR address
         * ranges permission to access a security group in your VPC, or gives one or more
         * other security groups (called the <i>source groups</i>) permission to access a
         * security group for your VPC. The security groups must all be for the same VPC or
         * a peer VPC in a VPC peering connection. For more information about VPC security
         * group limits, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Appendix_Limits.html">Amazon
         * VPC Limits</a>.</p> <p>You can optionally specify a description for the security
         * group rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeSecurityGroupIngressAsync(const Model::AuthorizeSecurityGroupIngressRequest& request, const AuthorizeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Bundles an Amazon instance store-backed Windows instance.</p> <p>During
         * bundling, only the root device volume (C:\) is bundled. Data on other instance
         * store volumes is not preserved.</p> <note> <p>This action is not applicable for
         * Linux/Unix instances or Windows instances that are backed by Amazon EBS.</p>
         * </note> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/Creating_InstanceStoreBacked_WinAMI.html">Creating
         * an Instance Store-Backed Windows AMI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/BundleInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::BundleInstanceOutcome BundleInstance(const Model::BundleInstanceRequest& request) const;

        /**
         * <p>Bundles an Amazon instance store-backed Windows instance.</p> <p>During
         * bundling, only the root device volume (C:\) is bundled. Data on other instance
         * store volumes is not preserved.</p> <note> <p>This action is not applicable for
         * Linux/Unix instances or Windows instances that are backed by Amazon EBS.</p>
         * </note> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/Creating_InstanceStoreBacked_WinAMI.html">Creating
         * an Instance Store-Backed Windows AMI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/BundleInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BundleInstanceOutcomeCallable BundleInstanceCallable(const Model::BundleInstanceRequest& request) const;

        /**
         * <p>Bundles an Amazon instance store-backed Windows instance.</p> <p>During
         * bundling, only the root device volume (C:\) is bundled. Data on other instance
         * store volumes is not preserved.</p> <note> <p>This action is not applicable for
         * Linux/Unix instances or Windows instances that are backed by Amazon EBS.</p>
         * </note> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/Creating_InstanceStoreBacked_WinAMI.html">Creating
         * an Instance Store-Backed Windows AMI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/BundleInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BundleInstanceAsync(const Model::BundleInstanceRequest& request, const BundleInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a bundling operation for an instance store-backed Windows
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelBundleTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelBundleTaskOutcome CancelBundleTask(const Model::CancelBundleTaskRequest& request) const;

        /**
         * <p>Cancels a bundling operation for an instance store-backed Windows
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelBundleTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelBundleTaskOutcomeCallable CancelBundleTaskCallable(const Model::CancelBundleTaskRequest& request) const;

        /**
         * <p>Cancels a bundling operation for an instance store-backed Windows
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelBundleTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelBundleTaskAsync(const Model::CancelBundleTaskRequest& request, const CancelBundleTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an active conversion task. The task can be the import of an instance
         * or volume. The action removes all artifacts of the conversion, including a
         * partially uploaded volume or instance. If the conversion is complete or is in
         * the process of transferring the final disk image, the command fails and returns
         * an exception.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/ec2-cli-vmimport-export.html">Importing
         * a Virtual Machine Using the Amazon EC2 CLI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelConversionTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelConversionTaskOutcome CancelConversionTask(const Model::CancelConversionTaskRequest& request) const;

        /**
         * <p>Cancels an active conversion task. The task can be the import of an instance
         * or volume. The action removes all artifacts of the conversion, including a
         * partially uploaded volume or instance. If the conversion is complete or is in
         * the process of transferring the final disk image, the command fails and returns
         * an exception.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/ec2-cli-vmimport-export.html">Importing
         * a Virtual Machine Using the Amazon EC2 CLI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelConversionTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelConversionTaskOutcomeCallable CancelConversionTaskCallable(const Model::CancelConversionTaskRequest& request) const;

        /**
         * <p>Cancels an active conversion task. The task can be the import of an instance
         * or volume. The action removes all artifacts of the conversion, including a
         * partially uploaded volume or instance. If the conversion is complete or is in
         * the process of transferring the final disk image, the command fails and returns
         * an exception.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/ec2-cli-vmimport-export.html">Importing
         * a Virtual Machine Using the Amazon EC2 CLI</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelConversionTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelConversionTaskAsync(const Model::CancelConversionTaskRequest& request, const CancelConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an active export task. The request removes all artifacts of the
         * export, including any partially-created Amazon S3 objects. If the export task is
         * complete or is in the process of transferring the final disk image, the command
         * fails and returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelExportTaskOutcome CancelExportTask(const Model::CancelExportTaskRequest& request) const;

        /**
         * <p>Cancels an active export task. The request removes all artifacts of the
         * export, including any partially-created Amazon S3 objects. If the export task is
         * complete or is in the process of transferring the final disk image, the command
         * fails and returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelExportTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelExportTaskOutcomeCallable CancelExportTaskCallable(const Model::CancelExportTaskRequest& request) const;

        /**
         * <p>Cancels an active export task. The request removes all artifacts of the
         * export, including any partially-created Amazon S3 objects. If the export task is
         * complete or is in the process of transferring the final disk image, the command
         * fails and returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelExportTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelExportTaskAsync(const Model::CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an in-process import virtual machine or import snapshot
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelImportTaskOutcome CancelImportTask(const Model::CancelImportTaskRequest& request) const;

        /**
         * <p>Cancels an in-process import virtual machine or import snapshot
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelImportTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelImportTaskOutcomeCallable CancelImportTaskCallable(const Model::CancelImportTaskRequest& request) const;

        /**
         * <p>Cancels an in-process import virtual machine or import snapshot
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelImportTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelImportTaskAsync(const Model::CancelImportTaskRequest& request, const CancelImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified Reserved Instance listing in the Reserved Instance
         * Marketplace.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelReservedInstancesListing">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelReservedInstancesListingOutcome CancelReservedInstancesListing(const Model::CancelReservedInstancesListingRequest& request) const;

        /**
         * <p>Cancels the specified Reserved Instance listing in the Reserved Instance
         * Marketplace.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelReservedInstancesListing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelReservedInstancesListingOutcomeCallable CancelReservedInstancesListingCallable(const Model::CancelReservedInstancesListingRequest& request) const;

        /**
         * <p>Cancels the specified Reserved Instance listing in the Reserved Instance
         * Marketplace.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelReservedInstancesListing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelReservedInstancesListingAsync(const Model::CancelReservedInstancesListingRequest& request, const CancelReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified Spot fleet requests.</p> <p>After you cancel a Spot
         * fleet request, the Spot fleet launches no new Spot instances. You must specify
         * whether the Spot fleet should also terminate its Spot instances. If you
         * terminate the instances, the Spot fleet request enters the
         * <code>cancelled_terminating</code> state. Otherwise, the Spot fleet request
         * enters the <code>cancelled_running</code> state and the instances continue to
         * run until they are interrupted or you terminate them manually.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotFleetRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSpotFleetRequestsOutcome CancelSpotFleetRequests(const Model::CancelSpotFleetRequestsRequest& request) const;

        /**
         * <p>Cancels the specified Spot fleet requests.</p> <p>After you cancel a Spot
         * fleet request, the Spot fleet launches no new Spot instances. You must specify
         * whether the Spot fleet should also terminate its Spot instances. If you
         * terminate the instances, the Spot fleet request enters the
         * <code>cancelled_terminating</code> state. Otherwise, the Spot fleet request
         * enters the <code>cancelled_running</code> state and the instances continue to
         * run until they are interrupted or you terminate them manually.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotFleetRequests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelSpotFleetRequestsOutcomeCallable CancelSpotFleetRequestsCallable(const Model::CancelSpotFleetRequestsRequest& request) const;

        /**
         * <p>Cancels the specified Spot fleet requests.</p> <p>After you cancel a Spot
         * fleet request, the Spot fleet launches no new Spot instances. You must specify
         * whether the Spot fleet should also terminate its Spot instances. If you
         * terminate the instances, the Spot fleet request enters the
         * <code>cancelled_terminating</code> state. Otherwise, the Spot fleet request
         * enters the <code>cancelled_running</code> state and the instances continue to
         * run until they are interrupted or you terminate them manually.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotFleetRequests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSpotFleetRequestsAsync(const Model::CancelSpotFleetRequestsRequest& request, const CancelSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels one or more Spot instance requests. Spot instances are instances that
         * Amazon EC2 starts on your behalf when the bid price that you specify exceeds the
         * current Spot price. Amazon EC2 periodically sets the Spot price based on
         * available Spot instance capacity and current Spot instance requests. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot
         * Instance Requests</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <important> <p>Canceling a Spot instance request does not terminate running Spot
         * instances associated with the request.</p> </important><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotInstanceRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSpotInstanceRequestsOutcome CancelSpotInstanceRequests(const Model::CancelSpotInstanceRequestsRequest& request) const;

        /**
         * <p>Cancels one or more Spot instance requests. Spot instances are instances that
         * Amazon EC2 starts on your behalf when the bid price that you specify exceeds the
         * current Spot price. Amazon EC2 periodically sets the Spot price based on
         * available Spot instance capacity and current Spot instance requests. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot
         * Instance Requests</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <important> <p>Canceling a Spot instance request does not terminate running Spot
         * instances associated with the request.</p> </important><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotInstanceRequests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelSpotInstanceRequestsOutcomeCallable CancelSpotInstanceRequestsCallable(const Model::CancelSpotInstanceRequestsRequest& request) const;

        /**
         * <p>Cancels one or more Spot instance requests. Spot instances are instances that
         * Amazon EC2 starts on your behalf when the bid price that you specify exceeds the
         * current Spot price. Amazon EC2 periodically sets the Spot price based on
         * available Spot instance capacity and current Spot instance requests. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot
         * Instance Requests</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <important> <p>Canceling a Spot instance request does not terminate running Spot
         * instances associated with the request.</p> </important><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotInstanceRequests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSpotInstanceRequestsAsync(const Model::CancelSpotInstanceRequestsRequest& request, const CancelSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Determines whether a product code is associated with an instance. This action
         * can only be used by the owner of the product code. It is useful when a product
         * code owner must verify whether another user's instance is eligible for
         * support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConfirmProductInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmProductInstanceOutcome ConfirmProductInstance(const Model::ConfirmProductInstanceRequest& request) const;

        /**
         * <p>Determines whether a product code is associated with an instance. This action
         * can only be used by the owner of the product code. It is useful when a product
         * code owner must verify whether another user's instance is eligible for
         * support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConfirmProductInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmProductInstanceOutcomeCallable ConfirmProductInstanceCallable(const Model::ConfirmProductInstanceRequest& request) const;

        /**
         * <p>Determines whether a product code is associated with an instance. This action
         * can only be used by the owner of the product code. It is useful when a product
         * code owner must verify whether another user's instance is eligible for
         * support.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConfirmProductInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmProductInstanceAsync(const Model::ConfirmProductInstanceRequest& request, const ConfirmProductInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified Amazon FPGA Image (AFI) to the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyFpgaImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyFpgaImageOutcome CopyFpgaImage(const Model::CopyFpgaImageRequest& request) const;

        /**
         * <p>Copies the specified Amazon FPGA Image (AFI) to the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyFpgaImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyFpgaImageOutcomeCallable CopyFpgaImageCallable(const Model::CopyFpgaImageRequest& request) const;

        /**
         * <p>Copies the specified Amazon FPGA Image (AFI) to the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyFpgaImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyFpgaImageAsync(const Model::CopyFpgaImageRequest& request, const CopyFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates the copy of an AMI from the specified source region to the current
         * region. You specify the destination region by using its endpoint when making the
         * request.</p> <p>For more information about the prerequisites and limits when
         * copying an AMI, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/CopyingAMIs.html">Copying
         * an AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyImage">AWS API
         * Reference</a></p>
         */
        virtual Model::CopyImageOutcome CopyImage(const Model::CopyImageRequest& request) const;

        /**
         * <p>Initiates the copy of an AMI from the specified source region to the current
         * region. You specify the destination region by using its endpoint when making the
         * request.</p> <p>For more information about the prerequisites and limits when
         * copying an AMI, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/CopyingAMIs.html">Copying
         * an AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyImage">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyImageOutcomeCallable CopyImageCallable(const Model::CopyImageRequest& request) const;

        /**
         * <p>Initiates the copy of an AMI from the specified source region to the current
         * region. You specify the destination region by using its endpoint when making the
         * request.</p> <p>For more information about the prerequisites and limits when
         * copying an AMI, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/CopyingAMIs.html">Copying
         * an AMI</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopyImage">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyImageAsync(const Model::CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies a point-in-time snapshot of an EBS volume and stores it in Amazon S3.
         * You can copy the snapshot within the same region or from one region to another.
         * You can use the snapshot to create EBS volumes or Amazon Machine Images (AMIs).
         * The snapshot is copied to the regional endpoint that you send the HTTP request
         * to.</p> <p>Copies of encrypted EBS snapshots remain encrypted. Copies of
         * unencrypted snapshots remain unencrypted, unless the <code>Encrypted</code> flag
         * is specified during the snapshot copy operation. By default, encrypted snapshot
         * copies use the default AWS Key Management Service (AWS KMS) customer master key
         * (CMK); however, you can specify a non-default CMK with the <code>KmsKeyId</code>
         * parameter. </p> <note> <p>To copy an encrypted snapshot that has been shared
         * from another account, you must have permissions for the CMK used to encrypt the
         * snapshot.</p> </note> <note> <p>Snapshots created by the CopySnapshot action
         * have an arbitrary volume ID that should not be used for any purpose.</p> </note>
         * <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-copy-snapshot.html">Copying
         * an Amazon EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopySnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;

        /**
         * <p>Copies a point-in-time snapshot of an EBS volume and stores it in Amazon S3.
         * You can copy the snapshot within the same region or from one region to another.
         * You can use the snapshot to create EBS volumes or Amazon Machine Images (AMIs).
         * The snapshot is copied to the regional endpoint that you send the HTTP request
         * to.</p> <p>Copies of encrypted EBS snapshots remain encrypted. Copies of
         * unencrypted snapshots remain unencrypted, unless the <code>Encrypted</code> flag
         * is specified during the snapshot copy operation. By default, encrypted snapshot
         * copies use the default AWS Key Management Service (AWS KMS) customer master key
         * (CMK); however, you can specify a non-default CMK with the <code>KmsKeyId</code>
         * parameter. </p> <note> <p>To copy an encrypted snapshot that has been shared
         * from another account, you must have permissions for the CMK used to encrypt the
         * snapshot.</p> </note> <note> <p>Snapshots created by the CopySnapshot action
         * have an arbitrary volume ID that should not be used for any purpose.</p> </note>
         * <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-copy-snapshot.html">Copying
         * an Amazon EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopySnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const Model::CopySnapshotRequest& request) const;

        /**
         * <p>Copies a point-in-time snapshot of an EBS volume and stores it in Amazon S3.
         * You can copy the snapshot within the same region or from one region to another.
         * You can use the snapshot to create EBS volumes or Amazon Machine Images (AMIs).
         * The snapshot is copied to the regional endpoint that you send the HTTP request
         * to.</p> <p>Copies of encrypted EBS snapshots remain encrypted. Copies of
         * unencrypted snapshots remain unencrypted, unless the <code>Encrypted</code> flag
         * is specified during the snapshot copy operation. By default, encrypted snapshot
         * copies use the default AWS Key Management Service (AWS KMS) customer master key
         * (CMK); however, you can specify a non-default CMK with the <code>KmsKeyId</code>
         * parameter. </p> <note> <p>To copy an encrypted snapshot that has been shared
         * from another account, you must have permissions for the CMK used to encrypt the
         * snapshot.</p> </note> <note> <p>Snapshots created by the CopySnapshot action
         * have an arbitrary volume ID that should not be used for any purpose.</p> </note>
         * <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-copy-snapshot.html">Copying
         * an Amazon EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CopySnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopySnapshotAsync(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information to AWS about your VPN customer gateway device. The
         * customer gateway is the appliance at your end of the VPN connection. (The device
         * on the AWS side of the VPN connection is the virtual private gateway.) You must
         * provide the Internet-routable IP address of the customer gateway's external
         * interface. The IP address must be static and may be behind a device performing
         * network address translation (NAT).</p> <p>For devices that use Border Gateway
         * Protocol (BGP), you can also provide the device's BGP Autonomous System Number
         * (ASN). You can use an existing ASN assigned to your network. If you don't have
         * an ASN already, you can use a private ASN (in the 64512 - 65534 range).</p>
         * <note> <p>Amazon EC2 supports all 2-byte ASN numbers in the range of 1 - 65534,
         * with the exception of 7224, which is reserved in the <code>us-east-1</code>
         * region, and 9059, which is reserved in the <code>eu-west-1</code> region.</p>
         * </note> <p>For more information about VPN customer gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p> <important> <p>You cannot create more than one
         * customer gateway with the same VPN type, IP address, and BGP ASN parameter
         * values. If you run an identical request more than one time, the first request
         * creates the customer gateway, and subsequent requests return information about
         * the existing customer gateway. The subsequent requests do not create new
         * customer gateway resources.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomerGatewayOutcome CreateCustomerGateway(const Model::CreateCustomerGatewayRequest& request) const;

        /**
         * <p>Provides information to AWS about your VPN customer gateway device. The
         * customer gateway is the appliance at your end of the VPN connection. (The device
         * on the AWS side of the VPN connection is the virtual private gateway.) You must
         * provide the Internet-routable IP address of the customer gateway's external
         * interface. The IP address must be static and may be behind a device performing
         * network address translation (NAT).</p> <p>For devices that use Border Gateway
         * Protocol (BGP), you can also provide the device's BGP Autonomous System Number
         * (ASN). You can use an existing ASN assigned to your network. If you don't have
         * an ASN already, you can use a private ASN (in the 64512 - 65534 range).</p>
         * <note> <p>Amazon EC2 supports all 2-byte ASN numbers in the range of 1 - 65534,
         * with the exception of 7224, which is reserved in the <code>us-east-1</code>
         * region, and 9059, which is reserved in the <code>eu-west-1</code> region.</p>
         * </note> <p>For more information about VPN customer gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p> <important> <p>You cannot create more than one
         * customer gateway with the same VPN type, IP address, and BGP ASN parameter
         * values. If you run an identical request more than one time, the first request
         * creates the customer gateway, and subsequent requests return information about
         * the existing customer gateway. The subsequent requests do not create new
         * customer gateway resources.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCustomerGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomerGatewayOutcomeCallable CreateCustomerGatewayCallable(const Model::CreateCustomerGatewayRequest& request) const;

        /**
         * <p>Provides information to AWS about your VPN customer gateway device. The
         * customer gateway is the appliance at your end of the VPN connection. (The device
         * on the AWS side of the VPN connection is the virtual private gateway.) You must
         * provide the Internet-routable IP address of the customer gateway's external
         * interface. The IP address must be static and may be behind a device performing
         * network address translation (NAT).</p> <p>For devices that use Border Gateway
         * Protocol (BGP), you can also provide the device's BGP Autonomous System Number
         * (ASN). You can use an existing ASN assigned to your network. If you don't have
         * an ASN already, you can use a private ASN (in the 64512 - 65534 range).</p>
         * <note> <p>Amazon EC2 supports all 2-byte ASN numbers in the range of 1 - 65534,
         * with the exception of 7224, which is reserved in the <code>us-east-1</code>
         * region, and 9059, which is reserved in the <code>eu-west-1</code> region.</p>
         * </note> <p>For more information about VPN customer gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p> <important> <p>You cannot create more than one
         * customer gateway with the same VPN type, IP address, and BGP ASN parameter
         * values. If you run an identical request more than one time, the first request
         * creates the customer gateway, and subsequent requests return information about
         * the existing customer gateway. The subsequent requests do not create new
         * customer gateway resources.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCustomerGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomerGatewayAsync(const Model::CreateCustomerGatewayRequest& request, const CreateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a default VPC with a size <code>/16</code> IPv4 CIDR block and a
         * default subnet in each Availability Zone. For more information about the
         * components of a default VPC, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/default-vpc.html">Default
         * VPC and Default Subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>. You cannot specify the components of the default VPC yourself.</p>
         * <p>You can create a default VPC if you deleted your previous default VPC. You
         * cannot have more than one default VPC per region. </p> <p>If your account
         * supports EC2-Classic, you cannot use this action to create a default VPC in a
         * region that supports EC2-Classic. If you want a default VPC in a region that
         * supports EC2-Classic, see "I really want a default VPC for my existing EC2
         * account. Is that possible?" in the <a
         * href="http://aws.amazon.com/vpc/faqs/#Default_VPCs">Default VPCs
         * FAQ</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateDefaultVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDefaultVpcOutcome CreateDefaultVpc(const Model::CreateDefaultVpcRequest& request) const;

        /**
         * <p>Creates a default VPC with a size <code>/16</code> IPv4 CIDR block and a
         * default subnet in each Availability Zone. For more information about the
         * components of a default VPC, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/default-vpc.html">Default
         * VPC and Default Subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>. You cannot specify the components of the default VPC yourself.</p>
         * <p>You can create a default VPC if you deleted your previous default VPC. You
         * cannot have more than one default VPC per region. </p> <p>If your account
         * supports EC2-Classic, you cannot use this action to create a default VPC in a
         * region that supports EC2-Classic. If you want a default VPC in a region that
         * supports EC2-Classic, see "I really want a default VPC for my existing EC2
         * account. Is that possible?" in the <a
         * href="http://aws.amazon.com/vpc/faqs/#Default_VPCs">Default VPCs
         * FAQ</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateDefaultVpc">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDefaultVpcOutcomeCallable CreateDefaultVpcCallable(const Model::CreateDefaultVpcRequest& request) const;

        /**
         * <p>Creates a default VPC with a size <code>/16</code> IPv4 CIDR block and a
         * default subnet in each Availability Zone. For more information about the
         * components of a default VPC, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/default-vpc.html">Default
         * VPC and Default Subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>. You cannot specify the components of the default VPC yourself.</p>
         * <p>You can create a default VPC if you deleted your previous default VPC. You
         * cannot have more than one default VPC per region. </p> <p>If your account
         * supports EC2-Classic, you cannot use this action to create a default VPC in a
         * region that supports EC2-Classic. If you want a default VPC in a region that
         * supports EC2-Classic, see "I really want a default VPC for my existing EC2
         * account. Is that possible?" in the <a
         * href="http://aws.amazon.com/vpc/faqs/#Default_VPCs">Default VPCs
         * FAQ</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateDefaultVpc">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDefaultVpcAsync(const Model::CreateDefaultVpcRequest& request, const CreateDefaultVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a set of DHCP options for your VPC. After creating the set, you must
         * associate it with the VPC, causing all existing and new instances that you
         * launch in the VPC to use this set of DHCP options. The following are the
         * individual DHCP options you can specify. For more information about the options,
         * see <a href="http://www.ietf.org/rfc/rfc2132.txt">RFC 2132</a>.</p> <ul> <li>
         * <p> <code>domain-name-servers</code> - The IP addresses of up to four domain
         * name servers, or AmazonProvidedDNS. The default DHCP option set specifies
         * AmazonProvidedDNS. If specifying more than one domain name server, specify the
         * IP addresses in a single parameter, separated by commas. If you want your
         * instance to receive a custom DNS hostname as specified in
         * <code>domain-name</code>, you must set <code>domain-name-servers</code> to a
         * custom DNS server.</p> </li> <li> <p> <code>domain-name</code> - If you're using
         * AmazonProvidedDNS in <code>us-east-1</code>, specify <code>ec2.internal</code>.
         * If you're using AmazonProvidedDNS in another region, specify
         * <code>region.compute.internal</code> (for example,
         * <code>ap-northeast-1.compute.internal</code>). Otherwise, specify a domain name
         * (for example, <code>MyCompany.com</code>). This value is used to complete
         * unqualified DNS hostnames. <b>Important</b>: Some Linux operating systems accept
         * multiple domain names separated by spaces. However, Windows and other Linux
         * operating systems treat the value as a single domain, which results in
         * unexpected behavior. If your DHCP options set is associated with a VPC that has
         * instances with multiple operating systems, specify only one domain name.</p>
         * </li> <li> <p> <code>ntp-servers</code> - The IP addresses of up to four Network
         * Time Protocol (NTP) servers.</p> </li> <li> <p>
         * <code>netbios-name-servers</code> - The IP addresses of up to four NetBIOS name
         * servers.</p> </li> <li> <p> <code>netbios-node-type</code> - The NetBIOS node
         * type (1, 2, 4, or 8). We recommend that you specify 2 (broadcast and multicast
         * are not currently supported). For more information about these node types, see
         * <a href="http://www.ietf.org/rfc/rfc2132.txt">RFC 2132</a>.</p> </li> </ul>
         * <p>Your VPC automatically starts out with a set of DHCP options that includes
         * only a DNS server that we provide (AmazonProvidedDNS). If you create a set of
         * options, and if your VPC has an Internet gateway, make sure to set the
         * <code>domain-name-servers</code> option either to <code>AmazonProvidedDNS</code>
         * or to a domain name server of your choice. For more information about DHCP
         * options, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateDhcpOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDhcpOptionsOutcome CreateDhcpOptions(const Model::CreateDhcpOptionsRequest& request) const;

        /**
         * <p>Creates a set of DHCP options for your VPC. After creating the set, you must
         * associate it with the VPC, causing all existing and new instances that you
         * launch in the VPC to use this set of DHCP options. The following are the
         * individual DHCP options you can specify. For more information about the options,
         * see <a href="http://www.ietf.org/rfc/rfc2132.txt">RFC 2132</a>.</p> <ul> <li>
         * <p> <code>domain-name-servers</code> - The IP addresses of up to four domain
         * name servers, or AmazonProvidedDNS. The default DHCP option set specifies
         * AmazonProvidedDNS. If specifying more than one domain name server, specify the
         * IP addresses in a single parameter, separated by commas. If you want your
         * instance to receive a custom DNS hostname as specified in
         * <code>domain-name</code>, you must set <code>domain-name-servers</code> to a
         * custom DNS server.</p> </li> <li> <p> <code>domain-name</code> - If you're using
         * AmazonProvidedDNS in <code>us-east-1</code>, specify <code>ec2.internal</code>.
         * If you're using AmazonProvidedDNS in another region, specify
         * <code>region.compute.internal</code> (for example,
         * <code>ap-northeast-1.compute.internal</code>). Otherwise, specify a domain name
         * (for example, <code>MyCompany.com</code>). This value is used to complete
         * unqualified DNS hostnames. <b>Important</b>: Some Linux operating systems accept
         * multiple domain names separated by spaces. However, Windows and other Linux
         * operating systems treat the value as a single domain, which results in
         * unexpected behavior. If your DHCP options set is associated with a VPC that has
         * instances with multiple operating systems, specify only one domain name.</p>
         * </li> <li> <p> <code>ntp-servers</code> - The IP addresses of up to four Network
         * Time Protocol (NTP) servers.</p> </li> <li> <p>
         * <code>netbios-name-servers</code> - The IP addresses of up to four NetBIOS name
         * servers.</p> </li> <li> <p> <code>netbios-node-type</code> - The NetBIOS node
         * type (1, 2, 4, or 8). We recommend that you specify 2 (broadcast and multicast
         * are not currently supported). For more information about these node types, see
         * <a href="http://www.ietf.org/rfc/rfc2132.txt">RFC 2132</a>.</p> </li> </ul>
         * <p>Your VPC automatically starts out with a set of DHCP options that includes
         * only a DNS server that we provide (AmazonProvidedDNS). If you create a set of
         * options, and if your VPC has an Internet gateway, make sure to set the
         * <code>domain-name-servers</code> option either to <code>AmazonProvidedDNS</code>
         * or to a domain name server of your choice. For more information about DHCP
         * options, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateDhcpOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDhcpOptionsOutcomeCallable CreateDhcpOptionsCallable(const Model::CreateDhcpOptionsRequest& request) const;

        /**
         * <p>Creates a set of DHCP options for your VPC. After creating the set, you must
         * associate it with the VPC, causing all existing and new instances that you
         * launch in the VPC to use this set of DHCP options. The following are the
         * individual DHCP options you can specify. For more information about the options,
         * see <a href="http://www.ietf.org/rfc/rfc2132.txt">RFC 2132</a>.</p> <ul> <li>
         * <p> <code>domain-name-servers</code> - The IP addresses of up to four domain
         * name servers, or AmazonProvidedDNS. The default DHCP option set specifies
         * AmazonProvidedDNS. If specifying more than one domain name server, specify the
         * IP addresses in a single parameter, separated by commas. If you want your
         * instance to receive a custom DNS hostname as specified in
         * <code>domain-name</code>, you must set <code>domain-name-servers</code> to a
         * custom DNS server.</p> </li> <li> <p> <code>domain-name</code> - If you're using
         * AmazonProvidedDNS in <code>us-east-1</code>, specify <code>ec2.internal</code>.
         * If you're using AmazonProvidedDNS in another region, specify
         * <code>region.compute.internal</code> (for example,
         * <code>ap-northeast-1.compute.internal</code>). Otherwise, specify a domain name
         * (for example, <code>MyCompany.com</code>). This value is used to complete
         * unqualified DNS hostnames. <b>Important</b>: Some Linux operating systems accept
         * multiple domain names separated by spaces. However, Windows and other Linux
         * operating systems treat the value as a single domain, which results in
         * unexpected behavior. If your DHCP options set is associated with a VPC that has
         * instances with multiple operating systems, specify only one domain name.</p>
         * </li> <li> <p> <code>ntp-servers</code> - The IP addresses of up to four Network
         * Time Protocol (NTP) servers.</p> </li> <li> <p>
         * <code>netbios-name-servers</code> - The IP addresses of up to four NetBIOS name
         * servers.</p> </li> <li> <p> <code>netbios-node-type</code> - The NetBIOS node
         * type (1, 2, 4, or 8). We recommend that you specify 2 (broadcast and multicast
         * are not currently supported). For more information about these node types, see
         * <a href="http://www.ietf.org/rfc/rfc2132.txt">RFC 2132</a>.</p> </li> </ul>
         * <p>Your VPC automatically starts out with a set of DHCP options that includes
         * only a DNS server that we provide (AmazonProvidedDNS). If you create a set of
         * options, and if your VPC has an Internet gateway, make sure to set the
         * <code>domain-name-servers</code> option either to <code>AmazonProvidedDNS</code>
         * or to a domain name server of your choice. For more information about DHCP
         * options, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateDhcpOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDhcpOptionsAsync(const Model::CreateDhcpOptionsRequest& request, const CreateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[IPv6 only] Creates an egress-only Internet gateway for your VPC. An
         * egress-only Internet gateway is used to enable outbound communication over IPv6
         * from instances in your VPC to the Internet, and prevents hosts outside of your
         * VPC from initiating an IPv6 connection with your instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateEgressOnlyInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEgressOnlyInternetGatewayOutcome CreateEgressOnlyInternetGateway(const Model::CreateEgressOnlyInternetGatewayRequest& request) const;

        /**
         * <p>[IPv6 only] Creates an egress-only Internet gateway for your VPC. An
         * egress-only Internet gateway is used to enable outbound communication over IPv6
         * from instances in your VPC to the Internet, and prevents hosts outside of your
         * VPC from initiating an IPv6 connection with your instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateEgressOnlyInternetGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEgressOnlyInternetGatewayOutcomeCallable CreateEgressOnlyInternetGatewayCallable(const Model::CreateEgressOnlyInternetGatewayRequest& request) const;

        /**
         * <p>[IPv6 only] Creates an egress-only Internet gateway for your VPC. An
         * egress-only Internet gateway is used to enable outbound communication over IPv6
         * from instances in your VPC to the Internet, and prevents hosts outside of your
         * VPC from initiating an IPv6 connection with your instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateEgressOnlyInternetGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEgressOnlyInternetGatewayAsync(const Model::CreateEgressOnlyInternetGatewayRequest& request, const CreateEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more flow logs to capture IP traffic for a specific network
         * interface, subnet, or VPC. Flow logs are delivered to a specified log group in
         * Amazon CloudWatch Logs. If you specify a VPC or subnet in the request, a log
         * stream is created in CloudWatch Logs for each network interface in the subnet or
         * VPC. Log streams can include information about accepted and rejected traffic to
         * a network interface. You can view the data in your log streams using Amazon
         * CloudWatch Logs.</p> <p>In your request, you must also specify an IAM role that
         * has permission to publish logs to CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFlowLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowLogsOutcome CreateFlowLogs(const Model::CreateFlowLogsRequest& request) const;

        /**
         * <p>Creates one or more flow logs to capture IP traffic for a specific network
         * interface, subnet, or VPC. Flow logs are delivered to a specified log group in
         * Amazon CloudWatch Logs. If you specify a VPC or subnet in the request, a log
         * stream is created in CloudWatch Logs for each network interface in the subnet or
         * VPC. Log streams can include information about accepted and rejected traffic to
         * a network interface. You can view the data in your log streams using Amazon
         * CloudWatch Logs.</p> <p>In your request, you must also specify an IAM role that
         * has permission to publish logs to CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFlowLogs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFlowLogsOutcomeCallable CreateFlowLogsCallable(const Model::CreateFlowLogsRequest& request) const;

        /**
         * <p>Creates one or more flow logs to capture IP traffic for a specific network
         * interface, subnet, or VPC. Flow logs are delivered to a specified log group in
         * Amazon CloudWatch Logs. If you specify a VPC or subnet in the request, a log
         * stream is created in CloudWatch Logs for each network interface in the subnet or
         * VPC. Log streams can include information about accepted and rejected traffic to
         * a network interface. You can view the data in your log streams using Amazon
         * CloudWatch Logs.</p> <p>In your request, you must also specify an IAM role that
         * has permission to publish logs to CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFlowLogs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFlowLogsAsync(const Model::CreateFlowLogsRequest& request, const CreateFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon FPGA Image (AFI) from the specified design checkpoint
         * (DCP).</p> <p>The create operation is asynchronous. To verify that the AFI is
         * ready for use, check the output logs.</p> <p>An AFI contains the FPGA bitstream
         * that is ready to download to an FPGA. You can securely deploy an AFI on one or
         * more FPGA-accelerated instances. For more information, see the <a
         * href="https://github.com/aws/aws-fpga/">AWS FPGA Hardware Development
         * Kit</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFpgaImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFpgaImageOutcome CreateFpgaImage(const Model::CreateFpgaImageRequest& request) const;

        /**
         * <p>Creates an Amazon FPGA Image (AFI) from the specified design checkpoint
         * (DCP).</p> <p>The create operation is asynchronous. To verify that the AFI is
         * ready for use, check the output logs.</p> <p>An AFI contains the FPGA bitstream
         * that is ready to download to an FPGA. You can securely deploy an AFI on one or
         * more FPGA-accelerated instances. For more information, see the <a
         * href="https://github.com/aws/aws-fpga/">AWS FPGA Hardware Development
         * Kit</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFpgaImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFpgaImageOutcomeCallable CreateFpgaImageCallable(const Model::CreateFpgaImageRequest& request) const;

        /**
         * <p>Creates an Amazon FPGA Image (AFI) from the specified design checkpoint
         * (DCP).</p> <p>The create operation is asynchronous. To verify that the AFI is
         * ready for use, check the output logs.</p> <p>An AFI contains the FPGA bitstream
         * that is ready to download to an FPGA. You can securely deploy an AFI on one or
         * more FPGA-accelerated instances. For more information, see the <a
         * href="https://github.com/aws/aws-fpga/">AWS FPGA Hardware Development
         * Kit</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFpgaImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFpgaImageAsync(const Model::CreateFpgaImageRequest& request, const CreateFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon EBS-backed AMI from an Amazon EBS-backed instance that is
         * either running or stopped.</p> <p>If you customized your instance with instance
         * store volumes or EBS volumes in addition to the root device volume, the new AMI
         * contains block device mapping information for those volumes. When you launch an
         * instance from this new AMI, the instance automatically launches with those
         * additional volumes.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
         * Amazon EBS-Backed Linux AMIs</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateImage">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateImageOutcome CreateImage(const Model::CreateImageRequest& request) const;

        /**
         * <p>Creates an Amazon EBS-backed AMI from an Amazon EBS-backed instance that is
         * either running or stopped.</p> <p>If you customized your instance with instance
         * store volumes or EBS volumes in addition to the root device volume, the new AMI
         * contains block device mapping information for those volumes. When you launch an
         * instance from this new AMI, the instance automatically launches with those
         * additional volumes.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
         * Amazon EBS-Backed Linux AMIs</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateImage">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request) const;

        /**
         * <p>Creates an Amazon EBS-backed AMI from an Amazon EBS-backed instance that is
         * either running or stopped.</p> <p>If you customized your instance with instance
         * store volumes or EBS volumes in addition to the root device volume, the new AMI
         * contains block device mapping information for those volumes. When you launch an
         * instance from this new AMI, the instance automatically launches with those
         * additional volumes.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
         * Amazon EBS-Backed Linux AMIs</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateImage">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports a running or stopped instance to an S3 bucket.</p> <p>For information
         * about the supported operating systems, image formats, and known limitations for
         * the types of instances you can export, see <a
         * href="http://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html">Exporting
         * an Instance as a VM Using VM Import/Export</a> in the <i>VM Import/Export User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateInstanceExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceExportTaskOutcome CreateInstanceExportTask(const Model::CreateInstanceExportTaskRequest& request) const;

        /**
         * <p>Exports a running or stopped instance to an S3 bucket.</p> <p>For information
         * about the supported operating systems, image formats, and known limitations for
         * the types of instances you can export, see <a
         * href="http://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html">Exporting
         * an Instance as a VM Using VM Import/Export</a> in the <i>VM Import/Export User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateInstanceExportTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceExportTaskOutcomeCallable CreateInstanceExportTaskCallable(const Model::CreateInstanceExportTaskRequest& request) const;

        /**
         * <p>Exports a running or stopped instance to an S3 bucket.</p> <p>For information
         * about the supported operating systems, image formats, and known limitations for
         * the types of instances you can export, see <a
         * href="http://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html">Exporting
         * an Instance as a VM Using VM Import/Export</a> in the <i>VM Import/Export User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateInstanceExportTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceExportTaskAsync(const Model::CreateInstanceExportTaskRequest& request, const CreateInstanceExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Internet gateway for use with a VPC. After creating the Internet
         * gateway, you attach it to a VPC using <a>AttachInternetGateway</a>.</p> <p>For
         * more information about your VPC and Internet gateway, see the <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/">Amazon Virtual
         * Private Cloud User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInternetGatewayOutcome CreateInternetGateway(const Model::CreateInternetGatewayRequest& request) const;

        /**
         * <p>Creates an Internet gateway for use with a VPC. After creating the Internet
         * gateway, you attach it to a VPC using <a>AttachInternetGateway</a>.</p> <p>For
         * more information about your VPC and Internet gateway, see the <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/">Amazon Virtual
         * Private Cloud User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateInternetGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInternetGatewayOutcomeCallable CreateInternetGatewayCallable(const Model::CreateInternetGatewayRequest& request) const;

        /**
         * <p>Creates an Internet gateway for use with a VPC. After creating the Internet
         * gateway, you attach it to a VPC using <a>AttachInternetGateway</a>.</p> <p>For
         * more information about your VPC and Internet gateway, see the <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/">Amazon Virtual
         * Private Cloud User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateInternetGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInternetGatewayAsync(const Model::CreateInternetGatewayRequest& request, const CreateInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a 2048-bit RSA key pair with the specified name. Amazon EC2 stores
         * the public key and displays the private key for you to save to a file. The
         * private key is returned as an unencrypted PEM encoded PKCS#8 private key. If a
         * key with the specified name already exists, Amazon EC2 returns an error.</p>
         * <p>You can have up to five thousand key pairs per region.</p> <p>The key pair
         * returned to you is available only in the region in which you create it. To
         * create a key pair that is available in all regions, use
         * <a>ImportKeyPair</a>.</p> <p>For more information about key pairs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeyPairOutcome CreateKeyPair(const Model::CreateKeyPairRequest& request) const;

        /**
         * <p>Creates a 2048-bit RSA key pair with the specified name. Amazon EC2 stores
         * the public key and displays the private key for you to save to a file. The
         * private key is returned as an unencrypted PEM encoded PKCS#8 private key. If a
         * key with the specified name already exists, Amazon EC2 returns an error.</p>
         * <p>You can have up to five thousand key pairs per region.</p> <p>The key pair
         * returned to you is available only in the region in which you create it. To
         * create a key pair that is available in all regions, use
         * <a>ImportKeyPair</a>.</p> <p>For more information about key pairs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeyPairOutcomeCallable CreateKeyPairCallable(const Model::CreateKeyPairRequest& request) const;

        /**
         * <p>Creates a 2048-bit RSA key pair with the specified name. Amazon EC2 stores
         * the public key and displays the private key for you to save to a file. The
         * private key is returned as an unencrypted PEM encoded PKCS#8 private key. If a
         * key with the specified name already exists, Amazon EC2 returns an error.</p>
         * <p>You can have up to five thousand key pairs per region.</p> <p>The key pair
         * returned to you is available only in the region in which you create it. To
         * create a key pair that is available in all regions, use
         * <a>ImportKeyPair</a>.</p> <p>For more information about key pairs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a NAT gateway in the specified subnet. A NAT gateway can be used to
         * enable instances in a private subnet to connect to the Internet. This action
         * creates a network interface in the specified subnet with a private IP address
         * from the IP address range of the subnet. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">NAT
         * Gateways</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNatGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNatGatewayOutcome CreateNatGateway(const Model::CreateNatGatewayRequest& request) const;

        /**
         * <p>Creates a NAT gateway in the specified subnet. A NAT gateway can be used to
         * enable instances in a private subnet to connect to the Internet. This action
         * creates a network interface in the specified subnet with a private IP address
         * from the IP address range of the subnet. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">NAT
         * Gateways</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNatGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNatGatewayOutcomeCallable CreateNatGatewayCallable(const Model::CreateNatGatewayRequest& request) const;

        /**
         * <p>Creates a NAT gateway in the specified subnet. A NAT gateway can be used to
         * enable instances in a private subnet to connect to the Internet. This action
         * creates a network interface in the specified subnet with a private IP address
         * from the IP address range of the subnet. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">NAT
         * Gateways</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNatGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNatGatewayAsync(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network ACL in a VPC. Network ACLs provide an optional layer of
         * security (in addition to security groups) for the instances in your VPC.</p>
         * <p>For more information about network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkAcl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkAclOutcome CreateNetworkAcl(const Model::CreateNetworkAclRequest& request) const;

        /**
         * <p>Creates a network ACL in a VPC. Network ACLs provide an optional layer of
         * security (in addition to security groups) for the instances in your VPC.</p>
         * <p>For more information about network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkAcl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkAclOutcomeCallable CreateNetworkAclCallable(const Model::CreateNetworkAclRequest& request) const;

        /**
         * <p>Creates a network ACL in a VPC. Network ACLs provide an optional layer of
         * security (in addition to security groups) for the instances in your VPC.</p>
         * <p>For more information about network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkAcl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkAclAsync(const Model::CreateNetworkAclRequest& request, const CreateNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an entry (a rule) in a network ACL with the specified rule number.
         * Each network ACL has a set of numbered ingress rules and a separate set of
         * numbered egress rules. When determining whether a packet should be allowed in or
         * out of a subnet associated with the ACL, we process the entries in the ACL
         * according to the rule numbers, in ascending order. Each network ACL has a set of
         * ingress rules and a separate set of egress rules.</p> <p>We recommend that you
         * leave room between the rule numbers (for example, 100, 110, 120, ...), and not
         * number them one right after the other (for example, 101, 102, 103, ...). This
         * makes it easier to add a rule between existing ones without having to renumber
         * the rules.</p> <p>After you add an entry, you can't modify it; you must either
         * replace it, or create an entry and delete the old one.</p> <p>For more
         * information about network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkAclEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkAclEntryOutcome CreateNetworkAclEntry(const Model::CreateNetworkAclEntryRequest& request) const;

        /**
         * <p>Creates an entry (a rule) in a network ACL with the specified rule number.
         * Each network ACL has a set of numbered ingress rules and a separate set of
         * numbered egress rules. When determining whether a packet should be allowed in or
         * out of a subnet associated with the ACL, we process the entries in the ACL
         * according to the rule numbers, in ascending order. Each network ACL has a set of
         * ingress rules and a separate set of egress rules.</p> <p>We recommend that you
         * leave room between the rule numbers (for example, 100, 110, 120, ...), and not
         * number them one right after the other (for example, 101, 102, 103, ...). This
         * makes it easier to add a rule between existing ones without having to renumber
         * the rules.</p> <p>After you add an entry, you can't modify it; you must either
         * replace it, or create an entry and delete the old one.</p> <p>For more
         * information about network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkAclEntry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkAclEntryOutcomeCallable CreateNetworkAclEntryCallable(const Model::CreateNetworkAclEntryRequest& request) const;

        /**
         * <p>Creates an entry (a rule) in a network ACL with the specified rule number.
         * Each network ACL has a set of numbered ingress rules and a separate set of
         * numbered egress rules. When determining whether a packet should be allowed in or
         * out of a subnet associated with the ACL, we process the entries in the ACL
         * according to the rule numbers, in ascending order. Each network ACL has a set of
         * ingress rules and a separate set of egress rules.</p> <p>We recommend that you
         * leave room between the rule numbers (for example, 100, 110, 120, ...), and not
         * number them one right after the other (for example, 101, 102, 103, ...). This
         * makes it easier to add a rule between existing ones without having to renumber
         * the rules.</p> <p>After you add an entry, you can't modify it; you must either
         * replace it, or create an entry and delete the old one.</p> <p>For more
         * information about network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkAclEntry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkAclEntryAsync(const Model::CreateNetworkAclEntryRequest& request, const CreateNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network interface in the specified subnet.</p> <p>For more
         * information about network interfaces, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
         * Network Interfaces</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkInterfaceOutcome CreateNetworkInterface(const Model::CreateNetworkInterfaceRequest& request) const;

        /**
         * <p>Creates a network interface in the specified subnet.</p> <p>For more
         * information about network interfaces, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
         * Network Interfaces</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkInterfaceOutcomeCallable CreateNetworkInterfaceCallable(const Model::CreateNetworkInterfaceRequest& request) const;

        /**
         * <p>Creates a network interface in the specified subnet.</p> <p>For more
         * information about network interfaces, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic
         * Network Interfaces</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkInterfaceAsync(const Model::CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants an AWS authorized partner account permission to attach the specified
         * network interface to an instance in their account.</p> <p>You can grant
         * permission to a single AWS account only, and only one account at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterfacePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkInterfacePermissionOutcome CreateNetworkInterfacePermission(const Model::CreateNetworkInterfacePermissionRequest& request) const;

        /**
         * <p>Grants an AWS authorized partner account permission to attach the specified
         * network interface to an instance in their account.</p> <p>You can grant
         * permission to a single AWS account only, and only one account at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterfacePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkInterfacePermissionOutcomeCallable CreateNetworkInterfacePermissionCallable(const Model::CreateNetworkInterfacePermissionRequest& request) const;

        /**
         * <p>Grants an AWS authorized partner account permission to attach the specified
         * network interface to an instance in their account.</p> <p>You can grant
         * permission to a single AWS account only, and only one account at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterfacePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkInterfacePermissionAsync(const Model::CreateNetworkInterfacePermissionRequest& request, const CreateNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a placement group that you launch cluster instances into. Give the
         * group a name that's unique within the scope of your account.</p> <p>For more
         * information about placement groups and cluster instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using_cluster_computing.html">Cluster
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreatePlacementGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlacementGroupOutcome CreatePlacementGroup(const Model::CreatePlacementGroupRequest& request) const;

        /**
         * <p>Creates a placement group that you launch cluster instances into. Give the
         * group a name that's unique within the scope of your account.</p> <p>For more
         * information about placement groups and cluster instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using_cluster_computing.html">Cluster
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreatePlacementGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlacementGroupOutcomeCallable CreatePlacementGroupCallable(const Model::CreatePlacementGroupRequest& request) const;

        /**
         * <p>Creates a placement group that you launch cluster instances into. Give the
         * group a name that's unique within the scope of your account.</p> <p>For more
         * information about placement groups and cluster instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using_cluster_computing.html">Cluster
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreatePlacementGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlacementGroupAsync(const Model::CreatePlacementGroupRequest& request, const CreatePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a listing for Amazon EC2 Standard Reserved Instances to be sold in
         * the Reserved Instance Marketplace. You can submit one Standard Reserved Instance
         * listing at a time. To get a list of your Standard Reserved Instances, you can
         * use the <a>DescribeReservedInstances</a> operation.</p> <note> <p>Only Standard
         * Reserved Instances with a capacity reservation can be sold in the Reserved
         * Instance Marketplace. Convertible Reserved Instances and Standard Reserved
         * Instances with a regional benefit cannot be sold.</p> </note> <p>The Reserved
         * Instance Marketplace matches sellers who want to resell Standard Reserved
         * Instance capacity that they no longer need with buyers who want to purchase
         * additional capacity. Reserved Instances bought and sold through the Reserved
         * Instance Marketplace work like any other Reserved Instances.</p> <p>To sell your
         * Standard Reserved Instances, you must first register as a seller in the Reserved
         * Instance Marketplace. After completing the registration process, you can create
         * a Reserved Instance Marketplace listing of some or all of your Standard Reserved
         * Instances, and specify the upfront price to receive for them. Your Standard
         * Reserved Instance listings then become available for purchase. To view the
         * details of your Standard Reserved Instance listing, you can use the
         * <a>DescribeReservedInstancesListings</a> operation.</p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateReservedInstancesListing">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReservedInstancesListingOutcome CreateReservedInstancesListing(const Model::CreateReservedInstancesListingRequest& request) const;

        /**
         * <p>Creates a listing for Amazon EC2 Standard Reserved Instances to be sold in
         * the Reserved Instance Marketplace. You can submit one Standard Reserved Instance
         * listing at a time. To get a list of your Standard Reserved Instances, you can
         * use the <a>DescribeReservedInstances</a> operation.</p> <note> <p>Only Standard
         * Reserved Instances with a capacity reservation can be sold in the Reserved
         * Instance Marketplace. Convertible Reserved Instances and Standard Reserved
         * Instances with a regional benefit cannot be sold.</p> </note> <p>The Reserved
         * Instance Marketplace matches sellers who want to resell Standard Reserved
         * Instance capacity that they no longer need with buyers who want to purchase
         * additional capacity. Reserved Instances bought and sold through the Reserved
         * Instance Marketplace work like any other Reserved Instances.</p> <p>To sell your
         * Standard Reserved Instances, you must first register as a seller in the Reserved
         * Instance Marketplace. After completing the registration process, you can create
         * a Reserved Instance Marketplace listing of some or all of your Standard Reserved
         * Instances, and specify the upfront price to receive for them. Your Standard
         * Reserved Instance listings then become available for purchase. To view the
         * details of your Standard Reserved Instance listing, you can use the
         * <a>DescribeReservedInstancesListings</a> operation.</p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateReservedInstancesListing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReservedInstancesListingOutcomeCallable CreateReservedInstancesListingCallable(const Model::CreateReservedInstancesListingRequest& request) const;

        /**
         * <p>Creates a listing for Amazon EC2 Standard Reserved Instances to be sold in
         * the Reserved Instance Marketplace. You can submit one Standard Reserved Instance
         * listing at a time. To get a list of your Standard Reserved Instances, you can
         * use the <a>DescribeReservedInstances</a> operation.</p> <note> <p>Only Standard
         * Reserved Instances with a capacity reservation can be sold in the Reserved
         * Instance Marketplace. Convertible Reserved Instances and Standard Reserved
         * Instances with a regional benefit cannot be sold.</p> </note> <p>The Reserved
         * Instance Marketplace matches sellers who want to resell Standard Reserved
         * Instance capacity that they no longer need with buyers who want to purchase
         * additional capacity. Reserved Instances bought and sold through the Reserved
         * Instance Marketplace work like any other Reserved Instances.</p> <p>To sell your
         * Standard Reserved Instances, you must first register as a seller in the Reserved
         * Instance Marketplace. After completing the registration process, you can create
         * a Reserved Instance Marketplace listing of some or all of your Standard Reserved
         * Instances, and specify the upfront price to receive for them. Your Standard
         * Reserved Instance listings then become available for purchase. To view the
         * details of your Standard Reserved Instance listing, you can use the
         * <a>DescribeReservedInstancesListings</a> operation.</p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateReservedInstancesListing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReservedInstancesListingAsync(const Model::CreateReservedInstancesListingRequest& request, const CreateReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a route in a route table within a VPC.</p> <p>You must specify one of
         * the following targets: Internet gateway or virtual private gateway, NAT
         * instance, NAT gateway, VPC peering connection, network interface, or egress-only
         * Internet gateway.</p> <p>When determining how to route traffic, we use the route
         * with the most specific match. For example, traffic is destined for the IPv4
         * address <code>192.0.2.3</code>, and the route table includes the following two
         * IPv4 routes:</p> <ul> <li> <p> <code>192.0.2.0/24</code> (goes to some target
         * A)</p> </li> <li> <p> <code>192.0.2.0/28</code> (goes to some target B)</p>
         * </li> </ul> <p>Both routes apply to the traffic destined for
         * <code>192.0.2.3</code>. However, the second route in the list covers a smaller
         * number of IP addresses and is therefore more specific, so we use that route to
         * determine where to target the traffic.</p> <p>For more information about route
         * tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRoute">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest& request) const;

        /**
         * <p>Creates a route in a route table within a VPC.</p> <p>You must specify one of
         * the following targets: Internet gateway or virtual private gateway, NAT
         * instance, NAT gateway, VPC peering connection, network interface, or egress-only
         * Internet gateway.</p> <p>When determining how to route traffic, we use the route
         * with the most specific match. For example, traffic is destined for the IPv4
         * address <code>192.0.2.3</code>, and the route table includes the following two
         * IPv4 routes:</p> <ul> <li> <p> <code>192.0.2.0/24</code> (goes to some target
         * A)</p> </li> <li> <p> <code>192.0.2.0/28</code> (goes to some target B)</p>
         * </li> </ul> <p>Both routes apply to the traffic destined for
         * <code>192.0.2.3</code>. However, the second route in the list covers a smaller
         * number of IP addresses and is therefore more specific, so we use that route to
         * determine where to target the traffic.</p> <p>For more information about route
         * tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRoute">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteOutcomeCallable CreateRouteCallable(const Model::CreateRouteRequest& request) const;

        /**
         * <p>Creates a route in a route table within a VPC.</p> <p>You must specify one of
         * the following targets: Internet gateway or virtual private gateway, NAT
         * instance, NAT gateway, VPC peering connection, network interface, or egress-only
         * Internet gateway.</p> <p>When determining how to route traffic, we use the route
         * with the most specific match. For example, traffic is destined for the IPv4
         * address <code>192.0.2.3</code>, and the route table includes the following two
         * IPv4 routes:</p> <ul> <li> <p> <code>192.0.2.0/24</code> (goes to some target
         * A)</p> </li> <li> <p> <code>192.0.2.0/28</code> (goes to some target B)</p>
         * </li> </ul> <p>Both routes apply to the traffic destined for
         * <code>192.0.2.3</code>. However, the second route in the list covers a smaller
         * number of IP addresses and is therefore more specific, so we use that route to
         * determine where to target the traffic.</p> <p>For more information about route
         * tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRoute">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteAsync(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a route table for the specified VPC. After you create a route table,
         * you can add routes and associate the table with a subnet.</p> <p>For more
         * information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteTableOutcome CreateRouteTable(const Model::CreateRouteTableRequest& request) const;

        /**
         * <p>Creates a route table for the specified VPC. After you create a route table,
         * you can add routes and associate the table with a subnet.</p> <p>For more
         * information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRouteTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteTableOutcomeCallable CreateRouteTableCallable(const Model::CreateRouteTableRequest& request) const;

        /**
         * <p>Creates a route table for the specified VPC. After you create a route table,
         * you can add routes and associate the table with a subnet.</p> <p>For more
         * information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRouteTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteTableAsync(const Model::CreateRouteTableRequest& request, const CreateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a security group.</p> <p>A security group is for use with instances
         * either in the EC2-Classic platform or in a specific VPC. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
         * EC2 Security Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>
         * and <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p> <important> <p>EC2-Classic: You can have up to 500 security
         * groups.</p> <p>EC2-VPC: You can create up to 500 security groups per VPC.</p>
         * </important> <p>When you create a security group, you specify a friendly name of
         * your choice. You can have a security group for use in EC2-Classic with the same
         * name as a security group for use in a VPC. However, you can't have two security
         * groups for use in EC2-Classic with the same name or two security groups for use
         * in a VPC with the same name.</p> <p>You have a default security group for use in
         * EC2-Classic and a default security group for use in your VPC. If you don't
         * specify a security group when you launch an instance, the instance is launched
         * into the appropriate default security group. A default security group includes a
         * default rule that grants instances unrestricted network access to each
         * other.</p> <p>You can add or remove rules from your security groups using
         * <a>AuthorizeSecurityGroupIngress</a>, <a>AuthorizeSecurityGroupEgress</a>,
         * <a>RevokeSecurityGroupIngress</a>, and
         * <a>RevokeSecurityGroupEgress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityGroupOutcome CreateSecurityGroup(const Model::CreateSecurityGroupRequest& request) const;

        /**
         * <p>Creates a security group.</p> <p>A security group is for use with instances
         * either in the EC2-Classic platform or in a specific VPC. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
         * EC2 Security Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>
         * and <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p> <important> <p>EC2-Classic: You can have up to 500 security
         * groups.</p> <p>EC2-VPC: You can create up to 500 security groups per VPC.</p>
         * </important> <p>When you create a security group, you specify a friendly name of
         * your choice. You can have a security group for use in EC2-Classic with the same
         * name as a security group for use in a VPC. However, you can't have two security
         * groups for use in EC2-Classic with the same name or two security groups for use
         * in a VPC with the same name.</p> <p>You have a default security group for use in
         * EC2-Classic and a default security group for use in your VPC. If you don't
         * specify a security group when you launch an instance, the instance is launched
         * into the appropriate default security group. A default security group includes a
         * default rule that grants instances unrestricted network access to each
         * other.</p> <p>You can add or remove rules from your security groups using
         * <a>AuthorizeSecurityGroupIngress</a>, <a>AuthorizeSecurityGroupEgress</a>,
         * <a>RevokeSecurityGroupIngress</a>, and
         * <a>RevokeSecurityGroupEgress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSecurityGroupOutcomeCallable CreateSecurityGroupCallable(const Model::CreateSecurityGroupRequest& request) const;

        /**
         * <p>Creates a security group.</p> <p>A security group is for use with instances
         * either in the EC2-Classic platform or in a specific VPC. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
         * EC2 Security Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>
         * and <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p> <important> <p>EC2-Classic: You can have up to 500 security
         * groups.</p> <p>EC2-VPC: You can create up to 500 security groups per VPC.</p>
         * </important> <p>When you create a security group, you specify a friendly name of
         * your choice. You can have a security group for use in EC2-Classic with the same
         * name as a security group for use in a VPC. However, you can't have two security
         * groups for use in EC2-Classic with the same name or two security groups for use
         * in a VPC with the same name.</p> <p>You have a default security group for use in
         * EC2-Classic and a default security group for use in your VPC. If you don't
         * specify a security group when you launch an instance, the instance is launched
         * into the appropriate default security group. A default security group includes a
         * default rule that grants instances unrestricted network access to each
         * other.</p> <p>You can add or remove rules from your security groups using
         * <a>AuthorizeSecurityGroupIngress</a>, <a>AuthorizeSecurityGroupEgress</a>,
         * <a>RevokeSecurityGroupIngress</a>, and
         * <a>RevokeSecurityGroupEgress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityGroupAsync(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of an EBS volume and stores it in Amazon S3. You can use
         * snapshots for backups, to make copies of EBS volumes, and to save data before
         * shutting down an instance.</p> <p>When a snapshot is created, any AWS
         * Marketplace product codes that are associated with the source volume are
         * propagated to the snapshot.</p> <p>You can take a snapshot of an attached volume
         * that is in use. However, snapshots only capture data that has been written to
         * your EBS volume at the time the snapshot command is issued; this may exclude any
         * data that has been cached by any applications or the operating system. If you
         * can pause any file systems on the volume long enough to take a snapshot, your
         * snapshot should be complete. However, if you cannot pause all file writes to the
         * volume, you should unmount the volume from within the instance, issue the
         * snapshot command, and then remount the volume to ensure a consistent and
         * complete snapshot. You may remount and use your volume while the snapshot status
         * is <code>pending</code>.</p> <p>To create a snapshot for EBS volumes that serve
         * as root devices, you should stop the instance before taking the snapshot.</p>
         * <p>Snapshots that are taken from encrypted volumes are automatically encrypted.
         * Volumes that are created from encrypted snapshots are also automatically
         * encrypted. Your encrypted volumes and any associated snapshots always remain
         * protected.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon
         * Elastic Block Store</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of an EBS volume and stores it in Amazon S3. You can use
         * snapshots for backups, to make copies of EBS volumes, and to save data before
         * shutting down an instance.</p> <p>When a snapshot is created, any AWS
         * Marketplace product codes that are associated with the source volume are
         * propagated to the snapshot.</p> <p>You can take a snapshot of an attached volume
         * that is in use. However, snapshots only capture data that has been written to
         * your EBS volume at the time the snapshot command is issued; this may exclude any
         * data that has been cached by any applications or the operating system. If you
         * can pause any file systems on the volume long enough to take a snapshot, your
         * snapshot should be complete. However, if you cannot pause all file writes to the
         * volume, you should unmount the volume from within the instance, issue the
         * snapshot command, and then remount the volume to ensure a consistent and
         * complete snapshot. You may remount and use your volume while the snapshot status
         * is <code>pending</code>.</p> <p>To create a snapshot for EBS volumes that serve
         * as root devices, you should stop the instance before taking the snapshot.</p>
         * <p>Snapshots that are taken from encrypted volumes are automatically encrypted.
         * Volumes that are created from encrypted snapshots are also automatically
         * encrypted. Your encrypted volumes and any associated snapshots always remain
         * protected.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon
         * Elastic Block Store</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of an EBS volume and stores it in Amazon S3. You can use
         * snapshots for backups, to make copies of EBS volumes, and to save data before
         * shutting down an instance.</p> <p>When a snapshot is created, any AWS
         * Marketplace product codes that are associated with the source volume are
         * propagated to the snapshot.</p> <p>You can take a snapshot of an attached volume
         * that is in use. However, snapshots only capture data that has been written to
         * your EBS volume at the time the snapshot command is issued; this may exclude any
         * data that has been cached by any applications or the operating system. If you
         * can pause any file systems on the volume long enough to take a snapshot, your
         * snapshot should be complete. However, if you cannot pause all file writes to the
         * volume, you should unmount the volume from within the instance, issue the
         * snapshot command, and then remount the volume to ensure a consistent and
         * complete snapshot. You may remount and use your volume while the snapshot status
         * is <code>pending</code>.</p> <p>To create a snapshot for EBS volumes that serve
         * as root devices, you should stop the instance before taking the snapshot.</p>
         * <p>Snapshots that are taken from encrypted volumes are automatically encrypted.
         * Volumes that are created from encrypted snapshots are also automatically
         * encrypted. Your encrypted volumes and any associated snapshots always remain
         * protected.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon
         * Elastic Block Store</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a data feed for Spot instances, enabling you to view Spot instance
         * usage logs. You can create one data feed per AWS account. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot
         * Instance Data Feed</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSpotDatafeedSubscriptionOutcome CreateSpotDatafeedSubscription(const Model::CreateSpotDatafeedSubscriptionRequest& request) const;

        /**
         * <p>Creates a data feed for Spot instances, enabling you to view Spot instance
         * usage logs. You can create one data feed per AWS account. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot
         * Instance Data Feed</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSpotDatafeedSubscriptionOutcomeCallable CreateSpotDatafeedSubscriptionCallable(const Model::CreateSpotDatafeedSubscriptionRequest& request) const;

        /**
         * <p>Creates a data feed for Spot instances, enabling you to view Spot instance
         * usage logs. You can create one data feed per AWS account. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot
         * Instance Data Feed</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSpotDatafeedSubscriptionAsync(const Model::CreateSpotDatafeedSubscriptionRequest& request, const CreateSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a subnet in an existing VPC.</p> <p>When you create each subnet, you
         * provide the VPC ID and the IPv4 CIDR block you want for the subnet. After you
         * create a subnet, you can't change its CIDR block. The size of the subnet's IPv4
         * CIDR block can be the same as a VPC's IPv4 CIDR block, or a subset of a VPC's
         * IPv4 CIDR block. If you create more than one subnet in a VPC, the subnets' CIDR
         * blocks must not overlap. The smallest IPv4 subnet (and VPC) you can create uses
         * a /28 netmask (16 IPv4 addresses), and the largest uses a /16 netmask (65,536
         * IPv4 addresses).</p> <p>If you've associated an IPv6 CIDR block with your VPC,
         * you can create a subnet with an IPv6 CIDR block that uses a /64 prefix length.
         * </p> <important> <p>AWS reserves both the first four and the last IPv4 address
         * in each subnet's CIDR block. They're not available for use.</p> </important>
         * <p>If you add more than one subnet to a VPC, they're set up in a star topology
         * with a logical router in the middle.</p> <p>If you launch an instance in a VPC
         * using an Amazon EBS-backed AMI, the IP address doesn't change if you stop and
         * restart the instance (unlike a similar instance launched outside a VPC, which
         * gets a new IP address when restarted). It's therefore possible to have a subnet
         * with no running instances (they're all stopped), but no remaining IP addresses
         * available.</p> <p>For more information about subnets, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your
         * VPC and Subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSubnet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubnetOutcome CreateSubnet(const Model::CreateSubnetRequest& request) const;

        /**
         * <p>Creates a subnet in an existing VPC.</p> <p>When you create each subnet, you
         * provide the VPC ID and the IPv4 CIDR block you want for the subnet. After you
         * create a subnet, you can't change its CIDR block. The size of the subnet's IPv4
         * CIDR block can be the same as a VPC's IPv4 CIDR block, or a subset of a VPC's
         * IPv4 CIDR block. If you create more than one subnet in a VPC, the subnets' CIDR
         * blocks must not overlap. The smallest IPv4 subnet (and VPC) you can create uses
         * a /28 netmask (16 IPv4 addresses), and the largest uses a /16 netmask (65,536
         * IPv4 addresses).</p> <p>If you've associated an IPv6 CIDR block with your VPC,
         * you can create a subnet with an IPv6 CIDR block that uses a /64 prefix length.
         * </p> <important> <p>AWS reserves both the first four and the last IPv4 address
         * in each subnet's CIDR block. They're not available for use.</p> </important>
         * <p>If you add more than one subnet to a VPC, they're set up in a star topology
         * with a logical router in the middle.</p> <p>If you launch an instance in a VPC
         * using an Amazon EBS-backed AMI, the IP address doesn't change if you stop and
         * restart the instance (unlike a similar instance launched outside a VPC, which
         * gets a new IP address when restarted). It's therefore possible to have a subnet
         * with no running instances (they're all stopped), but no remaining IP addresses
         * available.</p> <p>For more information about subnets, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your
         * VPC and Subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSubnet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubnetOutcomeCallable CreateSubnetCallable(const Model::CreateSubnetRequest& request) const;

        /**
         * <p>Creates a subnet in an existing VPC.</p> <p>When you create each subnet, you
         * provide the VPC ID and the IPv4 CIDR block you want for the subnet. After you
         * create a subnet, you can't change its CIDR block. The size of the subnet's IPv4
         * CIDR block can be the same as a VPC's IPv4 CIDR block, or a subset of a VPC's
         * IPv4 CIDR block. If you create more than one subnet in a VPC, the subnets' CIDR
         * blocks must not overlap. The smallest IPv4 subnet (and VPC) you can create uses
         * a /28 netmask (16 IPv4 addresses), and the largest uses a /16 netmask (65,536
         * IPv4 addresses).</p> <p>If you've associated an IPv6 CIDR block with your VPC,
         * you can create a subnet with an IPv6 CIDR block that uses a /64 prefix length.
         * </p> <important> <p>AWS reserves both the first four and the last IPv4 address
         * in each subnet's CIDR block. They're not available for use.</p> </important>
         * <p>If you add more than one subnet to a VPC, they're set up in a star topology
         * with a logical router in the middle.</p> <p>If you launch an instance in a VPC
         * using an Amazon EBS-backed AMI, the IP address doesn't change if you stop and
         * restart the instance (unlike a similar instance launched outside a VPC, which
         * gets a new IP address when restarted). It's therefore possible to have a subnet
         * with no running instances (they're all stopped), but no remaining IP addresses
         * available.</p> <p>For more information about subnets, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your
         * VPC and Subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSubnet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubnetAsync(const Model::CreateSubnetRequest& request, const CreateSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified Amazon EC2 resource or
         * resources. Each resource can have a maximum of 50 tags. Each tag consists of a
         * key and optional value. Tag keys must be unique per resource.</p> <p>For more
         * information about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Resources</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For
         * more information about creating IAM policies that control users' access to
         * resources based on tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-iam-actions-resources.html">Supported
         * Resource-Level Permissions for Amazon EC2 API Actions</a> in the <i>Amazon
         * Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTags">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified Amazon EC2 resource or
         * resources. Each resource can have a maximum of 50 tags. Each tag consists of a
         * key and optional value. Tag keys must be unique per resource.</p> <p>For more
         * information about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Resources</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For
         * more information about creating IAM policies that control users' access to
         * resources based on tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-iam-actions-resources.html">Supported
         * Resource-Level Permissions for Amazon EC2 API Actions</a> in the <i>Amazon
         * Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified Amazon EC2 resource or
         * resources. Each resource can have a maximum of 50 tags. Each tag consists of a
         * key and optional value. Tag keys must be unique per resource.</p> <p>For more
         * information about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Resources</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For
         * more information about creating IAM policies that control users' access to
         * resources based on tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-iam-actions-resources.html">Supported
         * Resource-Level Permissions for Amazon EC2 API Actions</a> in the <i>Amazon
         * Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an EBS volume that can be attached to an instance in the same
         * Availability Zone. The volume is created in the regional endpoint that you send
         * the HTTP request to. For more information see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
         * Endpoints</a>.</p> <p>You can create a new empty volume or restore a volume from
         * an EBS snapshot. Any AWS Marketplace product codes from the snapshot are
         * propagated to the volume.</p> <p>You can create encrypted volumes with the
         * <code>Encrypted</code> parameter. Encrypted volumes may only be attached to
         * instances that support Amazon EBS encryption. Volumes that are created from
         * encrypted snapshots are also automatically encrypted. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>You can tag your volumes during creation. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-creating-volume.html">Creating
         * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVolumeOutcome CreateVolume(const Model::CreateVolumeRequest& request) const;

        /**
         * <p>Creates an EBS volume that can be attached to an instance in the same
         * Availability Zone. The volume is created in the regional endpoint that you send
         * the HTTP request to. For more information see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
         * Endpoints</a>.</p> <p>You can create a new empty volume or restore a volume from
         * an EBS snapshot. Any AWS Marketplace product codes from the snapshot are
         * propagated to the volume.</p> <p>You can create encrypted volumes with the
         * <code>Encrypted</code> parameter. Encrypted volumes may only be attached to
         * instances that support Amazon EBS encryption. Volumes that are created from
         * encrypted snapshots are also automatically encrypted. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>You can tag your volumes during creation. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-creating-volume.html">Creating
         * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVolumeOutcomeCallable CreateVolumeCallable(const Model::CreateVolumeRequest& request) const;

        /**
         * <p>Creates an EBS volume that can be attached to an instance in the same
         * Availability Zone. The volume is created in the regional endpoint that you send
         * the HTTP request to. For more information see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
         * Endpoints</a>.</p> <p>You can create a new empty volume or restore a volume from
         * an EBS snapshot. Any AWS Marketplace product codes from the snapshot are
         * propagated to the volume.</p> <p>You can create encrypted volumes with the
         * <code>Encrypted</code> parameter. Encrypted volumes may only be attached to
         * instances that support Amazon EBS encryption. Volumes that are created from
         * encrypted snapshots are also automatically encrypted. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon
         * EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>You can tag your volumes during creation. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-creating-volume.html">Creating
         * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVolumeAsync(const Model::CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a VPC with the specified IPv4 CIDR block. The smallest VPC you can
         * create uses a /28 netmask (16 IPv4 addresses), and the largest uses a /16
         * netmask (65,536 IPv4 addresses). To help you decide how big to make your VPC,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your
         * VPC and Subnets</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
         * <p>You can optionally request an Amazon-provided IPv6 CIDR block for the VPC.
         * The IPv6 CIDR block uses a /56 prefix length, and is allocated from Amazon's
         * pool of IPv6 addresses. You cannot choose the IPv6 range for your VPC.</p> <p>By
         * default, each instance you launch in the VPC has the default DHCP options, which
         * includes only a default DNS server that we provide (AmazonProvidedDNS). For more
         * information about DHCP options, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
         * <p>You can specify the instance tenancy value for the VPC when you create it.
         * You can't change this value for the VPC after you create it. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-instance.html">Dedicated
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpc">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateVpcOutcome CreateVpc(const Model::CreateVpcRequest& request) const;

        /**
         * <p>Creates a VPC with the specified IPv4 CIDR block. The smallest VPC you can
         * create uses a /28 netmask (16 IPv4 addresses), and the largest uses a /16
         * netmask (65,536 IPv4 addresses). To help you decide how big to make your VPC,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your
         * VPC and Subnets</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
         * <p>You can optionally request an Amazon-provided IPv6 CIDR block for the VPC.
         * The IPv6 CIDR block uses a /56 prefix length, and is allocated from Amazon's
         * pool of IPv6 addresses. You cannot choose the IPv6 range for your VPC.</p> <p>By
         * default, each instance you launch in the VPC has the default DHCP options, which
         * includes only a default DNS server that we provide (AmazonProvidedDNS). For more
         * information about DHCP options, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
         * <p>You can specify the instance tenancy value for the VPC when you create it.
         * You can't change this value for the VPC after you create it. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-instance.html">Dedicated
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpc">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcOutcomeCallable CreateVpcCallable(const Model::CreateVpcRequest& request) const;

        /**
         * <p>Creates a VPC with the specified IPv4 CIDR block. The smallest VPC you can
         * create uses a /28 netmask (16 IPv4 addresses), and the largest uses a /16
         * netmask (65,536 IPv4 addresses). To help you decide how big to make your VPC,
         * see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your
         * VPC and Subnets</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
         * <p>You can optionally request an Amazon-provided IPv6 CIDR block for the VPC.
         * The IPv6 CIDR block uses a /56 prefix length, and is allocated from Amazon's
         * pool of IPv6 addresses. You cannot choose the IPv6 range for your VPC.</p> <p>By
         * default, each instance you launch in the VPC has the default DHCP options, which
         * includes only a default DNS server that we provide (AmazonProvidedDNS). For more
         * information about DHCP options, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
         * <p>You can specify the instance tenancy value for the VPC when you create it.
         * You can't change this value for the VPC after you create it. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-instance.html">Dedicated
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpc">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a VPC endpoint for a specified AWS service. An endpoint enables you
         * to create a private connection between your VPC and another AWS service in your
         * account. You can specify an endpoint policy to attach to the endpoint that will
         * control access to the service from your VPC. You can also specify the VPC route
         * tables that use the endpoint.</p> <p>Use <a>DescribeVpcEndpointServices</a> to
         * get a list of supported AWS services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointOutcome CreateVpcEndpoint(const Model::CreateVpcEndpointRequest& request) const;

        /**
         * <p>Creates a VPC endpoint for a specified AWS service. An endpoint enables you
         * to create a private connection between your VPC and another AWS service in your
         * account. You can specify an endpoint policy to attach to the endpoint that will
         * control access to the service from your VPC. You can also specify the VPC route
         * tables that use the endpoint.</p> <p>Use <a>DescribeVpcEndpointServices</a> to
         * get a list of supported AWS services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcEndpointOutcomeCallable CreateVpcEndpointCallable(const Model::CreateVpcEndpointRequest& request) const;

        /**
         * <p>Creates a VPC endpoint for a specified AWS service. An endpoint enables you
         * to create a private connection between your VPC and another AWS service in your
         * account. You can specify an endpoint policy to attach to the endpoint that will
         * control access to the service from your VPC. You can also specify the VPC route
         * tables that use the endpoint.</p> <p>Use <a>DescribeVpcEndpointServices</a> to
         * get a list of supported AWS services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcEndpointAsync(const Model::CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a VPC peering connection between two VPCs: a requester VPC that you
         * own and a peer VPC with which to create the connection. The peer VPC can belong
         * to another AWS account. The requester VPC and peer VPC cannot have overlapping
         * CIDR blocks.</p> <p>The owner of the peer VPC must accept the peering request to
         * activate the peering connection. The VPC peering connection request expires
         * after 7 days, after which it cannot be accepted or rejected.</p> <p>If you try
         * to create a VPC peering connection between VPCs that have overlapping CIDR
         * blocks, the VPC peering connection status goes to
         * <code>failed</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcPeeringConnectionOutcome CreateVpcPeeringConnection(const Model::CreateVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Requests a VPC peering connection between two VPCs: a requester VPC that you
         * own and a peer VPC with which to create the connection. The peer VPC can belong
         * to another AWS account. The requester VPC and peer VPC cannot have overlapping
         * CIDR blocks.</p> <p>The owner of the peer VPC must accept the peering request to
         * activate the peering connection. The VPC peering connection request expires
         * after 7 days, after which it cannot be accepted or rejected.</p> <p>If you try
         * to create a VPC peering connection between VPCs that have overlapping CIDR
         * blocks, the VPC peering connection status goes to
         * <code>failed</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcPeeringConnectionOutcomeCallable CreateVpcPeeringConnectionCallable(const Model::CreateVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Requests a VPC peering connection between two VPCs: a requester VPC that you
         * own and a peer VPC with which to create the connection. The peer VPC can belong
         * to another AWS account. The requester VPC and peer VPC cannot have overlapping
         * CIDR blocks.</p> <p>The owner of the peer VPC must accept the peering request to
         * activate the peering connection. The VPC peering connection request expires
         * after 7 days, after which it cannot be accepted or rejected.</p> <p>If you try
         * to create a VPC peering connection between VPCs that have overlapping CIDR
         * blocks, the VPC peering connection status goes to
         * <code>failed</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcPeeringConnectionAsync(const Model::CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a VPN connection between an existing virtual private gateway and a
         * VPN customer gateway. The only supported connection type is
         * <code>ipsec.1</code>.</p> <p>The response includes information that you need to
         * give to your network administrator to configure your customer gateway.</p>
         * <important> <p>We strongly recommend that you use HTTPS when calling this
         * operation because the response contains sensitive cryptographic information for
         * configuring your customer gateway.</p> </important> <p>If you decide to shut
         * down your VPN connection for any reason and later create a new VPN connection,
         * you must reconfigure your customer gateway with the new information returned
         * from this call.</p> <p>This is an idempotent operation. If you perform the
         * operation more than once, Amazon EC2 doesn't return an error.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS
         * Managed VPN Connections</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpnConnectionOutcome CreateVpnConnection(const Model::CreateVpnConnectionRequest& request) const;

        /**
         * <p>Creates a VPN connection between an existing virtual private gateway and a
         * VPN customer gateway. The only supported connection type is
         * <code>ipsec.1</code>.</p> <p>The response includes information that you need to
         * give to your network administrator to configure your customer gateway.</p>
         * <important> <p>We strongly recommend that you use HTTPS when calling this
         * operation because the response contains sensitive cryptographic information for
         * configuring your customer gateway.</p> </important> <p>If you decide to shut
         * down your VPN connection for any reason and later create a new VPN connection,
         * you must reconfigure your customer gateway with the new information returned
         * from this call.</p> <p>This is an idempotent operation. If you perform the
         * operation more than once, Amazon EC2 doesn't return an error.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS
         * Managed VPN Connections</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpnConnectionOutcomeCallable CreateVpnConnectionCallable(const Model::CreateVpnConnectionRequest& request) const;

        /**
         * <p>Creates a VPN connection between an existing virtual private gateway and a
         * VPN customer gateway. The only supported connection type is
         * <code>ipsec.1</code>.</p> <p>The response includes information that you need to
         * give to your network administrator to configure your customer gateway.</p>
         * <important> <p>We strongly recommend that you use HTTPS when calling this
         * operation because the response contains sensitive cryptographic information for
         * configuring your customer gateway.</p> </important> <p>If you decide to shut
         * down your VPN connection for any reason and later create a new VPN connection,
         * you must reconfigure your customer gateway with the new information returned
         * from this call.</p> <p>This is an idempotent operation. If you perform the
         * operation more than once, Amazon EC2 doesn't return an error.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS
         * Managed VPN Connections</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpnConnectionAsync(const Model::CreateVpnConnectionRequest& request, const CreateVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a static route associated with a VPN connection between an existing
         * virtual private gateway and a VPN customer gateway. The static route allows
         * traffic to be routed from the virtual private gateway to the VPN customer
         * gateway.</p> <p>For more information about VPN connections, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnConnectionRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpnConnectionRouteOutcome CreateVpnConnectionRoute(const Model::CreateVpnConnectionRouteRequest& request) const;

        /**
         * <p>Creates a static route associated with a VPN connection between an existing
         * virtual private gateway and a VPN customer gateway. The static route allows
         * traffic to be routed from the virtual private gateway to the VPN customer
         * gateway.</p> <p>For more information about VPN connections, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnConnectionRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpnConnectionRouteOutcomeCallable CreateVpnConnectionRouteCallable(const Model::CreateVpnConnectionRouteRequest& request) const;

        /**
         * <p>Creates a static route associated with a VPN connection between an existing
         * virtual private gateway and a VPN customer gateway. The static route allows
         * traffic to be routed from the virtual private gateway to the VPN customer
         * gateway.</p> <p>For more information about VPN connections, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnConnectionRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpnConnectionRouteAsync(const Model::CreateVpnConnectionRouteRequest& request, const CreateVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual private gateway. A virtual private gateway is the endpoint
         * on the VPC side of your VPN connection. You can create a virtual private gateway
         * before creating the VPC itself.</p> <p>For more information about virtual
         * private gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpnGatewayOutcome CreateVpnGateway(const Model::CreateVpnGatewayRequest& request) const;

        /**
         * <p>Creates a virtual private gateway. A virtual private gateway is the endpoint
         * on the VPC side of your VPN connection. You can create a virtual private gateway
         * before creating the VPC itself.</p> <p>For more information about virtual
         * private gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpnGatewayOutcomeCallable CreateVpnGatewayCallable(const Model::CreateVpnGatewayRequest& request) const;

        /**
         * <p>Creates a virtual private gateway. A virtual private gateway is the endpoint
         * on the VPC side of your VPN connection. You can create a virtual private gateway
         * before creating the VPC itself.</p> <p>For more information about virtual
         * private gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpnGatewayAsync(const Model::CreateVpnGatewayRequest& request, const CreateVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified customer gateway. You must delete the VPN connection
         * before you can delete the customer gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomerGatewayOutcome DeleteCustomerGateway(const Model::DeleteCustomerGatewayRequest& request) const;

        /**
         * <p>Deletes the specified customer gateway. You must delete the VPN connection
         * before you can delete the customer gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteCustomerGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomerGatewayOutcomeCallable DeleteCustomerGatewayCallable(const Model::DeleteCustomerGatewayRequest& request) const;

        /**
         * <p>Deletes the specified customer gateway. You must delete the VPN connection
         * before you can delete the customer gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteCustomerGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomerGatewayAsync(const Model::DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified set of DHCP options. You must disassociate the set of
         * DHCP options before you can delete it. You can disassociate the set of DHCP
         * options by associating either a new set of options or the default set of options
         * with the VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteDhcpOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDhcpOptionsOutcome DeleteDhcpOptions(const Model::DeleteDhcpOptionsRequest& request) const;

        /**
         * <p>Deletes the specified set of DHCP options. You must disassociate the set of
         * DHCP options before you can delete it. You can disassociate the set of DHCP
         * options by associating either a new set of options or the default set of options
         * with the VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteDhcpOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDhcpOptionsOutcomeCallable DeleteDhcpOptionsCallable(const Model::DeleteDhcpOptionsRequest& request) const;

        /**
         * <p>Deletes the specified set of DHCP options. You must disassociate the set of
         * DHCP options before you can delete it. You can disassociate the set of DHCP
         * options by associating either a new set of options or the default set of options
         * with the VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteDhcpOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDhcpOptionsAsync(const Model::DeleteDhcpOptionsRequest& request, const DeleteDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an egress-only Internet gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteEgressOnlyInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEgressOnlyInternetGatewayOutcome DeleteEgressOnlyInternetGateway(const Model::DeleteEgressOnlyInternetGatewayRequest& request) const;

        /**
         * <p>Deletes an egress-only Internet gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteEgressOnlyInternetGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEgressOnlyInternetGatewayOutcomeCallable DeleteEgressOnlyInternetGatewayCallable(const Model::DeleteEgressOnlyInternetGatewayRequest& request) const;

        /**
         * <p>Deletes an egress-only Internet gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteEgressOnlyInternetGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEgressOnlyInternetGatewayAsync(const Model::DeleteEgressOnlyInternetGatewayRequest& request, const DeleteEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more flow logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFlowLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowLogsOutcome DeleteFlowLogs(const Model::DeleteFlowLogsRequest& request) const;

        /**
         * <p>Deletes one or more flow logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFlowLogs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFlowLogsOutcomeCallable DeleteFlowLogsCallable(const Model::DeleteFlowLogsRequest& request) const;

        /**
         * <p>Deletes one or more flow logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFlowLogs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFlowLogsAsync(const Model::DeleteFlowLogsRequest& request, const DeleteFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon FPGA Image (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFpgaImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFpgaImageOutcome DeleteFpgaImage(const Model::DeleteFpgaImageRequest& request) const;

        /**
         * <p>Deletes the specified Amazon FPGA Image (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFpgaImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFpgaImageOutcomeCallable DeleteFpgaImageCallable(const Model::DeleteFpgaImageRequest& request) const;

        /**
         * <p>Deletes the specified Amazon FPGA Image (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFpgaImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFpgaImageAsync(const Model::DeleteFpgaImageRequest& request, const DeleteFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Internet gateway. You must detach the Internet gateway
         * from the VPC before you can delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInternetGatewayOutcome DeleteInternetGateway(const Model::DeleteInternetGatewayRequest& request) const;

        /**
         * <p>Deletes the specified Internet gateway. You must detach the Internet gateway
         * from the VPC before you can delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteInternetGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInternetGatewayOutcomeCallable DeleteInternetGatewayCallable(const Model::DeleteInternetGatewayRequest& request) const;

        /**
         * <p>Deletes the specified Internet gateway. You must detach the Internet gateway
         * from the VPC before you can delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteInternetGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInternetGatewayAsync(const Model::DeleteInternetGatewayRequest& request, const DeleteInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified key pair, by removing the public key from Amazon
         * EC2.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyPairOutcome DeleteKeyPair(const Model::DeleteKeyPairRequest& request) const;

        /**
         * <p>Deletes the specified key pair, by removing the public key from Amazon
         * EC2.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteKeyPairOutcomeCallable DeleteKeyPairCallable(const Model::DeleteKeyPairRequest& request) const;

        /**
         * <p>Deletes the specified key pair, by removing the public key from Amazon
         * EC2.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteKeyPairAsync(const Model::DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified NAT gateway. Deleting a NAT gateway disassociates its
         * Elastic IP address, but does not release the address from your account. Deleting
         * a NAT gateway does not delete any NAT gateway routes in your route
         * tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNatGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNatGatewayOutcome DeleteNatGateway(const Model::DeleteNatGatewayRequest& request) const;

        /**
         * <p>Deletes the specified NAT gateway. Deleting a NAT gateway disassociates its
         * Elastic IP address, but does not release the address from your account. Deleting
         * a NAT gateway does not delete any NAT gateway routes in your route
         * tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNatGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNatGatewayOutcomeCallable DeleteNatGatewayCallable(const Model::DeleteNatGatewayRequest& request) const;

        /**
         * <p>Deletes the specified NAT gateway. Deleting a NAT gateway disassociates its
         * Elastic IP address, but does not release the address from your account. Deleting
         * a NAT gateway does not delete any NAT gateway routes in your route
         * tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNatGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNatGatewayAsync(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified network ACL. You can't delete the ACL if it's
         * associated with any subnets. You can't delete the default network
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkAcl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkAclOutcome DeleteNetworkAcl(const Model::DeleteNetworkAclRequest& request) const;

        /**
         * <p>Deletes the specified network ACL. You can't delete the ACL if it's
         * associated with any subnets. You can't delete the default network
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkAcl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkAclOutcomeCallable DeleteNetworkAclCallable(const Model::DeleteNetworkAclRequest& request) const;

        /**
         * <p>Deletes the specified network ACL. You can't delete the ACL if it's
         * associated with any subnets. You can't delete the default network
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkAcl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkAclAsync(const Model::DeleteNetworkAclRequest& request, const DeleteNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified ingress or egress entry (rule) from the specified
         * network ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkAclEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkAclEntryOutcome DeleteNetworkAclEntry(const Model::DeleteNetworkAclEntryRequest& request) const;

        /**
         * <p>Deletes the specified ingress or egress entry (rule) from the specified
         * network ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkAclEntry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkAclEntryOutcomeCallable DeleteNetworkAclEntryCallable(const Model::DeleteNetworkAclEntryRequest& request) const;

        /**
         * <p>Deletes the specified ingress or egress entry (rule) from the specified
         * network ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkAclEntry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkAclEntryAsync(const Model::DeleteNetworkAclEntryRequest& request, const DeleteNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified network interface. You must detach the network
         * interface before you can delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInterfaceOutcome DeleteNetworkInterface(const Model::DeleteNetworkInterfaceRequest& request) const;

        /**
         * <p>Deletes the specified network interface. You must detach the network
         * interface before you can delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkInterfaceOutcomeCallable DeleteNetworkInterfaceCallable(const Model::DeleteNetworkInterfaceRequest& request) const;

        /**
         * <p>Deletes the specified network interface. You must detach the network
         * interface before you can delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkInterfaceAsync(const Model::DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a permission for a network interface. By default, you cannot delete
         * the permission if the account for which you're removing the permission has
         * attached the network interface to an instance. However, you can force delete the
         * permission, regardless of any attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInterfacePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkInterfacePermissionOutcome DeleteNetworkInterfacePermission(const Model::DeleteNetworkInterfacePermissionRequest& request) const;

        /**
         * <p>Deletes a permission for a network interface. By default, you cannot delete
         * the permission if the account for which you're removing the permission has
         * attached the network interface to an instance. However, you can force delete the
         * permission, regardless of any attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInterfacePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkInterfacePermissionOutcomeCallable DeleteNetworkInterfacePermissionCallable(const Model::DeleteNetworkInterfacePermissionRequest& request) const;

        /**
         * <p>Deletes a permission for a network interface. By default, you cannot delete
         * the permission if the account for which you're removing the permission has
         * attached the network interface to an instance. However, you can force delete the
         * permission, regardless of any attachment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteNetworkInterfacePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkInterfacePermissionAsync(const Model::DeleteNetworkInterfacePermissionRequest& request, const DeleteNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified placement group. You must terminate all instances in
         * the placement group before you can delete the placement group. For more
         * information about placement groups and cluster instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using_cluster_computing.html">Cluster
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeletePlacementGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlacementGroupOutcome DeletePlacementGroup(const Model::DeletePlacementGroupRequest& request) const;

        /**
         * <p>Deletes the specified placement group. You must terminate all instances in
         * the placement group before you can delete the placement group. For more
         * information about placement groups and cluster instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using_cluster_computing.html">Cluster
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeletePlacementGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlacementGroupOutcomeCallable DeletePlacementGroupCallable(const Model::DeletePlacementGroupRequest& request) const;

        /**
         * <p>Deletes the specified placement group. You must terminate all instances in
         * the placement group before you can delete the placement group. For more
         * information about placement groups and cluster instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using_cluster_computing.html">Cluster
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeletePlacementGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlacementGroupAsync(const Model::DeletePlacementGroupRequest& request, const DeletePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified route from the specified route table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteRoute">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;

        /**
         * <p>Deletes the specified route from the specified route table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteRoute">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteOutcomeCallable DeleteRouteCallable(const Model::DeleteRouteRequest& request) const;

        /**
         * <p>Deletes the specified route from the specified route table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteRoute">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteAsync(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified route table. You must disassociate the route table from
         * any subnets before you can delete it. You can't delete the main route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteTableOutcome DeleteRouteTable(const Model::DeleteRouteTableRequest& request) const;

        /**
         * <p>Deletes the specified route table. You must disassociate the route table from
         * any subnets before you can delete it. You can't delete the main route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteRouteTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteTableOutcomeCallable DeleteRouteTableCallable(const Model::DeleteRouteTableRequest& request) const;

        /**
         * <p>Deletes the specified route table. You must disassociate the route table from
         * any subnets before you can delete it. You can't delete the main route
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteRouteTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteTableAsync(const Model::DeleteRouteTableRequest& request, const DeleteRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a security group.</p> <p>If you attempt to delete a security group
         * that is associated with an instance, or is referenced by another security group,
         * the operation fails with <code>InvalidGroup.InUse</code> in EC2-Classic or
         * <code>DependencyViolation</code> in EC2-VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityGroupOutcome DeleteSecurityGroup(const Model::DeleteSecurityGroupRequest& request) const;

        /**
         * <p>Deletes a security group.</p> <p>If you attempt to delete a security group
         * that is associated with an instance, or is referenced by another security group,
         * the operation fails with <code>InvalidGroup.InUse</code> in EC2-Classic or
         * <code>DependencyViolation</code> in EC2-VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityGroupOutcomeCallable DeleteSecurityGroupCallable(const Model::DeleteSecurityGroupRequest& request) const;

        /**
         * <p>Deletes a security group.</p> <p>If you attempt to delete a security group
         * that is associated with an instance, or is referenced by another security group,
         * the operation fails with <code>InvalidGroup.InUse</code> in EC2-Classic or
         * <code>DependencyViolation</code> in EC2-VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityGroupAsync(const Model::DeleteSecurityGroupRequest& request, const DeleteSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified snapshot.</p> <p>When you make periodic snapshots of a
         * volume, the snapshots are incremental, and only the blocks on the device that
         * have changed since your last snapshot are saved in the new snapshot. When you
         * delete a snapshot, only the data not needed for any other snapshot is removed.
         * So regardless of which prior snapshots have been deleted, all active snapshots
         * will have access to all the information needed to restore the volume.</p> <p>You
         * cannot delete a snapshot of the root device of an EBS volume used by a
         * registered AMI. You must first de-register the AMI before you can delete the
         * snapshot.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-deleting-snapshot.html">Deleting
         * an Amazon EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes the specified snapshot.</p> <p>When you make periodic snapshots of a
         * volume, the snapshots are incremental, and only the blocks on the device that
         * have changed since your last snapshot are saved in the new snapshot. When you
         * delete a snapshot, only the data not needed for any other snapshot is removed.
         * So regardless of which prior snapshots have been deleted, all active snapshots
         * will have access to all the information needed to restore the volume.</p> <p>You
         * cannot delete a snapshot of the root device of an EBS volume used by a
         * registered AMI. You must first de-register the AMI before you can delete the
         * snapshot.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-deleting-snapshot.html">Deleting
         * an Amazon EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes the specified snapshot.</p> <p>When you make periodic snapshots of a
         * volume, the snapshots are incremental, and only the blocks on the device that
         * have changed since your last snapshot are saved in the new snapshot. When you
         * delete a snapshot, only the data not needed for any other snapshot is removed.
         * So regardless of which prior snapshots have been deleted, all active snapshots
         * will have access to all the information needed to restore the volume.</p> <p>You
         * cannot delete a snapshot of the root device of an EBS volume used by a
         * registered AMI. You must first de-register the AMI before you can delete the
         * snapshot.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-deleting-snapshot.html">Deleting
         * an Amazon EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the data feed for Spot instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSpotDatafeedSubscriptionOutcome DeleteSpotDatafeedSubscription(const Model::DeleteSpotDatafeedSubscriptionRequest& request) const;

        /**
         * <p>Deletes the data feed for Spot instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSpotDatafeedSubscriptionOutcomeCallable DeleteSpotDatafeedSubscriptionCallable(const Model::DeleteSpotDatafeedSubscriptionRequest& request) const;

        /**
         * <p>Deletes the data feed for Spot instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSpotDatafeedSubscriptionAsync(const Model::DeleteSpotDatafeedSubscriptionRequest& request, const DeleteSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified subnet. You must terminate all running instances in the
         * subnet before you can delete the subnet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSubnet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubnetOutcome DeleteSubnet(const Model::DeleteSubnetRequest& request) const;

        /**
         * <p>Deletes the specified subnet. You must terminate all running instances in the
         * subnet before you can delete the subnet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSubnet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubnetOutcomeCallable DeleteSubnetCallable(const Model::DeleteSubnetRequest& request) const;

        /**
         * <p>Deletes the specified subnet. You must terminate all running instances in the
         * subnet before you can delete the subnet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteSubnet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified set of tags from the specified set of resources.</p>
         * <p>To list the current tags, use <a>DescribeTags</a>. For more information about
         * tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTags">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified set of tags from the specified set of resources.</p>
         * <p>To list the current tags, use <a>DescribeTags</a>. For more information about
         * tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified set of tags from the specified set of resources.</p>
         * <p>To list the current tags, use <a>DescribeTags</a>. For more information about
         * tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified EBS volume. The volume must be in the
         * <code>available</code> state (not attached to an instance).</p> <note> <p>The
         * volume may remain in the <code>deleting</code> state for several minutes.</p>
         * </note> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-deleting-volume.html">Deleting
         * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVolumeOutcome DeleteVolume(const Model::DeleteVolumeRequest& request) const;

        /**
         * <p>Deletes the specified EBS volume. The volume must be in the
         * <code>available</code> state (not attached to an instance).</p> <note> <p>The
         * volume may remain in the <code>deleting</code> state for several minutes.</p>
         * </note> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-deleting-volume.html">Deleting
         * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVolumeOutcomeCallable DeleteVolumeCallable(const Model::DeleteVolumeRequest& request) const;

        /**
         * <p>Deletes the specified EBS volume. The volume must be in the
         * <code>available</code> state (not attached to an instance).</p> <note> <p>The
         * volume may remain in the <code>deleting</code> state for several minutes.</p>
         * </note> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-deleting-volume.html">Deleting
         * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVolumeAsync(const Model::DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified VPC. You must detach or delete all gateways and
         * resources that are associated with the VPC before you can delete it. For
         * example, you must terminate all instances running in the VPC, delete all
         * security groups associated with the VPC (except the default one), delete all
         * route tables associated with the VPC (except the default one), and so
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpc">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteVpcOutcome DeleteVpc(const Model::DeleteVpcRequest& request) const;

        /**
         * <p>Deletes the specified VPC. You must detach or delete all gateways and
         * resources that are associated with the VPC before you can delete it. For
         * example, you must terminate all instances running in the VPC, delete all
         * security groups associated with the VPC (except the default one), delete all
         * route tables associated with the VPC (except the default one), and so
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpc">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcOutcomeCallable DeleteVpcCallable(const Model::DeleteVpcRequest& request) const;

        /**
         * <p>Deletes the specified VPC. You must detach or delete all gateways and
         * resources that are associated with the VPC before you can delete it. For
         * example, you must terminate all instances running in the VPC, delete all
         * security groups associated with the VPC (except the default one), delete all
         * route tables associated with the VPC (except the default one), and so
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpc">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcAsync(const Model::DeleteVpcRequest& request, const DeleteVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more specified VPC endpoints. Deleting the endpoint also
         * deletes the endpoint routes in the route tables that were associated with the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointsOutcome DeleteVpcEndpoints(const Model::DeleteVpcEndpointsRequest& request) const;

        /**
         * <p>Deletes one or more specified VPC endpoints. Deleting the endpoint also
         * deletes the endpoint routes in the route tables that were associated with the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcEndpointsOutcomeCallable DeleteVpcEndpointsCallable(const Model::DeleteVpcEndpointsRequest& request) const;

        /**
         * <p>Deletes one or more specified VPC endpoints. Deleting the endpoint also
         * deletes the endpoint routes in the route tables that were associated with the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcEndpointsAsync(const Model::DeleteVpcEndpointsRequest& request, const DeleteVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a VPC peering connection. Either the owner of the requester VPC or
         * the owner of the peer VPC can delete the VPC peering connection if it's in the
         * <code>active</code> state. The owner of the requester VPC can delete a VPC
         * peering connection in the <code>pending-acceptance</code> state. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcPeeringConnectionOutcome DeleteVpcPeeringConnection(const Model::DeleteVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Deletes a VPC peering connection. Either the owner of the requester VPC or
         * the owner of the peer VPC can delete the VPC peering connection if it's in the
         * <code>active</code> state. The owner of the requester VPC can delete a VPC
         * peering connection in the <code>pending-acceptance</code> state. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcPeeringConnectionOutcomeCallable DeleteVpcPeeringConnectionCallable(const Model::DeleteVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Deletes a VPC peering connection. Either the owner of the requester VPC or
         * the owner of the peer VPC can delete the VPC peering connection if it's in the
         * <code>active</code> state. The owner of the requester VPC can delete a VPC
         * peering connection in the <code>pending-acceptance</code> state. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcPeeringConnectionAsync(const Model::DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified VPN connection.</p> <p>If you're deleting the VPC and
         * its associated components, we recommend that you detach the virtual private
         * gateway from the VPC and delete the VPC before deleting the VPN connection. If
         * you believe that the tunnel credentials for your VPN connection have been
         * compromised, you can delete the VPN connection and create a new one that has new
         * keys, without needing to delete the VPC or virtual private gateway. If you
         * create a new VPN connection, you must reconfigure the customer gateway using the
         * new configuration information returned with the new VPN connection
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpnConnectionOutcome DeleteVpnConnection(const Model::DeleteVpnConnectionRequest& request) const;

        /**
         * <p>Deletes the specified VPN connection.</p> <p>If you're deleting the VPC and
         * its associated components, we recommend that you detach the virtual private
         * gateway from the VPC and delete the VPC before deleting the VPN connection. If
         * you believe that the tunnel credentials for your VPN connection have been
         * compromised, you can delete the VPN connection and create a new one that has new
         * keys, without needing to delete the VPC or virtual private gateway. If you
         * create a new VPN connection, you must reconfigure the customer gateway using the
         * new configuration information returned with the new VPN connection
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpnConnectionOutcomeCallable DeleteVpnConnectionCallable(const Model::DeleteVpnConnectionRequest& request) const;

        /**
         * <p>Deletes the specified VPN connection.</p> <p>If you're deleting the VPC and
         * its associated components, we recommend that you detach the virtual private
         * gateway from the VPC and delete the VPC before deleting the VPN connection. If
         * you believe that the tunnel credentials for your VPN connection have been
         * compromised, you can delete the VPN connection and create a new one that has new
         * keys, without needing to delete the VPC or virtual private gateway. If you
         * create a new VPN connection, you must reconfigure the customer gateway using the
         * new configuration information returned with the new VPN connection
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpnConnectionAsync(const Model::DeleteVpnConnectionRequest& request, const DeleteVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified static route associated with a VPN connection between
         * an existing virtual private gateway and a VPN customer gateway. The static route
         * allows traffic to be routed from the virtual private gateway to the VPN customer
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnConnectionRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpnConnectionRouteOutcome DeleteVpnConnectionRoute(const Model::DeleteVpnConnectionRouteRequest& request) const;

        /**
         * <p>Deletes the specified static route associated with a VPN connection between
         * an existing virtual private gateway and a VPN customer gateway. The static route
         * allows traffic to be routed from the virtual private gateway to the VPN customer
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnConnectionRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpnConnectionRouteOutcomeCallable DeleteVpnConnectionRouteCallable(const Model::DeleteVpnConnectionRouteRequest& request) const;

        /**
         * <p>Deletes the specified static route associated with a VPN connection between
         * an existing virtual private gateway and a VPN customer gateway. The static route
         * allows traffic to be routed from the virtual private gateway to the VPN customer
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnConnectionRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpnConnectionRouteAsync(const Model::DeleteVpnConnectionRouteRequest& request, const DeleteVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified virtual private gateway. We recommend that before you
         * delete a virtual private gateway, you detach it from the VPC and delete the VPN
         * connection. Note that you don't need to delete the virtual private gateway if
         * you plan to delete and recreate the VPN connection between your VPC and your
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpnGatewayOutcome DeleteVpnGateway(const Model::DeleteVpnGatewayRequest& request) const;

        /**
         * <p>Deletes the specified virtual private gateway. We recommend that before you
         * delete a virtual private gateway, you detach it from the VPC and delete the VPN
         * connection. Note that you don't need to delete the virtual private gateway if
         * you plan to delete and recreate the VPN connection between your VPC and your
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpnGatewayOutcomeCallable DeleteVpnGatewayCallable(const Model::DeleteVpnGatewayRequest& request) const;

        /**
         * <p>Deletes the specified virtual private gateway. We recommend that before you
         * delete a virtual private gateway, you detach it from the VPC and delete the VPN
         * connection. Note that you don't need to delete the virtual private gateway if
         * you plan to delete and recreate the VPN connection between your VPC and your
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteVpnGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpnGatewayAsync(const Model::DeleteVpnGatewayRequest& request, const DeleteVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the specified AMI. After you deregister an AMI, it can't be used
         * to launch new instances; however, it doesn't affect any instances that you've
         * already launched from the AMI. You'll continue to incur usage costs for those
         * instances until you terminate them.</p> <p>When you deregister an Amazon
         * EBS-backed AMI, it doesn't affect the snapshot that was created for the root
         * volume of the instance during the AMI creation process. When you deregister an
         * instance store-backed AMI, it doesn't affect the files that you uploaded to
         * Amazon S3 when you created the AMI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterImageOutcome DeregisterImage(const Model::DeregisterImageRequest& request) const;

        /**
         * <p>Deregisters the specified AMI. After you deregister an AMI, it can't be used
         * to launch new instances; however, it doesn't affect any instances that you've
         * already launched from the AMI. You'll continue to incur usage costs for those
         * instances until you terminate them.</p> <p>When you deregister an Amazon
         * EBS-backed AMI, it doesn't affect the snapshot that was created for the root
         * volume of the instance during the AMI creation process. When you deregister an
         * instance store-backed AMI, it doesn't affect the files that you uploaded to
         * Amazon S3 when you created the AMI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterImageOutcomeCallable DeregisterImageCallable(const Model::DeregisterImageRequest& request) const;

        /**
         * <p>Deregisters the specified AMI. After you deregister an AMI, it can't be used
         * to launch new instances; however, it doesn't affect any instances that you've
         * already launched from the AMI. You'll continue to incur usage costs for those
         * instances until you terminate them.</p> <p>When you deregister an Amazon
         * EBS-backed AMI, it doesn't affect the snapshot that was created for the root
         * volume of the instance during the AMI creation process. When you deregister an
         * instance store-backed AMI, it doesn't affect the files that you uploaded to
         * Amazon S3 when you created the AMI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterImageAsync(const Model::DeregisterImageRequest& request, const DeregisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes attributes of your AWS account. The following are the supported
         * account attributes:</p> <ul> <li> <p> <code>supported-platforms</code>:
         * Indicates whether your account can launch instances into EC2-Classic and
         * EC2-VPC, or only into EC2-VPC.</p> </li> <li> <p> <code>default-vpc</code>: The
         * ID of the default VPC for your account, or <code>none</code>.</p> </li> <li> <p>
         * <code>max-instances</code>: The maximum number of On-Demand instances that you
         * can run.</p> </li> <li> <p> <code>vpc-max-security-groups-per-interface</code>:
         * The maximum number of security groups that you can assign to a network
         * interface.</p> </li> <li> <p> <code>max-elastic-ips</code>: The maximum number
         * of Elastic IP addresses that you can allocate for use with EC2-Classic. </p>
         * </li> <li> <p> <code>vpc-max-elastic-ips</code>: The maximum number of Elastic
         * IP addresses that you can allocate for use with EC2-VPC.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Describes attributes of your AWS account. The following are the supported
         * account attributes:</p> <ul> <li> <p> <code>supported-platforms</code>:
         * Indicates whether your account can launch instances into EC2-Classic and
         * EC2-VPC, or only into EC2-VPC.</p> </li> <li> <p> <code>default-vpc</code>: The
         * ID of the default VPC for your account, or <code>none</code>.</p> </li> <li> <p>
         * <code>max-instances</code>: The maximum number of On-Demand instances that you
         * can run.</p> </li> <li> <p> <code>vpc-max-security-groups-per-interface</code>:
         * The maximum number of security groups that you can assign to a network
         * interface.</p> </li> <li> <p> <code>max-elastic-ips</code>: The maximum number
         * of Elastic IP addresses that you can allocate for use with EC2-Classic. </p>
         * </li> <li> <p> <code>vpc-max-elastic-ips</code>: The maximum number of Elastic
         * IP addresses that you can allocate for use with EC2-VPC.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Describes attributes of your AWS account. The following are the supported
         * account attributes:</p> <ul> <li> <p> <code>supported-platforms</code>:
         * Indicates whether your account can launch instances into EC2-Classic and
         * EC2-VPC, or only into EC2-VPC.</p> </li> <li> <p> <code>default-vpc</code>: The
         * ID of the default VPC for your account, or <code>none</code>.</p> </li> <li> <p>
         * <code>max-instances</code>: The maximum number of On-Demand instances that you
         * can run.</p> </li> <li> <p> <code>vpc-max-security-groups-per-interface</code>:
         * The maximum number of security groups that you can assign to a network
         * interface.</p> </li> <li> <p> <code>max-elastic-ips</code>: The maximum number
         * of Elastic IP addresses that you can allocate for use with EC2-Classic. </p>
         * </li> <li> <p> <code>vpc-max-elastic-ips</code>: The maximum number of Elastic
         * IP addresses that you can allocate for use with EC2-VPC.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your Elastic IP addresses.</p> <p>An Elastic IP
         * address is for use in either the EC2-Classic platform or in a VPC. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddressesOutcome DescribeAddresses(const Model::DescribeAddressesRequest& request) const;

        /**
         * <p>Describes one or more of your Elastic IP addresses.</p> <p>An Elastic IP
         * address is for use in either the EC2-Classic platform or in a VPC. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAddresses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAddressesOutcomeCallable DescribeAddressesCallable(const Model::DescribeAddressesRequest& request) const;

        /**
         * <p>Describes one or more of your Elastic IP addresses.</p> <p>An Elastic IP
         * address is for use in either the EC2-Classic platform or in a VPC. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAddresses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAddressesAsync(const Model::DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of the Availability Zones that are available to you.
         * The results include zones only for the region you're currently using. If there
         * is an event impacting an Availability Zone, you can use this request to view the
         * state and any provided message for that Availability Zone.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
         * and Availability Zones</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAvailabilityZones">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAvailabilityZonesOutcome DescribeAvailabilityZones(const Model::DescribeAvailabilityZonesRequest& request) const;

        /**
         * <p>Describes one or more of the Availability Zones that are available to you.
         * The results include zones only for the region you're currently using. If there
         * is an event impacting an Availability Zone, you can use this request to view the
         * state and any provided message for that Availability Zone.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
         * and Availability Zones</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAvailabilityZones">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAvailabilityZonesOutcomeCallable DescribeAvailabilityZonesCallable(const Model::DescribeAvailabilityZonesRequest& request) const;

        /**
         * <p>Describes one or more of the Availability Zones that are available to you.
         * The results include zones only for the region you're currently using. If there
         * is an event impacting an Availability Zone, you can use this request to view the
         * state and any provided message for that Availability Zone.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions
         * and Availability Zones</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeAvailabilityZones">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAvailabilityZonesAsync(const Model::DescribeAvailabilityZonesRequest& request, const DescribeAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your bundling tasks.</p> <note> <p>Completed bundle
         * tasks are listed for only a limited time. If your bundle task is no longer in
         * the list, you can still register an AMI from it. Just use
         * <code>RegisterImage</code> with the Amazon S3 bucket name and image manifest
         * name you provided to the bundle task.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeBundleTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBundleTasksOutcome DescribeBundleTasks(const Model::DescribeBundleTasksRequest& request) const;

        /**
         * <p>Describes one or more of your bundling tasks.</p> <note> <p>Completed bundle
         * tasks are listed for only a limited time. If your bundle task is no longer in
         * the list, you can still register an AMI from it. Just use
         * <code>RegisterImage</code> with the Amazon S3 bucket name and image manifest
         * name you provided to the bundle task.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeBundleTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBundleTasksOutcomeCallable DescribeBundleTasksCallable(const Model::DescribeBundleTasksRequest& request) const;

        /**
         * <p>Describes one or more of your bundling tasks.</p> <note> <p>Completed bundle
         * tasks are listed for only a limited time. If your bundle task is no longer in
         * the list, you can still register an AMI from it. Just use
         * <code>RegisterImage</code> with the Amazon S3 bucket name and image manifest
         * name you provided to the bundle task.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeBundleTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBundleTasksAsync(const Model::DescribeBundleTasksRequest& request, const DescribeBundleTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your linked EC2-Classic instances. This request only
         * returns information about EC2-Classic instances linked to a VPC through
         * ClassicLink; you cannot use this request to return information about other
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClassicLinkInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClassicLinkInstancesOutcome DescribeClassicLinkInstances(const Model::DescribeClassicLinkInstancesRequest& request) const;

        /**
         * <p>Describes one or more of your linked EC2-Classic instances. This request only
         * returns information about EC2-Classic instances linked to a VPC through
         * ClassicLink; you cannot use this request to return information about other
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClassicLinkInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClassicLinkInstancesOutcomeCallable DescribeClassicLinkInstancesCallable(const Model::DescribeClassicLinkInstancesRequest& request) const;

        /**
         * <p>Describes one or more of your linked EC2-Classic instances. This request only
         * returns information about EC2-Classic instances linked to a VPC through
         * ClassicLink; you cannot use this request to return information about other
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClassicLinkInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClassicLinkInstancesAsync(const Model::DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your conversion tasks. For more information, see the
         * <a href="http://docs.aws.amazon.com/vm-import/latest/userguide/">VM
         * Import/Export User Guide</a>.</p> <p>For information about the import manifest
         * referenced by this API action, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeConversionTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConversionTasksOutcome DescribeConversionTasks(const Model::DescribeConversionTasksRequest& request) const;

        /**
         * <p>Describes one or more of your conversion tasks. For more information, see the
         * <a href="http://docs.aws.amazon.com/vm-import/latest/userguide/">VM
         * Import/Export User Guide</a>.</p> <p>For information about the import manifest
         * referenced by this API action, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeConversionTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConversionTasksOutcomeCallable DescribeConversionTasksCallable(const Model::DescribeConversionTasksRequest& request) const;

        /**
         * <p>Describes one or more of your conversion tasks. For more information, see the
         * <a href="http://docs.aws.amazon.com/vm-import/latest/userguide/">VM
         * Import/Export User Guide</a>.</p> <p>For information about the import manifest
         * referenced by this API action, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeConversionTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConversionTasksAsync(const Model::DescribeConversionTasksRequest& request, const DescribeConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your VPN customer gateways.</p> <p>For more
         * information about VPN customer gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCustomerGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomerGatewaysOutcome DescribeCustomerGateways(const Model::DescribeCustomerGatewaysRequest& request) const;

        /**
         * <p>Describes one or more of your VPN customer gateways.</p> <p>For more
         * information about VPN customer gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCustomerGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomerGatewaysOutcomeCallable DescribeCustomerGatewaysCallable(const Model::DescribeCustomerGatewaysRequest& request) const;

        /**
         * <p>Describes one or more of your VPN customer gateways.</p> <p>For more
         * information about VPN customer gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCustomerGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomerGatewaysAsync(const Model::DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your DHCP options sets.</p> <p>For more information
         * about DHCP options sets, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeDhcpOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDhcpOptionsOutcome DescribeDhcpOptions(const Model::DescribeDhcpOptionsRequest& request) const;

        /**
         * <p>Describes one or more of your DHCP options sets.</p> <p>For more information
         * about DHCP options sets, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeDhcpOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDhcpOptionsOutcomeCallable DescribeDhcpOptionsCallable(const Model::DescribeDhcpOptionsRequest& request) const;

        /**
         * <p>Describes one or more of your DHCP options sets.</p> <p>For more information
         * about DHCP options sets, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
         * Options Sets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeDhcpOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDhcpOptionsAsync(const Model::DescribeDhcpOptionsRequest& request, const DescribeDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your egress-only Internet gateways.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeEgressOnlyInternetGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEgressOnlyInternetGatewaysOutcome DescribeEgressOnlyInternetGateways(const Model::DescribeEgressOnlyInternetGatewaysRequest& request) const;

        /**
         * <p>Describes one or more of your egress-only Internet gateways.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeEgressOnlyInternetGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEgressOnlyInternetGatewaysOutcomeCallable DescribeEgressOnlyInternetGatewaysCallable(const Model::DescribeEgressOnlyInternetGatewaysRequest& request) const;

        /**
         * <p>Describes one or more of your egress-only Internet gateways.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeEgressOnlyInternetGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEgressOnlyInternetGatewaysAsync(const Model::DescribeEgressOnlyInternetGatewaysRequest& request, const DescribeEgressOnlyInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Elastic GPUs associated with your instances. For more
         * information about Elastic GPUs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-gpus.html">Amazon
         * EC2 Elastic GPUs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeElasticGpus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticGpusOutcome DescribeElasticGpus(const Model::DescribeElasticGpusRequest& request) const;

        /**
         * <p>Describes the Elastic GPUs associated with your instances. For more
         * information about Elastic GPUs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-gpus.html">Amazon
         * EC2 Elastic GPUs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeElasticGpus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticGpusOutcomeCallable DescribeElasticGpusCallable(const Model::DescribeElasticGpusRequest& request) const;

        /**
         * <p>Describes the Elastic GPUs associated with your instances. For more
         * information about Elastic GPUs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-gpus.html">Amazon
         * EC2 Elastic GPUs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeElasticGpus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeElasticGpusAsync(const Model::DescribeElasticGpusRequest& request, const DescribeElasticGpusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your export tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeExportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportTasksOutcome DescribeExportTasks(const Model::DescribeExportTasksRequest& request) const;

        /**
         * <p>Describes one or more of your export tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeExportTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExportTasksOutcomeCallable DescribeExportTasksCallable(const Model::DescribeExportTasksRequest& request) const;

        /**
         * <p>Describes one or more of your export tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeExportTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExportTasksAsync(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more flow logs. To view the information in your flow logs
         * (the log streams for the network interfaces), you must use the CloudWatch Logs
         * console or the CloudWatch Logs API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFlowLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowLogsOutcome DescribeFlowLogs(const Model::DescribeFlowLogsRequest& request) const;

        /**
         * <p>Describes one or more flow logs. To view the information in your flow logs
         * (the log streams for the network interfaces), you must use the CloudWatch Logs
         * console or the CloudWatch Logs API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFlowLogs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFlowLogsOutcomeCallable DescribeFlowLogsCallable(const Model::DescribeFlowLogsRequest& request) const;

        /**
         * <p>Describes one or more flow logs. To view the information in your flow logs
         * (the log streams for the network interfaces), you must use the CloudWatch Logs
         * console or the CloudWatch Logs API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFlowLogs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFlowLogsAsync(const Model::DescribeFlowLogsRequest& request, const DescribeFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified Amazon FPGA Image
         * (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFpgaImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFpgaImageAttributeOutcome DescribeFpgaImageAttribute(const Model::DescribeFpgaImageAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified Amazon FPGA Image
         * (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFpgaImageAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFpgaImageAttributeOutcomeCallable DescribeFpgaImageAttributeCallable(const Model::DescribeFpgaImageAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified Amazon FPGA Image
         * (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFpgaImageAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFpgaImageAttributeAsync(const Model::DescribeFpgaImageAttributeRequest& request, const DescribeFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more available Amazon FPGA Images (AFIs). These include
         * public AFIs, private AFIs that you own, and AFIs owned by other AWS accounts for
         * which you have load permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFpgaImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFpgaImagesOutcome DescribeFpgaImages(const Model::DescribeFpgaImagesRequest& request) const;

        /**
         * <p>Describes one or more available Amazon FPGA Images (AFIs). These include
         * public AFIs, private AFIs that you own, and AFIs owned by other AWS accounts for
         * which you have load permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFpgaImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFpgaImagesOutcomeCallable DescribeFpgaImagesCallable(const Model::DescribeFpgaImagesRequest& request) const;

        /**
         * <p>Describes one or more available Amazon FPGA Images (AFIs). These include
         * public AFIs, private AFIs that you own, and AFIs owned by other AWS accounts for
         * which you have load permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFpgaImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFpgaImagesAsync(const Model::DescribeFpgaImagesRequest& request, const DescribeFpgaImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Dedicated Host Reservations that are available to purchase.</p>
         * <p>The results describe all the Dedicated Host Reservation offerings, including
         * offerings that may not match the instance family and region of your Dedicated
         * Hosts. When purchasing an offering, ensure that the the instance family and
         * region of the offering matches that of the Dedicated Host/s it will be
         * associated with. For an overview of supported instance types, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-overview.html">Dedicated
         * Hosts Overview</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHostReservationOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostReservationOfferingsOutcome DescribeHostReservationOfferings(const Model::DescribeHostReservationOfferingsRequest& request) const;

        /**
         * <p>Describes the Dedicated Host Reservations that are available to purchase.</p>
         * <p>The results describe all the Dedicated Host Reservation offerings, including
         * offerings that may not match the instance family and region of your Dedicated
         * Hosts. When purchasing an offering, ensure that the the instance family and
         * region of the offering matches that of the Dedicated Host/s it will be
         * associated with. For an overview of supported instance types, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-overview.html">Dedicated
         * Hosts Overview</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHostReservationOfferings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHostReservationOfferingsOutcomeCallable DescribeHostReservationOfferingsCallable(const Model::DescribeHostReservationOfferingsRequest& request) const;

        /**
         * <p>Describes the Dedicated Host Reservations that are available to purchase.</p>
         * <p>The results describe all the Dedicated Host Reservation offerings, including
         * offerings that may not match the instance family and region of your Dedicated
         * Hosts. When purchasing an offering, ensure that the the instance family and
         * region of the offering matches that of the Dedicated Host/s it will be
         * associated with. For an overview of supported instance types, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-overview.html">Dedicated
         * Hosts Overview</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHostReservationOfferings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHostReservationOfferingsAsync(const Model::DescribeHostReservationOfferingsRequest& request, const DescribeHostReservationOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Dedicated Host Reservations which are associated with Dedicated
         * Hosts in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHostReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostReservationsOutcome DescribeHostReservations(const Model::DescribeHostReservationsRequest& request) const;

        /**
         * <p>Describes Dedicated Host Reservations which are associated with Dedicated
         * Hosts in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHostReservations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHostReservationsOutcomeCallable DescribeHostReservationsCallable(const Model::DescribeHostReservationsRequest& request) const;

        /**
         * <p>Describes Dedicated Host Reservations which are associated with Dedicated
         * Hosts in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHostReservations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHostReservationsAsync(const Model::DescribeHostReservationsRequest& request, const DescribeHostReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your Dedicated Hosts.</p> <p>The results describe
         * only the Dedicated Hosts in the region you're currently using. All listed
         * instances consume capacity on your Dedicated Host. Dedicated Hosts that have
         * recently been released will be listed with the state
         * <code>released</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHosts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHostsOutcome DescribeHosts(const Model::DescribeHostsRequest& request) const;

        /**
         * <p>Describes one or more of your Dedicated Hosts.</p> <p>The results describe
         * only the Dedicated Hosts in the region you're currently using. All listed
         * instances consume capacity on your Dedicated Host. Dedicated Hosts that have
         * recently been released will be listed with the state
         * <code>released</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHosts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHostsOutcomeCallable DescribeHostsCallable(const Model::DescribeHostsRequest& request) const;

        /**
         * <p>Describes one or more of your Dedicated Hosts.</p> <p>The results describe
         * only the Dedicated Hosts in the region you're currently using. All listed
         * instances consume capacity on your Dedicated Host. Dedicated Hosts that have
         * recently been released will be listed with the state
         * <code>released</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeHosts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHostsAsync(const Model::DescribeHostsRequest& request, const DescribeHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your IAM instance profile associations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIamInstanceProfileAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIamInstanceProfileAssociationsOutcome DescribeIamInstanceProfileAssociations(const Model::DescribeIamInstanceProfileAssociationsRequest& request) const;

        /**
         * <p>Describes your IAM instance profile associations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIamInstanceProfileAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIamInstanceProfileAssociationsOutcomeCallable DescribeIamInstanceProfileAssociationsCallable(const Model::DescribeIamInstanceProfileAssociationsRequest& request) const;

        /**
         * <p>Describes your IAM instance profile associations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIamInstanceProfileAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIamInstanceProfileAssociationsAsync(const Model::DescribeIamInstanceProfileAssociationsRequest& request, const DescribeIamInstanceProfileAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the ID format settings for your resources on a per-region basis,
         * for example, to view which resource types are enabled for longer IDs. This
         * request only returns information about resource types whose ID formats can be
         * modified; it does not return information about other resource types.</p> <p>The
         * following resource types support longer IDs: <code>instance</code> |
         * <code>reservation</code> | <code>snapshot</code> | <code>volume</code>. </p>
         * <p>These settings apply to the IAM user who makes the request; they do not apply
         * to the entire AWS account. By default, an IAM user defaults to the same settings
         * as the root user, unless they explicitly override the settings by running the
         * <a>ModifyIdFormat</a> command. Resources created with longer IDs are visible to
         * all IAM users, regardless of these settings and provided that they have
         * permission to use the relevant <code>Describe</code> command for the resource
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIdFormat">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdFormatOutcome DescribeIdFormat(const Model::DescribeIdFormatRequest& request) const;

        /**
         * <p>Describes the ID format settings for your resources on a per-region basis,
         * for example, to view which resource types are enabled for longer IDs. This
         * request only returns information about resource types whose ID formats can be
         * modified; it does not return information about other resource types.</p> <p>The
         * following resource types support longer IDs: <code>instance</code> |
         * <code>reservation</code> | <code>snapshot</code> | <code>volume</code>. </p>
         * <p>These settings apply to the IAM user who makes the request; they do not apply
         * to the entire AWS account. By default, an IAM user defaults to the same settings
         * as the root user, unless they explicitly override the settings by running the
         * <a>ModifyIdFormat</a> command. Resources created with longer IDs are visible to
         * all IAM users, regardless of these settings and provided that they have
         * permission to use the relevant <code>Describe</code> command for the resource
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIdFormat">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdFormatOutcomeCallable DescribeIdFormatCallable(const Model::DescribeIdFormatRequest& request) const;

        /**
         * <p>Describes the ID format settings for your resources on a per-region basis,
         * for example, to view which resource types are enabled for longer IDs. This
         * request only returns information about resource types whose ID formats can be
         * modified; it does not return information about other resource types.</p> <p>The
         * following resource types support longer IDs: <code>instance</code> |
         * <code>reservation</code> | <code>snapshot</code> | <code>volume</code>. </p>
         * <p>These settings apply to the IAM user who makes the request; they do not apply
         * to the entire AWS account. By default, an IAM user defaults to the same settings
         * as the root user, unless they explicitly override the settings by running the
         * <a>ModifyIdFormat</a> command. Resources created with longer IDs are visible to
         * all IAM users, regardless of these settings and provided that they have
         * permission to use the relevant <code>Describe</code> command for the resource
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIdFormat">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdFormatAsync(const Model::DescribeIdFormatRequest& request, const DescribeIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the ID format settings for resources for the specified IAM user,
         * IAM role, or root user. For example, you can view the resource types that are
         * enabled for longer IDs. This request only returns information about resource
         * types whose ID formats can be modified; it does not return information about
         * other resource types. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>The
         * following resource types support longer IDs: <code>instance</code> |
         * <code>reservation</code> | <code>snapshot</code> | <code>volume</code>. </p>
         * <p>These settings apply to the principal specified in the request. They do not
         * apply to the principal that makes the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIdentityIdFormat">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityIdFormatOutcome DescribeIdentityIdFormat(const Model::DescribeIdentityIdFormatRequest& request) const;

        /**
         * <p>Describes the ID format settings for resources for the specified IAM user,
         * IAM role, or root user. For example, you can view the resource types that are
         * enabled for longer IDs. This request only returns information about resource
         * types whose ID formats can be modified; it does not return information about
         * other resource types. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>The
         * following resource types support longer IDs: <code>instance</code> |
         * <code>reservation</code> | <code>snapshot</code> | <code>volume</code>. </p>
         * <p>These settings apply to the principal specified in the request. They do not
         * apply to the principal that makes the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIdentityIdFormat">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIdentityIdFormatOutcomeCallable DescribeIdentityIdFormatCallable(const Model::DescribeIdentityIdFormatRequest& request) const;

        /**
         * <p>Describes the ID format settings for resources for the specified IAM user,
         * IAM role, or root user. For example, you can view the resource types that are
         * enabled for longer IDs. This request only returns information about resource
         * types whose ID formats can be modified; it does not return information about
         * other resource types. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>The
         * following resource types support longer IDs: <code>instance</code> |
         * <code>reservation</code> | <code>snapshot</code> | <code>volume</code>. </p>
         * <p>These settings apply to the principal specified in the request. They do not
         * apply to the principal that makes the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeIdentityIdFormat">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIdentityIdFormatAsync(const Model::DescribeIdentityIdFormatRequest& request, const DescribeIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified AMI. You can specify only
         * one attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageAttributeOutcome DescribeImageAttribute(const Model::DescribeImageAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified AMI. You can specify only
         * one attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImageAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImageAttributeOutcomeCallable DescribeImageAttributeCallable(const Model::DescribeImageAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified AMI. You can specify only
         * one attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImageAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageAttributeAsync(const Model::DescribeImageAttributeRequest& request, const DescribeImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of the images (AMIs, AKIs, and ARIs) available to you.
         * Images available to you include public images, private images that you own, and
         * private images owned by other AWS accounts but for which you have explicit
         * launch permissions.</p> <note> <p>Deregistered images are included in the
         * returned results for an unspecified interval after deregistration.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest& request) const;

        /**
         * <p>Describes one or more of the images (AMIs, AKIs, and ARIs) available to you.
         * Images available to you include public images, private images that you own, and
         * private images owned by other AWS accounts but for which you have explicit
         * launch permissions.</p> <note> <p>Deregistered images are included in the
         * returned results for an unspecified interval after deregistration.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request) const;

        /**
         * <p>Describes one or more of the images (AMIs, AKIs, and ARIs) available to you.
         * Images available to you include public images, private images that you own, and
         * private images owned by other AWS accounts but for which you have explicit
         * launch permissions.</p> <note> <p>Deregistered images are included in the
         * returned results for an unspecified interval after deregistration.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays details about an import virtual machine or import snapshot tasks
         * that are already created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportImageTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportImageTasksOutcome DescribeImportImageTasks(const Model::DescribeImportImageTasksRequest& request) const;

        /**
         * <p>Displays details about an import virtual machine or import snapshot tasks
         * that are already created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportImageTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImportImageTasksOutcomeCallable DescribeImportImageTasksCallable(const Model::DescribeImportImageTasksRequest& request) const;

        /**
         * <p>Displays details about an import virtual machine or import snapshot tasks
         * that are already created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportImageTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImportImageTasksAsync(const Model::DescribeImportImageTasksRequest& request, const DescribeImportImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your import snapshot tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportSnapshotTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportSnapshotTasksOutcome DescribeImportSnapshotTasks(const Model::DescribeImportSnapshotTasksRequest& request) const;

        /**
         * <p>Describes your import snapshot tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportSnapshotTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImportSnapshotTasksOutcomeCallable DescribeImportSnapshotTasksCallable(const Model::DescribeImportSnapshotTasksRequest& request) const;

        /**
         * <p>Describes your import snapshot tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportSnapshotTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImportSnapshotTasksAsync(const Model::DescribeImportSnapshotTasksRequest& request, const DescribeImportSnapshotTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified instance. You can specify
         * only one attribute at a time. Valid attribute values are:
         * <code>instanceType</code> | <code>kernel</code> | <code>ramdisk</code> |
         * <code>userData</code> | <code>disableApiTermination</code> |
         * <code>instanceInitiatedShutdownBehavior</code> | <code>rootDeviceName</code> |
         * <code>blockDeviceMapping</code> | <code>productCodes</code> |
         * <code>sourceDestCheck</code> | <code>groupSet</code> | <code>ebsOptimized</code>
         * | <code>sriovNetSupport</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAttributeOutcome DescribeInstanceAttribute(const Model::DescribeInstanceAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified instance. You can specify
         * only one attribute at a time. Valid attribute values are:
         * <code>instanceType</code> | <code>kernel</code> | <code>ramdisk</code> |
         * <code>userData</code> | <code>disableApiTermination</code> |
         * <code>instanceInitiatedShutdownBehavior</code> | <code>rootDeviceName</code> |
         * <code>blockDeviceMapping</code> | <code>productCodes</code> |
         * <code>sourceDestCheck</code> | <code>groupSet</code> | <code>ebsOptimized</code>
         * | <code>sriovNetSupport</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceAttributeOutcomeCallable DescribeInstanceAttributeCallable(const Model::DescribeInstanceAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified instance. You can specify
         * only one attribute at a time. Valid attribute values are:
         * <code>instanceType</code> | <code>kernel</code> | <code>ramdisk</code> |
         * <code>userData</code> | <code>disableApiTermination</code> |
         * <code>instanceInitiatedShutdownBehavior</code> | <code>rootDeviceName</code> |
         * <code>blockDeviceMapping</code> | <code>productCodes</code> |
         * <code>sourceDestCheck</code> | <code>groupSet</code> | <code>ebsOptimized</code>
         * | <code>sriovNetSupport</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAttributeAsync(const Model::DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the status of one or more instances. By default, only running
         * instances are described, unless you specifically indicate to return the status
         * of all instances.</p> <p>Instance status includes the following components:</p>
         * <ul> <li> <p> <b>Status checks</b> - Amazon EC2 performs status checks on
         * running EC2 instances to identify hardware and software issues. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-system-instance-status-check.html">Status
         * Checks for Your Instances</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstances.html">Troubleshooting
         * Instances with Failed Status Checks</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p> </li> <li> <p> <b>Scheduled events</b> - Amazon EC2 can
         * schedule events (such as reboot, stop, or terminate) for your instances related
         * to hardware issues, software updates, or system maintenance. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-instances-status-check_sched.html">Scheduled
         * Events for Your Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> </li> <li> <p> <b>Instance state</b> - You can manage your
         * instances from the moment you launch them through their termination. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * Lifecycle</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceStatusOutcome DescribeInstanceStatus(const Model::DescribeInstanceStatusRequest& request) const;

        /**
         * <p>Describes the status of one or more instances. By default, only running
         * instances are described, unless you specifically indicate to return the status
         * of all instances.</p> <p>Instance status includes the following components:</p>
         * <ul> <li> <p> <b>Status checks</b> - Amazon EC2 performs status checks on
         * running EC2 instances to identify hardware and software issues. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-system-instance-status-check.html">Status
         * Checks for Your Instances</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstances.html">Troubleshooting
         * Instances with Failed Status Checks</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p> </li> <li> <p> <b>Scheduled events</b> - Amazon EC2 can
         * schedule events (such as reboot, stop, or terminate) for your instances related
         * to hardware issues, software updates, or system maintenance. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-instances-status-check_sched.html">Scheduled
         * Events for Your Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> </li> <li> <p> <b>Instance state</b> - You can manage your
         * instances from the moment you launch them through their termination. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * Lifecycle</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceStatusOutcomeCallable DescribeInstanceStatusCallable(const Model::DescribeInstanceStatusRequest& request) const;

        /**
         * <p>Describes the status of one or more instances. By default, only running
         * instances are described, unless you specifically indicate to return the status
         * of all instances.</p> <p>Instance status includes the following components:</p>
         * <ul> <li> <p> <b>Status checks</b> - Amazon EC2 performs status checks on
         * running EC2 instances to identify hardware and software issues. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-system-instance-status-check.html">Status
         * Checks for Your Instances</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstances.html">Troubleshooting
         * Instances with Failed Status Checks</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p> </li> <li> <p> <b>Scheduled events</b> - Amazon EC2 can
         * schedule events (such as reboot, stop, or terminate) for your instances related
         * to hardware issues, software updates, or system maintenance. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-instances-status-check_sched.html">Scheduled
         * Events for Your Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> </li> <li> <p> <b>Instance state</b> - You can manage your
         * instances from the moment you launch them through their termination. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * Lifecycle</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceStatusAsync(const Model::DescribeInstanceStatusRequest& request, const DescribeInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your instances.</p> <p>If you specify one or more
         * instance IDs, Amazon EC2 returns information for those instances. If you do not
         * specify instance IDs, Amazon EC2 returns information for all relevant instances.
         * If you specify an instance ID that is not valid, an error is returned. If you
         * specify an instance that you do not own, it is not included in the returned
         * results.</p> <p>Recently terminated instances might appear in the returned
         * results. This interval is usually less than one hour.</p> <p>If you describe
         * instances in the rare case where an Availability Zone is experiencing a service
         * disruption and you specify instance IDs that are in the affected zone, or do not
         * specify any instance IDs at all, the call fails. If you describe instances and
         * specify only instance IDs that are in an unaffected zone, the call works
         * normally.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest& request) const;

        /**
         * <p>Describes one or more of your instances.</p> <p>If you specify one or more
         * instance IDs, Amazon EC2 returns information for those instances. If you do not
         * specify instance IDs, Amazon EC2 returns information for all relevant instances.
         * If you specify an instance ID that is not valid, an error is returned. If you
         * specify an instance that you do not own, it is not included in the returned
         * results.</p> <p>Recently terminated instances might appear in the returned
         * results. This interval is usually less than one hour.</p> <p>If you describe
         * instances in the rare case where an Availability Zone is experiencing a service
         * disruption and you specify instance IDs that are in the affected zone, or do not
         * specify any instance IDs at all, the call fails. If you describe instances and
         * specify only instance IDs that are in an unaffected zone, the call works
         * normally.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request) const;

        /**
         * <p>Describes one or more of your instances.</p> <p>If you specify one or more
         * instance IDs, Amazon EC2 returns information for those instances. If you do not
         * specify instance IDs, Amazon EC2 returns information for all relevant instances.
         * If you specify an instance ID that is not valid, an error is returned. If you
         * specify an instance that you do not own, it is not included in the returned
         * results.</p> <p>Recently terminated instances might appear in the returned
         * results. This interval is usually less than one hour.</p> <p>If you describe
         * instances in the rare case where an Availability Zone is experiencing a service
         * disruption and you specify instance IDs that are in the affected zone, or do not
         * specify any instance IDs at all, the call fails. If you describe instances and
         * specify only instance IDs that are in an unaffected zone, the call works
         * normally.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your Internet gateways.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInternetGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInternetGatewaysOutcome DescribeInternetGateways(const Model::DescribeInternetGatewaysRequest& request) const;

        /**
         * <p>Describes one or more of your Internet gateways.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInternetGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInternetGatewaysOutcomeCallable DescribeInternetGatewaysCallable(const Model::DescribeInternetGatewaysRequest& request) const;

        /**
         * <p>Describes one or more of your Internet gateways.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInternetGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInternetGatewaysAsync(const Model::DescribeInternetGatewaysRequest& request, const DescribeInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your key pairs.</p> <p>For more information about
         * key pairs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeKeyPairs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeKeyPairsOutcome DescribeKeyPairs(const Model::DescribeKeyPairsRequest& request) const;

        /**
         * <p>Describes one or more of your key pairs.</p> <p>For more information about
         * key pairs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeKeyPairs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeKeyPairsOutcomeCallable DescribeKeyPairsCallable(const Model::DescribeKeyPairsRequest& request) const;

        /**
         * <p>Describes one or more of your key pairs.</p> <p>For more information about
         * key pairs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeKeyPairs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeKeyPairsAsync(const Model::DescribeKeyPairsRequest& request, const DescribeKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your Elastic IP addresses that are being moved to the EC2-VPC
         * platform, or that are being restored to the EC2-Classic platform. This request
         * does not return information about any other Elastic IP addresses in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeMovingAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMovingAddressesOutcome DescribeMovingAddresses(const Model::DescribeMovingAddressesRequest& request) const;

        /**
         * <p>Describes your Elastic IP addresses that are being moved to the EC2-VPC
         * platform, or that are being restored to the EC2-Classic platform. This request
         * does not return information about any other Elastic IP addresses in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeMovingAddresses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMovingAddressesOutcomeCallable DescribeMovingAddressesCallable(const Model::DescribeMovingAddressesRequest& request) const;

        /**
         * <p>Describes your Elastic IP addresses that are being moved to the EC2-VPC
         * platform, or that are being restored to the EC2-Classic platform. This request
         * does not return information about any other Elastic IP addresses in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeMovingAddresses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMovingAddressesAsync(const Model::DescribeMovingAddressesRequest& request, const DescribeMovingAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of the your NAT gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNatGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNatGatewaysOutcome DescribeNatGateways(const Model::DescribeNatGatewaysRequest& request) const;

        /**
         * <p>Describes one or more of the your NAT gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNatGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNatGatewaysOutcomeCallable DescribeNatGatewaysCallable(const Model::DescribeNatGatewaysRequest& request) const;

        /**
         * <p>Describes one or more of the your NAT gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNatGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNatGatewaysAsync(const Model::DescribeNatGatewaysRequest& request, const DescribeNatGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your network ACLs.</p> <p>For more information about
         * network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkAcls">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkAclsOutcome DescribeNetworkAcls(const Model::DescribeNetworkAclsRequest& request) const;

        /**
         * <p>Describes one or more of your network ACLs.</p> <p>For more information about
         * network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkAcls">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkAclsOutcomeCallable DescribeNetworkAclsCallable(const Model::DescribeNetworkAclsRequest& request) const;

        /**
         * <p>Describes one or more of your network ACLs.</p> <p>For more information about
         * network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkAcls">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkAclsAsync(const Model::DescribeNetworkAclsRequest& request, const DescribeNetworkAclsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a network interface attribute. You can specify only one attribute
         * at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInterfaceAttributeOutcome DescribeNetworkInterfaceAttribute(const Model::DescribeNetworkInterfaceAttributeRequest& request) const;

        /**
         * <p>Describes a network interface attribute. You can specify only one attribute
         * at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkInterfaceAttributeOutcomeCallable DescribeNetworkInterfaceAttributeCallable(const Model::DescribeNetworkInterfaceAttributeRequest& request) const;

        /**
         * <p>Describes a network interface attribute. You can specify only one attribute
         * at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkInterfaceAttributeAsync(const Model::DescribeNetworkInterfaceAttributeRequest& request, const DescribeNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the permissions for your network interfaces. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInterfacePermissionsOutcome DescribeNetworkInterfacePermissions(const Model::DescribeNetworkInterfacePermissionsRequest& request) const;

        /**
         * <p>Describes the permissions for your network interfaces. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkInterfacePermissionsOutcomeCallable DescribeNetworkInterfacePermissionsCallable(const Model::DescribeNetworkInterfacePermissionsRequest& request) const;

        /**
         * <p>Describes the permissions for your network interfaces. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkInterfacePermissionsAsync(const Model::DescribeNetworkInterfacePermissionsRequest& request, const DescribeNetworkInterfacePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your network interfaces.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkInterfacesOutcome DescribeNetworkInterfaces(const Model::DescribeNetworkInterfacesRequest& request) const;

        /**
         * <p>Describes one or more of your network interfaces.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNetworkInterfacesOutcomeCallable DescribeNetworkInterfacesCallable(const Model::DescribeNetworkInterfacesRequest& request) const;

        /**
         * <p>Describes one or more of your network interfaces.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNetworkInterfacesAsync(const Model::DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your placement groups. For more information about
         * placement groups and cluster instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using_cluster_computing.html">Cluster
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePlacementGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlacementGroupsOutcome DescribePlacementGroups(const Model::DescribePlacementGroupsRequest& request) const;

        /**
         * <p>Describes one or more of your placement groups. For more information about
         * placement groups and cluster instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using_cluster_computing.html">Cluster
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePlacementGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlacementGroupsOutcomeCallable DescribePlacementGroupsCallable(const Model::DescribePlacementGroupsRequest& request) const;

        /**
         * <p>Describes one or more of your placement groups. For more information about
         * placement groups and cluster instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using_cluster_computing.html">Cluster
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePlacementGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlacementGroupsAsync(const Model::DescribePlacementGroupsRequest& request, const DescribePlacementGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes available AWS services in a prefix list format, which includes the
         * prefix list name and prefix list ID of the service and the IP address range for
         * the service. A prefix list ID is required for creating an outbound security
         * group rule that allows traffic from a VPC to access an AWS service through a VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePrefixLists">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePrefixListsOutcome DescribePrefixLists(const Model::DescribePrefixListsRequest& request) const;

        /**
         * <p>Describes available AWS services in a prefix list format, which includes the
         * prefix list name and prefix list ID of the service and the IP address range for
         * the service. A prefix list ID is required for creating an outbound security
         * group rule that allows traffic from a VPC to access an AWS service through a VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePrefixLists">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePrefixListsOutcomeCallable DescribePrefixListsCallable(const Model::DescribePrefixListsRequest& request) const;

        /**
         * <p>Describes available AWS services in a prefix list format, which includes the
         * prefix list name and prefix list ID of the service and the IP address range for
         * the service. A prefix list ID is required for creating an outbound security
         * group rule that allows traffic from a VPC to access an AWS service through a VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePrefixLists">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePrefixListsAsync(const Model::DescribePrefixListsRequest& request, const DescribePrefixListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more regions that are currently available to you.</p> <p>For
         * a list of the regions supported by Amazon EC2, see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#ec2_region">Regions
         * and Endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest& request) const;

        /**
         * <p>Describes one or more regions that are currently available to you.</p> <p>For
         * a list of the regions supported by Amazon EC2, see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#ec2_region">Regions
         * and Endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeRegions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request) const;

        /**
         * <p>Describes one or more regions that are currently available to you.</p> <p>For
         * a list of the regions supported by Amazon EC2, see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#ec2_region">Regions
         * and Endpoints</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeRegions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of the Reserved Instances that you purchased.</p>
         * <p>For more information about Reserved Instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-on-demand-reserved-instances.html">Reserved
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesOutcome DescribeReservedInstances(const Model::DescribeReservedInstancesRequest& request) const;

        /**
         * <p>Describes one or more of the Reserved Instances that you purchased.</p>
         * <p>For more information about Reserved Instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-on-demand-reserved-instances.html">Reserved
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedInstancesOutcomeCallable DescribeReservedInstancesCallable(const Model::DescribeReservedInstancesRequest& request) const;

        /**
         * <p>Describes one or more of the Reserved Instances that you purchased.</p>
         * <p>For more information about Reserved Instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-on-demand-reserved-instances.html">Reserved
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedInstancesAsync(const Model::DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your account's Reserved Instance listings in the Reserved Instance
         * Marketplace.</p> <p>The Reserved Instance Marketplace matches sellers who want
         * to resell Reserved Instance capacity that they no longer need with buyers who
         * want to purchase additional capacity. Reserved Instances bought and sold through
         * the Reserved Instance Marketplace work like any other Reserved Instances.</p>
         * <p>As a seller, you choose to list some or all of your Reserved Instances, and
         * you specify the upfront price to receive for them. Your Reserved Instances are
         * then listed in the Reserved Instance Marketplace and are available for
         * purchase.</p> <p>As a buyer, you specify the configuration of the Reserved
         * Instance to purchase, and the Marketplace matches what you're searching for with
         * what's available. The Marketplace first sells the lowest priced Reserved
         * Instances to you, and continues to sell available Reserved Instance listings to
         * you until your demand is met. You are charged based on the total price of all of
         * the listings that you purchase.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesListings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesListingsOutcome DescribeReservedInstancesListings(const Model::DescribeReservedInstancesListingsRequest& request) const;

        /**
         * <p>Describes your account's Reserved Instance listings in the Reserved Instance
         * Marketplace.</p> <p>The Reserved Instance Marketplace matches sellers who want
         * to resell Reserved Instance capacity that they no longer need with buyers who
         * want to purchase additional capacity. Reserved Instances bought and sold through
         * the Reserved Instance Marketplace work like any other Reserved Instances.</p>
         * <p>As a seller, you choose to list some or all of your Reserved Instances, and
         * you specify the upfront price to receive for them. Your Reserved Instances are
         * then listed in the Reserved Instance Marketplace and are available for
         * purchase.</p> <p>As a buyer, you specify the configuration of the Reserved
         * Instance to purchase, and the Marketplace matches what you're searching for with
         * what's available. The Marketplace first sells the lowest priced Reserved
         * Instances to you, and continues to sell available Reserved Instance listings to
         * you until your demand is met. You are charged based on the total price of all of
         * the listings that you purchase.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesListings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedInstancesListingsOutcomeCallable DescribeReservedInstancesListingsCallable(const Model::DescribeReservedInstancesListingsRequest& request) const;

        /**
         * <p>Describes your account's Reserved Instance listings in the Reserved Instance
         * Marketplace.</p> <p>The Reserved Instance Marketplace matches sellers who want
         * to resell Reserved Instance capacity that they no longer need with buyers who
         * want to purchase additional capacity. Reserved Instances bought and sold through
         * the Reserved Instance Marketplace work like any other Reserved Instances.</p>
         * <p>As a seller, you choose to list some or all of your Reserved Instances, and
         * you specify the upfront price to receive for them. Your Reserved Instances are
         * then listed in the Reserved Instance Marketplace and are available for
         * purchase.</p> <p>As a buyer, you specify the configuration of the Reserved
         * Instance to purchase, and the Marketplace matches what you're searching for with
         * what's available. The Marketplace first sells the lowest priced Reserved
         * Instances to you, and continues to sell available Reserved Instance listings to
         * you until your demand is met. You are charged based on the total price of all of
         * the listings that you purchase.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesListings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedInstancesListingsAsync(const Model::DescribeReservedInstancesListingsRequest& request, const DescribeReservedInstancesListingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the modifications made to your Reserved Instances. If no parameter
         * is specified, information about all your Reserved Instances modification
         * requests is returned. If a modification ID is specified, only information about
         * the specific modification is returned.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
         * Reserved Instances</a> in the Amazon Elastic Compute Cloud User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesModificationsOutcome DescribeReservedInstancesModifications(const Model::DescribeReservedInstancesModificationsRequest& request) const;

        /**
         * <p>Describes the modifications made to your Reserved Instances. If no parameter
         * is specified, information about all your Reserved Instances modification
         * requests is returned. If a modification ID is specified, only information about
         * the specific modification is returned.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
         * Reserved Instances</a> in the Amazon Elastic Compute Cloud User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesModifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedInstancesModificationsOutcomeCallable DescribeReservedInstancesModificationsCallable(const Model::DescribeReservedInstancesModificationsRequest& request) const;

        /**
         * <p>Describes the modifications made to your Reserved Instances. If no parameter
         * is specified, information about all your Reserved Instances modification
         * requests is returned. If a modification ID is specified, only information about
         * the specific modification is returned.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
         * Reserved Instances</a> in the Amazon Elastic Compute Cloud User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesModifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedInstancesModificationsAsync(const Model::DescribeReservedInstancesModificationsRequest& request, const DescribeReservedInstancesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Reserved Instance offerings that are available for purchase. With
         * Reserved Instances, you purchase the right to launch instances for a period of
         * time. During that time period, you do not receive insufficient capacity errors,
         * and you pay a lower usage rate than the rate charged for On-Demand instances for
         * the actual time used.</p> <p>If you have listed your own Reserved Instances for
         * sale in the Reserved Instance Marketplace, they will be excluded from these
         * results. This is to ensure that you do not purchase your own Reserved
         * Instances.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesOfferingsOutcome DescribeReservedInstancesOfferings(const Model::DescribeReservedInstancesOfferingsRequest& request) const;

        /**
         * <p>Describes Reserved Instance offerings that are available for purchase. With
         * Reserved Instances, you purchase the right to launch instances for a period of
         * time. During that time period, you do not receive insufficient capacity errors,
         * and you pay a lower usage rate than the rate charged for On-Demand instances for
         * the actual time used.</p> <p>If you have listed your own Reserved Instances for
         * sale in the Reserved Instance Marketplace, they will be excluded from these
         * results. This is to ensure that you do not purchase your own Reserved
         * Instances.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesOfferings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservedInstancesOfferingsOutcomeCallable DescribeReservedInstancesOfferingsCallable(const Model::DescribeReservedInstancesOfferingsRequest& request) const;

        /**
         * <p>Describes Reserved Instance offerings that are available for purchase. With
         * Reserved Instances, you purchase the right to launch instances for a period of
         * time. During that time period, you do not receive insufficient capacity errors,
         * and you pay a lower usage rate than the rate charged for On-Demand instances for
         * the actual time used.</p> <p>If you have listed your own Reserved Instances for
         * sale in the Reserved Instance Marketplace, they will be excluded from these
         * results. This is to ensure that you do not purchase your own Reserved
         * Instances.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeReservedInstancesOfferings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservedInstancesOfferingsAsync(const Model::DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your route tables.</p> <p>Each subnet in your VPC
         * must be associated with a route table. If a subnet is not explicitly associated
         * with any route table, it is implicitly associated with the main route table.
         * This command does not return the subnet ID for implicit associations.</p> <p>For
         * more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeRouteTables">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRouteTablesOutcome DescribeRouteTables(const Model::DescribeRouteTablesRequest& request) const;

        /**
         * <p>Describes one or more of your route tables.</p> <p>Each subnet in your VPC
         * must be associated with a route table. If a subnet is not explicitly associated
         * with any route table, it is implicitly associated with the main route table.
         * This command does not return the subnet ID for implicit associations.</p> <p>For
         * more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeRouteTables">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRouteTablesOutcomeCallable DescribeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request) const;

        /**
         * <p>Describes one or more of your route tables.</p> <p>Each subnet in your VPC
         * must be associated with a route table. If a subnet is not explicitly associated
         * with any route table, it is implicitly associated with the main route table.
         * This command does not return the subnet ID for implicit associations.</p> <p>For
         * more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeRouteTables">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Finds available schedules that meet the specified criteria.</p> <p>You can
         * search for an available schedule no more than 3 months in advance. You must meet
         * the minimum required duration of 1,200 hours per year. For example, the minimum
         * daily schedule is 4 hours, the minimum weekly schedule is 24 hours, and the
         * minimum monthly schedule is 100 hours.</p> <p>After you find a schedule that
         * meets your needs, call <a>PurchaseScheduledInstances</a> to purchase Scheduled
         * Instances with that schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstanceAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledInstanceAvailabilityOutcome DescribeScheduledInstanceAvailability(const Model::DescribeScheduledInstanceAvailabilityRequest& request) const;

        /**
         * <p>Finds available schedules that meet the specified criteria.</p> <p>You can
         * search for an available schedule no more than 3 months in advance. You must meet
         * the minimum required duration of 1,200 hours per year. For example, the minimum
         * daily schedule is 4 hours, the minimum weekly schedule is 24 hours, and the
         * minimum monthly schedule is 100 hours.</p> <p>After you find a schedule that
         * meets your needs, call <a>PurchaseScheduledInstances</a> to purchase Scheduled
         * Instances with that schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstanceAvailability">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledInstanceAvailabilityOutcomeCallable DescribeScheduledInstanceAvailabilityCallable(const Model::DescribeScheduledInstanceAvailabilityRequest& request) const;

        /**
         * <p>Finds available schedules that meet the specified criteria.</p> <p>You can
         * search for an available schedule no more than 3 months in advance. You must meet
         * the minimum required duration of 1,200 hours per year. For example, the minimum
         * daily schedule is 4 hours, the minimum weekly schedule is 24 hours, and the
         * minimum monthly schedule is 100 hours.</p> <p>After you find a schedule that
         * meets your needs, call <a>PurchaseScheduledInstances</a> to purchase Scheduled
         * Instances with that schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstanceAvailability">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduledInstanceAvailabilityAsync(const Model::DescribeScheduledInstanceAvailabilityRequest& request, const DescribeScheduledInstanceAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your Scheduled Instances.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledInstancesOutcome DescribeScheduledInstances(const Model::DescribeScheduledInstancesRequest& request) const;

        /**
         * <p>Describes one or more of your Scheduled Instances.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledInstancesOutcomeCallable DescribeScheduledInstancesCallable(const Model::DescribeScheduledInstancesRequest& request) const;

        /**
         * <p>Describes one or more of your Scheduled Instances.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduledInstancesAsync(const Model::DescribeScheduledInstancesRequest& request, const DescribeScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[EC2-VPC only] Describes the VPCs on the other side of a VPC peering
         * connection that are referencing the security groups you've specified in this
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroupReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityGroupReferencesOutcome DescribeSecurityGroupReferences(const Model::DescribeSecurityGroupReferencesRequest& request) const;

        /**
         * <p>[EC2-VPC only] Describes the VPCs on the other side of a VPC peering
         * connection that are referencing the security groups you've specified in this
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroupReferences">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecurityGroupReferencesOutcomeCallable DescribeSecurityGroupReferencesCallable(const Model::DescribeSecurityGroupReferencesRequest& request) const;

        /**
         * <p>[EC2-VPC only] Describes the VPCs on the other side of a VPC peering
         * connection that are referencing the security groups you've specified in this
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroupReferences">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityGroupReferencesAsync(const Model::DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your security groups.</p> <p>A security group is for
         * use with instances either in the EC2-Classic platform or in a specific VPC. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
         * EC2 Security Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>
         * and <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityGroupsOutcome DescribeSecurityGroups(const Model::DescribeSecurityGroupsRequest& request) const;

        /**
         * <p>Describes one or more of your security groups.</p> <p>A security group is for
         * use with instances either in the EC2-Classic platform or in a specific VPC. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
         * EC2 Security Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>
         * and <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecurityGroupsOutcomeCallable DescribeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request) const;

        /**
         * <p>Describes one or more of your security groups.</p> <p>A security group is for
         * use with instances either in the EC2-Classic platform or in a specific VPC. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon
         * EC2 Security Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>
         * and <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security
         * Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSecurityGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified snapshot. You can specify
         * only one attribute at a time.</p> <p>For more information about EBS snapshots,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSSnapshots.html">Amazon
         * EBS Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotAttributeOutcome DescribeSnapshotAttribute(const Model::DescribeSnapshotAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified snapshot. You can specify
         * only one attribute at a time.</p> <p>For more information about EBS snapshots,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSSnapshots.html">Amazon
         * EBS Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshotAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotAttributeOutcomeCallable DescribeSnapshotAttributeCallable(const Model::DescribeSnapshotAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified snapshot. You can specify
         * only one attribute at a time.</p> <p>For more information about EBS snapshots,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSSnapshots.html">Amazon
         * EBS Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshotAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotAttributeAsync(const Model::DescribeSnapshotAttributeRequest& request, const DescribeSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of the EBS snapshots available to you. Available
         * snapshots include public snapshots available for any AWS account to launch,
         * private snapshots that you own, and private snapshots owned by another AWS
         * account but for which you've been given explicit create volume permissions.</p>
         * <p>The create volume permissions fall into the following categories:</p> <ul>
         * <li> <p> <i>public</i>: The owner of the snapshot granted create volume
         * permissions for the snapshot to the <code>all</code> group. All AWS accounts
         * have create volume permissions for these snapshots.</p> </li> <li> <p>
         * <i>explicit</i>: The owner of the snapshot granted create volume permissions to
         * a specific AWS account.</p> </li> <li> <p> <i>implicit</i>: An AWS account has
         * implicit create volume permissions for all snapshots it owns.</p> </li> </ul>
         * <p>The list of snapshots returned can be modified by specifying snapshot IDs,
         * snapshot owners, or AWS accounts with create volume permissions. If no options
         * are specified, Amazon EC2 returns all snapshots for which you have create volume
         * permissions.</p> <p>If you specify one or more snapshot IDs, only snapshots that
         * have the specified IDs are returned. If you specify an invalid snapshot ID, an
         * error is returned. If you specify a snapshot ID for which you do not have
         * access, it is not included in the returned results.</p> <p>If you specify one or
         * more snapshot owners using the <code>OwnerIds</code> option, only snapshots from
         * the specified owners and for which you have access are returned. The results can
         * include the AWS account IDs of the specified owners, <code>amazon</code> for
         * snapshots owned by Amazon, or <code>self</code> for snapshots that you own.</p>
         * <p>If you specify a list of restorable users, only snapshots with create
         * snapshot permissions for those users are returned. You can specify AWS account
         * IDs (if you own the snapshots), <code>self</code> for snapshots for which you
         * own or have explicit permissions, or <code>all</code> for public snapshots.</p>
         * <p>If you are describing a long list of snapshots, you can paginate the output
         * to make the list more manageable. The <code>MaxResults</code> parameter sets the
         * maximum number of results returned in a single page. If the list of results
         * exceeds your <code>MaxResults</code> value, then that number of results is
         * returned along with a <code>NextToken</code> value that can be passed to a
         * subsequent <code>DescribeSnapshots</code> request to retrieve the remaining
         * results.</p> <p>For more information about EBS snapshots, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSSnapshots.html">Amazon
         * EBS Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Describes one or more of the EBS snapshots available to you. Available
         * snapshots include public snapshots available for any AWS account to launch,
         * private snapshots that you own, and private snapshots owned by another AWS
         * account but for which you've been given explicit create volume permissions.</p>
         * <p>The create volume permissions fall into the following categories:</p> <ul>
         * <li> <p> <i>public</i>: The owner of the snapshot granted create volume
         * permissions for the snapshot to the <code>all</code> group. All AWS accounts
         * have create volume permissions for these snapshots.</p> </li> <li> <p>
         * <i>explicit</i>: The owner of the snapshot granted create volume permissions to
         * a specific AWS account.</p> </li> <li> <p> <i>implicit</i>: An AWS account has
         * implicit create volume permissions for all snapshots it owns.</p> </li> </ul>
         * <p>The list of snapshots returned can be modified by specifying snapshot IDs,
         * snapshot owners, or AWS accounts with create volume permissions. If no options
         * are specified, Amazon EC2 returns all snapshots for which you have create volume
         * permissions.</p> <p>If you specify one or more snapshot IDs, only snapshots that
         * have the specified IDs are returned. If you specify an invalid snapshot ID, an
         * error is returned. If you specify a snapshot ID for which you do not have
         * access, it is not included in the returned results.</p> <p>If you specify one or
         * more snapshot owners using the <code>OwnerIds</code> option, only snapshots from
         * the specified owners and for which you have access are returned. The results can
         * include the AWS account IDs of the specified owners, <code>amazon</code> for
         * snapshots owned by Amazon, or <code>self</code> for snapshots that you own.</p>
         * <p>If you specify a list of restorable users, only snapshots with create
         * snapshot permissions for those users are returned. You can specify AWS account
         * IDs (if you own the snapshots), <code>self</code> for snapshots for which you
         * own or have explicit permissions, or <code>all</code> for public snapshots.</p>
         * <p>If you are describing a long list of snapshots, you can paginate the output
         * to make the list more manageable. The <code>MaxResults</code> parameter sets the
         * maximum number of results returned in a single page. If the list of results
         * exceeds your <code>MaxResults</code> value, then that number of results is
         * returned along with a <code>NextToken</code> value that can be passed to a
         * subsequent <code>DescribeSnapshots</code> request to retrieve the remaining
         * results.</p> <p>For more information about EBS snapshots, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSSnapshots.html">Amazon
         * EBS Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Describes one or more of the EBS snapshots available to you. Available
         * snapshots include public snapshots available for any AWS account to launch,
         * private snapshots that you own, and private snapshots owned by another AWS
         * account but for which you've been given explicit create volume permissions.</p>
         * <p>The create volume permissions fall into the following categories:</p> <ul>
         * <li> <p> <i>public</i>: The owner of the snapshot granted create volume
         * permissions for the snapshot to the <code>all</code> group. All AWS accounts
         * have create volume permissions for these snapshots.</p> </li> <li> <p>
         * <i>explicit</i>: The owner of the snapshot granted create volume permissions to
         * a specific AWS account.</p> </li> <li> <p> <i>implicit</i>: An AWS account has
         * implicit create volume permissions for all snapshots it owns.</p> </li> </ul>
         * <p>The list of snapshots returned can be modified by specifying snapshot IDs,
         * snapshot owners, or AWS accounts with create volume permissions. If no options
         * are specified, Amazon EC2 returns all snapshots for which you have create volume
         * permissions.</p> <p>If you specify one or more snapshot IDs, only snapshots that
         * have the specified IDs are returned. If you specify an invalid snapshot ID, an
         * error is returned. If you specify a snapshot ID for which you do not have
         * access, it is not included in the returned results.</p> <p>If you specify one or
         * more snapshot owners using the <code>OwnerIds</code> option, only snapshots from
         * the specified owners and for which you have access are returned. The results can
         * include the AWS account IDs of the specified owners, <code>amazon</code> for
         * snapshots owned by Amazon, or <code>self</code> for snapshots that you own.</p>
         * <p>If you specify a list of restorable users, only snapshots with create
         * snapshot permissions for those users are returned. You can specify AWS account
         * IDs (if you own the snapshots), <code>self</code> for snapshots for which you
         * own or have explicit permissions, or <code>all</code> for public snapshots.</p>
         * <p>If you are describing a long list of snapshots, you can paginate the output
         * to make the list more manageable. The <code>MaxResults</code> parameter sets the
         * maximum number of results returned in a single page. If the list of results
         * exceeds your <code>MaxResults</code> value, then that number of results is
         * returned along with a <code>NextToken</code> value that can be passed to a
         * subsequent <code>DescribeSnapshots</code> request to retrieve the remaining
         * results.</p> <p>For more information about EBS snapshots, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSSnapshots.html">Amazon
         * EBS Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the data feed for Spot instances. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot
         * Instance Data Feed</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotDatafeedSubscriptionOutcome DescribeSpotDatafeedSubscription(const Model::DescribeSpotDatafeedSubscriptionRequest& request) const;

        /**
         * <p>Describes the data feed for Spot instances. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot
         * Instance Data Feed</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotDatafeedSubscriptionOutcomeCallable DescribeSpotDatafeedSubscriptionCallable(const Model::DescribeSpotDatafeedSubscriptionRequest& request) const;

        /**
         * <p>Describes the data feed for Spot instances. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot
         * Instance Data Feed</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotDatafeedSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotDatafeedSubscriptionAsync(const Model::DescribeSpotDatafeedSubscriptionRequest& request, const DescribeSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the running instances for the specified Spot fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotFleetInstancesOutcome DescribeSpotFleetInstances(const Model::DescribeSpotFleetInstancesRequest& request) const;

        /**
         * <p>Describes the running instances for the specified Spot fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotFleetInstancesOutcomeCallable DescribeSpotFleetInstancesCallable(const Model::DescribeSpotFleetInstancesRequest& request) const;

        /**
         * <p>Describes the running instances for the specified Spot fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotFleetInstancesAsync(const Model::DescribeSpotFleetInstancesRequest& request, const DescribeSpotFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the events for the specified Spot fleet request during the
         * specified time.</p> <p>Spot fleet events are delayed by up to 30 seconds before
         * they can be described. This ensures that you can query by the last evaluated
         * time and not miss a recorded event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequestHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotFleetRequestHistoryOutcome DescribeSpotFleetRequestHistory(const Model::DescribeSpotFleetRequestHistoryRequest& request) const;

        /**
         * <p>Describes the events for the specified Spot fleet request during the
         * specified time.</p> <p>Spot fleet events are delayed by up to 30 seconds before
         * they can be described. This ensures that you can query by the last evaluated
         * time and not miss a recorded event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequestHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotFleetRequestHistoryOutcomeCallable DescribeSpotFleetRequestHistoryCallable(const Model::DescribeSpotFleetRequestHistoryRequest& request) const;

        /**
         * <p>Describes the events for the specified Spot fleet request during the
         * specified time.</p> <p>Spot fleet events are delayed by up to 30 seconds before
         * they can be described. This ensures that you can query by the last evaluated
         * time and not miss a recorded event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequestHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotFleetRequestHistoryAsync(const Model::DescribeSpotFleetRequestHistoryRequest& request, const DescribeSpotFleetRequestHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes your Spot fleet requests.</p> <p>Spot fleet requests are deleted 48
         * hours after they are canceled and their instances are terminated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotFleetRequestsOutcome DescribeSpotFleetRequests(const Model::DescribeSpotFleetRequestsRequest& request) const;

        /**
         * <p>Describes your Spot fleet requests.</p> <p>Spot fleet requests are deleted 48
         * hours after they are canceled and their instances are terminated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotFleetRequestsOutcomeCallable DescribeSpotFleetRequestsCallable(const Model::DescribeSpotFleetRequestsRequest& request) const;

        /**
         * <p>Describes your Spot fleet requests.</p> <p>Spot fleet requests are deleted 48
         * hours after they are canceled and their instances are terminated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotFleetRequestsAsync(const Model::DescribeSpotFleetRequestsRequest& request, const DescribeSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Spot instance requests that belong to your account. Spot
         * instances are instances that Amazon EC2 launches when the bid price that you
         * specify exceeds the current Spot price. Amazon EC2 periodically sets the Spot
         * price based on available Spot instance capacity and current Spot instance
         * requests. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot
         * Instance Requests</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>You can use <code>DescribeSpotInstanceRequests</code> to find a running Spot
         * instance by examining the response. If the status of the Spot instance is
         * <code>fulfilled</code>, the instance ID appears in the response and contains the
         * identifier of the instance. Alternatively, you can use <a>DescribeInstances</a>
         * with a filter to look for instances where the instance lifecycle is
         * <code>spot</code>.</p> <p>Spot instance requests are deleted 4 hours after they
         * are canceled and their instances are terminated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotInstanceRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotInstanceRequestsOutcome DescribeSpotInstanceRequests(const Model::DescribeSpotInstanceRequestsRequest& request) const;

        /**
         * <p>Describes the Spot instance requests that belong to your account. Spot
         * instances are instances that Amazon EC2 launches when the bid price that you
         * specify exceeds the current Spot price. Amazon EC2 periodically sets the Spot
         * price based on available Spot instance capacity and current Spot instance
         * requests. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot
         * Instance Requests</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>You can use <code>DescribeSpotInstanceRequests</code> to find a running Spot
         * instance by examining the response. If the status of the Spot instance is
         * <code>fulfilled</code>, the instance ID appears in the response and contains the
         * identifier of the instance. Alternatively, you can use <a>DescribeInstances</a>
         * with a filter to look for instances where the instance lifecycle is
         * <code>spot</code>.</p> <p>Spot instance requests are deleted 4 hours after they
         * are canceled and their instances are terminated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotInstanceRequests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotInstanceRequestsOutcomeCallable DescribeSpotInstanceRequestsCallable(const Model::DescribeSpotInstanceRequestsRequest& request) const;

        /**
         * <p>Describes the Spot instance requests that belong to your account. Spot
         * instances are instances that Amazon EC2 launches when the bid price that you
         * specify exceeds the current Spot price. Amazon EC2 periodically sets the Spot
         * price based on available Spot instance capacity and current Spot instance
         * requests. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot
         * Instance Requests</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>You can use <code>DescribeSpotInstanceRequests</code> to find a running Spot
         * instance by examining the response. If the status of the Spot instance is
         * <code>fulfilled</code>, the instance ID appears in the response and contains the
         * identifier of the instance. Alternatively, you can use <a>DescribeInstances</a>
         * with a filter to look for instances where the instance lifecycle is
         * <code>spot</code>.</p> <p>Spot instance requests are deleted 4 hours after they
         * are canceled and their instances are terminated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotInstanceRequests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotInstanceRequestsAsync(const Model::DescribeSpotInstanceRequestsRequest& request, const DescribeSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Spot price history. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-spot-instances-history.html">Spot
         * Instance Pricing History</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>When you specify a start and end time, this operation returns
         * the prices of the instance types within the time range that you specified and
         * the time when the price changed. The price is valid within the time period that
         * you specified; the response merely indicates the last time that the price
         * changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotPriceHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpotPriceHistoryOutcome DescribeSpotPriceHistory(const Model::DescribeSpotPriceHistoryRequest& request) const;

        /**
         * <p>Describes the Spot price history. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-spot-instances-history.html">Spot
         * Instance Pricing History</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>When you specify a start and end time, this operation returns
         * the prices of the instance types within the time range that you specified and
         * the time when the price changed. The price is valid within the time period that
         * you specified; the response merely indicates the last time that the price
         * changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotPriceHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpotPriceHistoryOutcomeCallable DescribeSpotPriceHistoryCallable(const Model::DescribeSpotPriceHistoryRequest& request) const;

        /**
         * <p>Describes the Spot price history. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-spot-instances-history.html">Spot
         * Instance Pricing History</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>When you specify a start and end time, this operation returns
         * the prices of the instance types within the time range that you specified and
         * the time when the price changed. The price is valid within the time period that
         * you specified; the response merely indicates the last time that the price
         * changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotPriceHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpotPriceHistoryAsync(const Model::DescribeSpotPriceHistoryRequest& request, const DescribeSpotPriceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[EC2-VPC only] Describes the stale security group rules for security groups
         * in a specified VPC. Rules are stale when they reference a deleted security group
         * in a peer VPC, or a security group in a peer VPC for which the VPC peering
         * connection has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeStaleSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStaleSecurityGroupsOutcome DescribeStaleSecurityGroups(const Model::DescribeStaleSecurityGroupsRequest& request) const;

        /**
         * <p>[EC2-VPC only] Describes the stale security group rules for security groups
         * in a specified VPC. Rules are stale when they reference a deleted security group
         * in a peer VPC, or a security group in a peer VPC for which the VPC peering
         * connection has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeStaleSecurityGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStaleSecurityGroupsOutcomeCallable DescribeStaleSecurityGroupsCallable(const Model::DescribeStaleSecurityGroupsRequest& request) const;

        /**
         * <p>[EC2-VPC only] Describes the stale security group rules for security groups
         * in a specified VPC. Rules are stale when they reference a deleted security group
         * in a peer VPC, or a security group in a peer VPC for which the VPC peering
         * connection has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeStaleSecurityGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStaleSecurityGroupsAsync(const Model::DescribeStaleSecurityGroupsRequest& request, const DescribeStaleSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your subnets.</p> <p>For more information about
         * subnets, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your
         * VPC and Subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubnetsOutcome DescribeSubnets(const Model::DescribeSubnetsRequest& request) const;

        /**
         * <p>Describes one or more of your subnets.</p> <p>For more information about
         * subnets, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your
         * VPC and Subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSubnets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubnetsOutcomeCallable DescribeSubnetsCallable(const Model::DescribeSubnetsRequest& request) const;

        /**
         * <p>Describes one or more of your subnets.</p> <p>For more information about
         * subnets, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your
         * VPC and Subnets</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSubnets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubnetsAsync(const Model::DescribeSubnetsRequest& request, const DescribeSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of the tags for your EC2 resources.</p> <p>For more
         * information about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes one or more of the tags for your EC2 resources.</p> <p>For more
         * information about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes one or more of the tags for your EC2 resources.</p> <p>For more
         * information about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Resources</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified volume. You can specify
         * only one attribute at a time.</p> <p>For more information about EBS volumes, see
         * <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumes.html">Amazon
         * EBS Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumeAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumeAttributeOutcome DescribeVolumeAttribute(const Model::DescribeVolumeAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified volume. You can specify
         * only one attribute at a time.</p> <p>For more information about EBS volumes, see
         * <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumes.html">Amazon
         * EBS Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumeAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVolumeAttributeOutcomeCallable DescribeVolumeAttributeCallable(const Model::DescribeVolumeAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified volume. You can specify
         * only one attribute at a time.</p> <p>For more information about EBS volumes, see
         * <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumes.html">Amazon
         * EBS Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumeAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVolumeAttributeAsync(const Model::DescribeVolumeAttributeRequest& request, const DescribeVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the status of the specified volumes. Volume status provides the
         * result of the checks performed on your volumes to determine events that can
         * impair the performance of your volumes. The performance of a volume can be
         * affected if an issue occurs on the volume's underlying host. If the volume's
         * underlying host experiences a power outage or system issue, after the system is
         * restored, there could be data inconsistencies on the volume. Volume events
         * notify you if this occurs. Volume actions notify you if any action needs to be
         * taken in response to the event.</p> <p>The <code>DescribeVolumeStatus</code>
         * operation provides the following information about the specified volumes:</p>
         * <p> <i>Status</i>: Reflects the current status of the volume. The possible
         * values are <code>ok</code>, <code>impaired</code> , <code>warning</code>, or
         * <code>insufficient-data</code>. If all checks pass, the overall status of the
         * volume is <code>ok</code>. If the check fails, the overall status is
         * <code>impaired</code>. If the status is <code>insufficient-data</code>, then the
         * checks may still be taking place on your volume at the time. We recommend that
         * you retry the request. For more information on volume status, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-volume-status.html">Monitoring
         * the Status of Your Volumes</a>.</p> <p> <i>Events</i>: Reflect the cause of a
         * volume status and may require you to take action. For example, if your volume
         * returns an <code>impaired</code> status, then the volume event might be
         * <code>potential-data-inconsistency</code>. This means that your volume has been
         * affected by an issue with the underlying host, has all I/O operations disabled,
         * and may have inconsistent data.</p> <p> <i>Actions</i>: Reflect the actions you
         * may have to take in response to an event. For example, if the status of the
         * volume is <code>impaired</code> and the volume event shows
         * <code>potential-data-inconsistency</code>, then the action shows
         * <code>enable-volume-io</code>. This means that you may want to enable the I/O
         * operations for the volume by calling the <a>EnableVolumeIO</a> action and then
         * check the volume for data consistency.</p> <note> <p>Volume status is based on
         * the volume status checks, and does not reflect the volume state. Therefore,
         * volume status does not indicate volumes in the <code>error</code> state (for
         * example, when a volume is incapable of accepting I/O.)</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumeStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumeStatusOutcome DescribeVolumeStatus(const Model::DescribeVolumeStatusRequest& request) const;

        /**
         * <p>Describes the status of the specified volumes. Volume status provides the
         * result of the checks performed on your volumes to determine events that can
         * impair the performance of your volumes. The performance of a volume can be
         * affected if an issue occurs on the volume's underlying host. If the volume's
         * underlying host experiences a power outage or system issue, after the system is
         * restored, there could be data inconsistencies on the volume. Volume events
         * notify you if this occurs. Volume actions notify you if any action needs to be
         * taken in response to the event.</p> <p>The <code>DescribeVolumeStatus</code>
         * operation provides the following information about the specified volumes:</p>
         * <p> <i>Status</i>: Reflects the current status of the volume. The possible
         * values are <code>ok</code>, <code>impaired</code> , <code>warning</code>, or
         * <code>insufficient-data</code>. If all checks pass, the overall status of the
         * volume is <code>ok</code>. If the check fails, the overall status is
         * <code>impaired</code>. If the status is <code>insufficient-data</code>, then the
         * checks may still be taking place on your volume at the time. We recommend that
         * you retry the request. For more information on volume status, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-volume-status.html">Monitoring
         * the Status of Your Volumes</a>.</p> <p> <i>Events</i>: Reflect the cause of a
         * volume status and may require you to take action. For example, if your volume
         * returns an <code>impaired</code> status, then the volume event might be
         * <code>potential-data-inconsistency</code>. This means that your volume has been
         * affected by an issue with the underlying host, has all I/O operations disabled,
         * and may have inconsistent data.</p> <p> <i>Actions</i>: Reflect the actions you
         * may have to take in response to an event. For example, if the status of the
         * volume is <code>impaired</code> and the volume event shows
         * <code>potential-data-inconsistency</code>, then the action shows
         * <code>enable-volume-io</code>. This means that you may want to enable the I/O
         * operations for the volume by calling the <a>EnableVolumeIO</a> action and then
         * check the volume for data consistency.</p> <note> <p>Volume status is based on
         * the volume status checks, and does not reflect the volume state. Therefore,
         * volume status does not indicate volumes in the <code>error</code> state (for
         * example, when a volume is incapable of accepting I/O.)</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumeStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVolumeStatusOutcomeCallable DescribeVolumeStatusCallable(const Model::DescribeVolumeStatusRequest& request) const;

        /**
         * <p>Describes the status of the specified volumes. Volume status provides the
         * result of the checks performed on your volumes to determine events that can
         * impair the performance of your volumes. The performance of a volume can be
         * affected if an issue occurs on the volume's underlying host. If the volume's
         * underlying host experiences a power outage or system issue, after the system is
         * restored, there could be data inconsistencies on the volume. Volume events
         * notify you if this occurs. Volume actions notify you if any action needs to be
         * taken in response to the event.</p> <p>The <code>DescribeVolumeStatus</code>
         * operation provides the following information about the specified volumes:</p>
         * <p> <i>Status</i>: Reflects the current status of the volume. The possible
         * values are <code>ok</code>, <code>impaired</code> , <code>warning</code>, or
         * <code>insufficient-data</code>. If all checks pass, the overall status of the
         * volume is <code>ok</code>. If the check fails, the overall status is
         * <code>impaired</code>. If the status is <code>insufficient-data</code>, then the
         * checks may still be taking place on your volume at the time. We recommend that
         * you retry the request. For more information on volume status, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-volume-status.html">Monitoring
         * the Status of Your Volumes</a>.</p> <p> <i>Events</i>: Reflect the cause of a
         * volume status and may require you to take action. For example, if your volume
         * returns an <code>impaired</code> status, then the volume event might be
         * <code>potential-data-inconsistency</code>. This means that your volume has been
         * affected by an issue with the underlying host, has all I/O operations disabled,
         * and may have inconsistent data.</p> <p> <i>Actions</i>: Reflect the actions you
         * may have to take in response to an event. For example, if the status of the
         * volume is <code>impaired</code> and the volume event shows
         * <code>potential-data-inconsistency</code>, then the action shows
         * <code>enable-volume-io</code>. This means that you may want to enable the I/O
         * operations for the volume by calling the <a>EnableVolumeIO</a> action and then
         * check the volume for data consistency.</p> <note> <p>Volume status is based on
         * the volume status checks, and does not reflect the volume state. Therefore,
         * volume status does not indicate volumes in the <code>error</code> state (for
         * example, when a volume is incapable of accepting I/O.)</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumeStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVolumeStatusAsync(const Model::DescribeVolumeStatusRequest& request, const DescribeVolumeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified EBS volumes.</p> <p>If you are describing a long list
         * of volumes, you can paginate the output to make the list more manageable. The
         * <code>MaxResults</code> parameter sets the maximum number of results returned in
         * a single page. If the list of results exceeds your <code>MaxResults</code>
         * value, then that number of results is returned along with a
         * <code>NextToken</code> value that can be passed to a subsequent
         * <code>DescribeVolumes</code> request to retrieve the remaining results.</p>
         * <p>For more information about EBS volumes, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumes.html">Amazon
         * EBS Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumesOutcome DescribeVolumes(const Model::DescribeVolumesRequest& request) const;

        /**
         * <p>Describes the specified EBS volumes.</p> <p>If you are describing a long list
         * of volumes, you can paginate the output to make the list more manageable. The
         * <code>MaxResults</code> parameter sets the maximum number of results returned in
         * a single page. If the list of results exceeds your <code>MaxResults</code>
         * value, then that number of results is returned along with a
         * <code>NextToken</code> value that can be passed to a subsequent
         * <code>DescribeVolumes</code> request to retrieve the remaining results.</p>
         * <p>For more information about EBS volumes, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumes.html">Amazon
         * EBS Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVolumesOutcomeCallable DescribeVolumesCallable(const Model::DescribeVolumesRequest& request) const;

        /**
         * <p>Describes the specified EBS volumes.</p> <p>If you are describing a long list
         * of volumes, you can paginate the output to make the list more manageable. The
         * <code>MaxResults</code> parameter sets the maximum number of results returned in
         * a single page. If the list of results exceeds your <code>MaxResults</code>
         * value, then that number of results is returned along with a
         * <code>NextToken</code> value that can be passed to a subsequent
         * <code>DescribeVolumes</code> request to retrieve the remaining results.</p>
         * <p>For more information about EBS volumes, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumes.html">Amazon
         * EBS Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVolumesAsync(const Model::DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reports the current modification status of EBS volumes.</p>
         * <p>Current-generation EBS volumes support modification of attributes including
         * type, size, and (for <code>io1</code> volumes) IOPS provisioning while either
         * attached to or detached from an instance. Following an action from the API or
         * the console to modify a volume, the status of the modification may be
         * <code>modifying</code>, <code>optimizing</code>, <code>completed</code>, or
         * <code>failed</code>. If a volume has never been modified, then certain elements
         * of the returned <code>VolumeModification</code> objects are null. </p> <p> You
         * can also use CloudWatch Events to check the status of a modification to an EBS
         * volume. For information about CloudWatch Events, see the <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/">Amazon
         * CloudWatch Events User Guide</a>. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#monitoring_mods">Monitoring
         * Volume Modifications"</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumesModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumesModificationsOutcome DescribeVolumesModifications(const Model::DescribeVolumesModificationsRequest& request) const;

        /**
         * <p>Reports the current modification status of EBS volumes.</p>
         * <p>Current-generation EBS volumes support modification of attributes including
         * type, size, and (for <code>io1</code> volumes) IOPS provisioning while either
         * attached to or detached from an instance. Following an action from the API or
         * the console to modify a volume, the status of the modification may be
         * <code>modifying</code>, <code>optimizing</code>, <code>completed</code>, or
         * <code>failed</code>. If a volume has never been modified, then certain elements
         * of the returned <code>VolumeModification</code> objects are null. </p> <p> You
         * can also use CloudWatch Events to check the status of a modification to an EBS
         * volume. For information about CloudWatch Events, see the <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/">Amazon
         * CloudWatch Events User Guide</a>. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#monitoring_mods">Monitoring
         * Volume Modifications"</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumesModifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVolumesModificationsOutcomeCallable DescribeVolumesModificationsCallable(const Model::DescribeVolumesModificationsRequest& request) const;

        /**
         * <p>Reports the current modification status of EBS volumes.</p>
         * <p>Current-generation EBS volumes support modification of attributes including
         * type, size, and (for <code>io1</code> volumes) IOPS provisioning while either
         * attached to or detached from an instance. Following an action from the API or
         * the console to modify a volume, the status of the modification may be
         * <code>modifying</code>, <code>optimizing</code>, <code>completed</code>, or
         * <code>failed</code>. If a volume has never been modified, then certain elements
         * of the returned <code>VolumeModification</code> objects are null. </p> <p> You
         * can also use CloudWatch Events to check the status of a modification to an EBS
         * volume. For information about CloudWatch Events, see the <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/">Amazon
         * CloudWatch Events User Guide</a>. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#monitoring_mods">Monitoring
         * Volume Modifications"</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVolumesModifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVolumesModificationsAsync(const Model::DescribeVolumesModificationsRequest& request, const DescribeVolumesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified attribute of the specified VPC. You can specify only
         * one attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcAttributeOutcome DescribeVpcAttribute(const Model::DescribeVpcAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified VPC. You can specify only
         * one attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcAttributeOutcomeCallable DescribeVpcAttributeCallable(const Model::DescribeVpcAttributeRequest& request) const;

        /**
         * <p>Describes the specified attribute of the specified VPC. You can specify only
         * one attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcAttributeAsync(const Model::DescribeVpcAttributeRequest& request, const DescribeVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the ClassicLink status of one or more VPCs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcClassicLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcClassicLinkOutcome DescribeVpcClassicLink(const Model::DescribeVpcClassicLinkRequest& request) const;

        /**
         * <p>Describes the ClassicLink status of one or more VPCs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcClassicLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcClassicLinkOutcomeCallable DescribeVpcClassicLinkCallable(const Model::DescribeVpcClassicLinkRequest& request) const;

        /**
         * <p>Describes the ClassicLink status of one or more VPCs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcClassicLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcClassicLinkAsync(const Model::DescribeVpcClassicLinkRequest& request, const DescribeVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the ClassicLink DNS support status of one or more VPCs. If enabled,
         * the DNS hostname of a linked EC2-Classic instance resolves to its private IP
         * address when addressed from an instance in the VPC to which it's linked.
         * Similarly, the DNS hostname of an instance in a VPC resolves to its private IP
         * address when addressed from a linked EC2-Classic instance. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcClassicLinkDnsSupportOutcome DescribeVpcClassicLinkDnsSupport(const Model::DescribeVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * <p>Describes the ClassicLink DNS support status of one or more VPCs. If enabled,
         * the DNS hostname of a linked EC2-Classic instance resolves to its private IP
         * address when addressed from an instance in the VPC to which it's linked.
         * Similarly, the DNS hostname of an instance in a VPC resolves to its private IP
         * address when addressed from a linked EC2-Classic instance. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcClassicLinkDnsSupportOutcomeCallable DescribeVpcClassicLinkDnsSupportCallable(const Model::DescribeVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * <p>Describes the ClassicLink DNS support status of one or more VPCs. If enabled,
         * the DNS hostname of a linked EC2-Classic instance resolves to its private IP
         * address when addressed from an instance in the VPC to which it's linked.
         * Similarly, the DNS hostname of an instance in a VPC resolves to its private IP
         * address when addressed from a linked EC2-Classic instance. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcClassicLinkDnsSupportAsync(const Model::DescribeVpcClassicLinkDnsSupportRequest& request, const DescribeVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes all supported AWS services that can be specified when creating a
         * VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServices">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointServicesOutcome DescribeVpcEndpointServices(const Model::DescribeVpcEndpointServicesRequest& request) const;

        /**
         * <p>Describes all supported AWS services that can be specified when creating a
         * VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcEndpointServicesOutcomeCallable DescribeVpcEndpointServicesCallable(const Model::DescribeVpcEndpointServicesRequest& request) const;

        /**
         * <p>Describes all supported AWS services that can be specified when creating a
         * VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcEndpointServicesAsync(const Model::DescribeVpcEndpointServicesRequest& request, const DescribeVpcEndpointServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your VPC endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointsOutcome DescribeVpcEndpoints(const Model::DescribeVpcEndpointsRequest& request) const;

        /**
         * <p>Describes one or more of your VPC endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcEndpointsOutcomeCallable DescribeVpcEndpointsCallable(const Model::DescribeVpcEndpointsRequest& request) const;

        /**
         * <p>Describes one or more of your VPC endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcEndpointsAsync(const Model::DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your VPC peering connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcPeeringConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcPeeringConnectionsOutcome DescribeVpcPeeringConnections(const Model::DescribeVpcPeeringConnectionsRequest& request) const;

        /**
         * <p>Describes one or more of your VPC peering connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcPeeringConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcPeeringConnectionsOutcomeCallable DescribeVpcPeeringConnectionsCallable(const Model::DescribeVpcPeeringConnectionsRequest& request) const;

        /**
         * <p>Describes one or more of your VPC peering connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcPeeringConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcPeeringConnectionsAsync(const Model::DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your VPCs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcsOutcome DescribeVpcs(const Model::DescribeVpcsRequest& request) const;

        /**
         * <p>Describes one or more of your VPCs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcsOutcomeCallable DescribeVpcsCallable(const Model::DescribeVpcsRequest& request) const;

        /**
         * <p>Describes one or more of your VPCs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your VPN connections.</p> <p>For more information
         * about VPN connections, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpnConnectionsOutcome DescribeVpnConnections(const Model::DescribeVpnConnectionsRequest& request) const;

        /**
         * <p>Describes one or more of your VPN connections.</p> <p>For more information
         * about VPN connections, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpnConnectionsOutcomeCallable DescribeVpnConnectionsCallable(const Model::DescribeVpnConnectionsRequest& request) const;

        /**
         * <p>Describes one or more of your VPN connections.</p> <p>For more information
         * about VPN connections, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * a Hardware Virtual Private Gateway to Your VPC</a> in the <i>Amazon Virtual
         * Private Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpnConnectionsAsync(const Model::DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your virtual private gateways.</p> <p>For more
         * information about virtual private gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * an IPsec Hardware VPN to Your VPC</a> in the <i>Amazon Virtual Private Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpnGatewaysOutcome DescribeVpnGateways(const Model::DescribeVpnGatewaysRequest& request) const;

        /**
         * <p>Describes one or more of your virtual private gateways.</p> <p>For more
         * information about virtual private gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * an IPsec Hardware VPN to Your VPC</a> in the <i>Amazon Virtual Private Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpnGatewaysOutcomeCallable DescribeVpnGatewaysCallable(const Model::DescribeVpnGatewaysRequest& request) const;

        /**
         * <p>Describes one or more of your virtual private gateways.</p> <p>For more
         * information about virtual private gateways, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">Adding
         * an IPsec Hardware VPN to Your VPC</a> in the <i>Amazon Virtual Private Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpnGatewaysAsync(const Model::DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unlinks (detaches) a linked EC2-Classic instance from a VPC. After the
         * instance has been unlinked, the VPC security groups are no longer associated
         * with it. An instance is automatically unlinked from a VPC when it's
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachClassicLinkVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachClassicLinkVpcOutcome DetachClassicLinkVpc(const Model::DetachClassicLinkVpcRequest& request) const;

        /**
         * <p>Unlinks (detaches) a linked EC2-Classic instance from a VPC. After the
         * instance has been unlinked, the VPC security groups are no longer associated
         * with it. An instance is automatically unlinked from a VPC when it's
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachClassicLinkVpc">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachClassicLinkVpcOutcomeCallable DetachClassicLinkVpcCallable(const Model::DetachClassicLinkVpcRequest& request) const;

        /**
         * <p>Unlinks (detaches) a linked EC2-Classic instance from a VPC. After the
         * instance has been unlinked, the VPC security groups are no longer associated
         * with it. An instance is automatically unlinked from a VPC when it's
         * stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachClassicLinkVpc">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachClassicLinkVpcAsync(const Model::DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches an Internet gateway from a VPC, disabling connectivity between the
         * Internet and the VPC. The VPC must not contain any running instances with
         * Elastic IP addresses or public IPv4 addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachInternetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachInternetGatewayOutcome DetachInternetGateway(const Model::DetachInternetGatewayRequest& request) const;

        /**
         * <p>Detaches an Internet gateway from a VPC, disabling connectivity between the
         * Internet and the VPC. The VPC must not contain any running instances with
         * Elastic IP addresses or public IPv4 addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachInternetGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachInternetGatewayOutcomeCallable DetachInternetGatewayCallable(const Model::DetachInternetGatewayRequest& request) const;

        /**
         * <p>Detaches an Internet gateway from a VPC, disabling connectivity between the
         * Internet and the VPC. The VPC must not contain any running instances with
         * Elastic IP addresses or public IPv4 addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachInternetGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachInternetGatewayAsync(const Model::DetachInternetGatewayRequest& request, const DetachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a network interface from an instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachNetworkInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachNetworkInterfaceOutcome DetachNetworkInterface(const Model::DetachNetworkInterfaceRequest& request) const;

        /**
         * <p>Detaches a network interface from an instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachNetworkInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachNetworkInterfaceOutcomeCallable DetachNetworkInterfaceCallable(const Model::DetachNetworkInterfaceRequest& request) const;

        /**
         * <p>Detaches a network interface from an instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachNetworkInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachNetworkInterfaceAsync(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches an EBS volume from an instance. Make sure to unmount any file
         * systems on the device within your operating system before detaching the volume.
         * Failure to do so can result in the volume becoming stuck in the
         * <code>busy</code> state while detaching. If this happens, detachment can be
         * delayed indefinitely until you unmount the volume, force detachment, reboot the
         * instance, or all three. If an EBS volume is the root device of an instance, it
         * can't be detached while the instance is running. To detach the root volume, stop
         * the instance first.</p> <p>When a volume with an AWS Marketplace product code is
         * detached from an instance, the product code is no longer associated with the
         * instance.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-detaching-volume.html">Detaching
         * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachVolumeOutcome DetachVolume(const Model::DetachVolumeRequest& request) const;

        /**
         * <p>Detaches an EBS volume from an instance. Make sure to unmount any file
         * systems on the device within your operating system before detaching the volume.
         * Failure to do so can result in the volume becoming stuck in the
         * <code>busy</code> state while detaching. If this happens, detachment can be
         * delayed indefinitely until you unmount the volume, force detachment, reboot the
         * instance, or all three. If an EBS volume is the root device of an instance, it
         * can't be detached while the instance is running. To detach the root volume, stop
         * the instance first.</p> <p>When a volume with an AWS Marketplace product code is
         * detached from an instance, the product code is no longer associated with the
         * instance.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-detaching-volume.html">Detaching
         * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachVolumeOutcomeCallable DetachVolumeCallable(const Model::DetachVolumeRequest& request) const;

        /**
         * <p>Detaches an EBS volume from an instance. Make sure to unmount any file
         * systems on the device within your operating system before detaching the volume.
         * Failure to do so can result in the volume becoming stuck in the
         * <code>busy</code> state while detaching. If this happens, detachment can be
         * delayed indefinitely until you unmount the volume, force detachment, reboot the
         * instance, or all three. If an EBS volume is the root device of an instance, it
         * can't be detached while the instance is running. To detach the root volume, stop
         * the instance first.</p> <p>When a volume with an AWS Marketplace product code is
         * detached from an instance, the product code is no longer associated with the
         * instance.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-detaching-volume.html">Detaching
         * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachVolumeAsync(const Model::DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a virtual private gateway from a VPC. You do this if you're planning
         * to turn off the VPC and not use it anymore. You can confirm a virtual private
         * gateway has been completely detached from a VPC by describing the virtual
         * private gateway (any attachments to the virtual private gateway are also
         * described).</p> <p>You must wait for the attachment's state to switch to
         * <code>detached</code> before you can delete the VPC or attach a different VPC to
         * the virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachVpnGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachVpnGatewayOutcome DetachVpnGateway(const Model::DetachVpnGatewayRequest& request) const;

        /**
         * <p>Detaches a virtual private gateway from a VPC. You do this if you're planning
         * to turn off the VPC and not use it anymore. You can confirm a virtual private
         * gateway has been completely detached from a VPC by describing the virtual
         * private gateway (any attachments to the virtual private gateway are also
         * described).</p> <p>You must wait for the attachment's state to switch to
         * <code>detached</code> before you can delete the VPC or attach a different VPC to
         * the virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachVpnGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachVpnGatewayOutcomeCallable DetachVpnGatewayCallable(const Model::DetachVpnGatewayRequest& request) const;

        /**
         * <p>Detaches a virtual private gateway from a VPC. You do this if you're planning
         * to turn off the VPC and not use it anymore. You can confirm a virtual private
         * gateway has been completely detached from a VPC by describing the virtual
         * private gateway (any attachments to the virtual private gateway are also
         * described).</p> <p>You must wait for the attachment's state to switch to
         * <code>detached</code> before you can delete the VPC or attach a different VPC to
         * the virtual private gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachVpnGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachVpnGatewayAsync(const Model::DetachVpnGatewayRequest& request, const DetachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables a virtual private gateway (VGW) from propagating routes to a
         * specified route table of a VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVgwRoutePropagation">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableVgwRoutePropagationOutcome DisableVgwRoutePropagation(const Model::DisableVgwRoutePropagationRequest& request) const;

        /**
         * <p>Disables a virtual private gateway (VGW) from propagating routes to a
         * specified route table of a VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVgwRoutePropagation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableVgwRoutePropagationOutcomeCallable DisableVgwRoutePropagationCallable(const Model::DisableVgwRoutePropagationRequest& request) const;

        /**
         * <p>Disables a virtual private gateway (VGW) from propagating routes to a
         * specified route table of a VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVgwRoutePropagation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableVgwRoutePropagationAsync(const Model::DisableVgwRoutePropagationRequest& request, const DisableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables ClassicLink for a VPC. You cannot disable ClassicLink for a VPC that
         * has EC2-Classic instances linked to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVpcClassicLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableVpcClassicLinkOutcome DisableVpcClassicLink(const Model::DisableVpcClassicLinkRequest& request) const;

        /**
         * <p>Disables ClassicLink for a VPC. You cannot disable ClassicLink for a VPC that
         * has EC2-Classic instances linked to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVpcClassicLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableVpcClassicLinkOutcomeCallable DisableVpcClassicLinkCallable(const Model::DisableVpcClassicLinkRequest& request) const;

        /**
         * <p>Disables ClassicLink for a VPC. You cannot disable ClassicLink for a VPC that
         * has EC2-Classic instances linked to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVpcClassicLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableVpcClassicLinkAsync(const Model::DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables ClassicLink DNS support for a VPC. If disabled, DNS hostnames
         * resolve to public IP addresses when addressed between a linked EC2-Classic
         * instance and instances in the VPC to which it's linked. For more information
         * about ClassicLink, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableVpcClassicLinkDnsSupportOutcome DisableVpcClassicLinkDnsSupport(const Model::DisableVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * <p>Disables ClassicLink DNS support for a VPC. If disabled, DNS hostnames
         * resolve to public IP addresses when addressed between a linked EC2-Classic
         * instance and instances in the VPC to which it's linked. For more information
         * about ClassicLink, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableVpcClassicLinkDnsSupportOutcomeCallable DisableVpcClassicLinkDnsSupportCallable(const Model::DisableVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * <p>Disables ClassicLink DNS support for a VPC. If disabled, DNS hostnames
         * resolve to public IP addresses when addressed between a linked EC2-Classic
         * instance and instances in the VPC to which it's linked. For more information
         * about ClassicLink, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableVpcClassicLinkDnsSupportAsync(const Model::DisableVpcClassicLinkDnsSupportRequest& request, const DisableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an Elastic IP address from the instance or network interface
         * it's associated with.</p> <p>An Elastic IP address is for use in either the
         * EC2-Classic platform or in a VPC. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>This is an idempotent operation. If you perform the operation more than once,
         * Amazon EC2 doesn't return an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAddressOutcome DisassociateAddress(const Model::DisassociateAddressRequest& request) const;

        /**
         * <p>Disassociates an Elastic IP address from the instance or network interface
         * it's associated with.</p> <p>An Elastic IP address is for use in either the
         * EC2-Classic platform or in a VPC. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>This is an idempotent operation. If you perform the operation more than once,
         * Amazon EC2 doesn't return an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAddressOutcomeCallable DisassociateAddressCallable(const Model::DisassociateAddressRequest& request) const;

        /**
         * <p>Disassociates an Elastic IP address from the instance or network interface
         * it's associated with.</p> <p>An Elastic IP address is for use in either the
         * EC2-Classic platform or in a VPC. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP Addresses</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <p>This is an idempotent operation. If you perform the operation more than once,
         * Amazon EC2 doesn't return an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAddressAsync(const Model::DisassociateAddressRequest& request, const DisassociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an IAM instance profile from a running or stopped instance.</p>
         * <p>Use <a>DescribeIamInstanceProfileAssociations</a> to get the association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateIamInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateIamInstanceProfileOutcome DisassociateIamInstanceProfile(const Model::DisassociateIamInstanceProfileRequest& request) const;

        /**
         * <p>Disassociates an IAM instance profile from a running or stopped instance.</p>
         * <p>Use <a>DescribeIamInstanceProfileAssociations</a> to get the association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateIamInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateIamInstanceProfileOutcomeCallable DisassociateIamInstanceProfileCallable(const Model::DisassociateIamInstanceProfileRequest& request) const;

        /**
         * <p>Disassociates an IAM instance profile from a running or stopped instance.</p>
         * <p>Use <a>DescribeIamInstanceProfileAssociations</a> to get the association
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateIamInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateIamInstanceProfileAsync(const Model::DisassociateIamInstanceProfileRequest& request, const DisassociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a subnet from a route table.</p> <p>After you perform this
         * action, the subnet no longer uses the routes in the route table. Instead, it
         * uses the routes in the VPC's main route table. For more information about route
         * tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateRouteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRouteTableOutcome DisassociateRouteTable(const Model::DisassociateRouteTableRequest& request) const;

        /**
         * <p>Disassociates a subnet from a route table.</p> <p>After you perform this
         * action, the subnet no longer uses the routes in the route table. Instead, it
         * uses the routes in the VPC's main route table. For more information about route
         * tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateRouteTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateRouteTableOutcomeCallable DisassociateRouteTableCallable(const Model::DisassociateRouteTableRequest& request) const;

        /**
         * <p>Disassociates a subnet from a route table.</p> <p>After you perform this
         * action, the subnet no longer uses the routes in the route table. Instead, it
         * uses the routes in the VPC's main route table. For more information about route
         * tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateRouteTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateRouteTableAsync(const Model::DisassociateRouteTableRequest& request, const DisassociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a CIDR block from a subnet. Currently, you can disassociate an
         * IPv6 CIDR block only. You must detach or delete all gateways and resources that
         * are associated with the CIDR block before you can disassociate it.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateSubnetCidrBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSubnetCidrBlockOutcome DisassociateSubnetCidrBlock(const Model::DisassociateSubnetCidrBlockRequest& request) const;

        /**
         * <p>Disassociates a CIDR block from a subnet. Currently, you can disassociate an
         * IPv6 CIDR block only. You must detach or delete all gateways and resources that
         * are associated with the CIDR block before you can disassociate it.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateSubnetCidrBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSubnetCidrBlockOutcomeCallable DisassociateSubnetCidrBlockCallable(const Model::DisassociateSubnetCidrBlockRequest& request) const;

        /**
         * <p>Disassociates a CIDR block from a subnet. Currently, you can disassociate an
         * IPv6 CIDR block only. You must detach or delete all gateways and resources that
         * are associated with the CIDR block before you can disassociate it.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateSubnetCidrBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSubnetCidrBlockAsync(const Model::DisassociateSubnetCidrBlockRequest& request, const DisassociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a CIDR block from a VPC. To disassociate the CIDR block, you
         * must specify its association ID. You can get the association ID by using
         * <a>DescribeVpcs</a>. You must detach or delete all gateways and resources that
         * are associated with the CIDR block before you can disassociate it. </p> <p>You
         * cannot disassociate the CIDR block with which you originally created the VPC
         * (the primary CIDR block).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateVpcCidrBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateVpcCidrBlockOutcome DisassociateVpcCidrBlock(const Model::DisassociateVpcCidrBlockRequest& request) const;

        /**
         * <p>Disassociates a CIDR block from a VPC. To disassociate the CIDR block, you
         * must specify its association ID. You can get the association ID by using
         * <a>DescribeVpcs</a>. You must detach or delete all gateways and resources that
         * are associated with the CIDR block before you can disassociate it. </p> <p>You
         * cannot disassociate the CIDR block with which you originally created the VPC
         * (the primary CIDR block).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateVpcCidrBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateVpcCidrBlockOutcomeCallable DisassociateVpcCidrBlockCallable(const Model::DisassociateVpcCidrBlockRequest& request) const;

        /**
         * <p>Disassociates a CIDR block from a VPC. To disassociate the CIDR block, you
         * must specify its association ID. You can get the association ID by using
         * <a>DescribeVpcs</a>. You must detach or delete all gateways and resources that
         * are associated with the CIDR block before you can disassociate it. </p> <p>You
         * cannot disassociate the CIDR block with which you originally created the VPC
         * (the primary CIDR block).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisassociateVpcCidrBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateVpcCidrBlockAsync(const Model::DisassociateVpcCidrBlockRequest& request, const DisassociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables a virtual private gateway (VGW) to propagate routes to the specified
         * route table of a VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVgwRoutePropagation">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableVgwRoutePropagationOutcome EnableVgwRoutePropagation(const Model::EnableVgwRoutePropagationRequest& request) const;

        /**
         * <p>Enables a virtual private gateway (VGW) to propagate routes to the specified
         * route table of a VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVgwRoutePropagation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableVgwRoutePropagationOutcomeCallable EnableVgwRoutePropagationCallable(const Model::EnableVgwRoutePropagationRequest& request) const;

        /**
         * <p>Enables a virtual private gateway (VGW) to propagate routes to the specified
         * route table of a VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVgwRoutePropagation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableVgwRoutePropagationAsync(const Model::EnableVgwRoutePropagationRequest& request, const EnableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables I/O operations for a volume that had I/O operations disabled because
         * the data on the volume was potentially inconsistent.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVolumeIO">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableVolumeIOOutcome EnableVolumeIO(const Model::EnableVolumeIORequest& request) const;

        /**
         * <p>Enables I/O operations for a volume that had I/O operations disabled because
         * the data on the volume was potentially inconsistent.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVolumeIO">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableVolumeIOOutcomeCallable EnableVolumeIOCallable(const Model::EnableVolumeIORequest& request) const;

        /**
         * <p>Enables I/O operations for a volume that had I/O operations disabled because
         * the data on the volume was potentially inconsistent.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVolumeIO">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableVolumeIOAsync(const Model::EnableVolumeIORequest& request, const EnableVolumeIOResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables a VPC for ClassicLink. You can then link EC2-Classic instances to
         * your ClassicLink-enabled VPC to allow communication over private IP addresses.
         * You cannot enable your VPC for ClassicLink if any of your VPC's route tables
         * have existing routes for address ranges within the <code>10.0.0.0/8</code> IP
         * address range, excluding local routes for VPCs in the <code>10.0.0.0/16</code>
         * and <code>10.1.0.0/16</code> IP address ranges. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVpcClassicLink">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableVpcClassicLinkOutcome EnableVpcClassicLink(const Model::EnableVpcClassicLinkRequest& request) const;

        /**
         * <p>Enables a VPC for ClassicLink. You can then link EC2-Classic instances to
         * your ClassicLink-enabled VPC to allow communication over private IP addresses.
         * You cannot enable your VPC for ClassicLink if any of your VPC's route tables
         * have existing routes for address ranges within the <code>10.0.0.0/8</code> IP
         * address range, excluding local routes for VPCs in the <code>10.0.0.0/16</code>
         * and <code>10.1.0.0/16</code> IP address ranges. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVpcClassicLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableVpcClassicLinkOutcomeCallable EnableVpcClassicLinkCallable(const Model::EnableVpcClassicLinkRequest& request) const;

        /**
         * <p>Enables a VPC for ClassicLink. You can then link EC2-Classic instances to
         * your ClassicLink-enabled VPC to allow communication over private IP addresses.
         * You cannot enable your VPC for ClassicLink if any of your VPC's route tables
         * have existing routes for address ranges within the <code>10.0.0.0/8</code> IP
         * address range, excluding local routes for VPCs in the <code>10.0.0.0/16</code>
         * and <code>10.1.0.0/16</code> IP address ranges. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVpcClassicLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableVpcClassicLinkAsync(const Model::EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables a VPC to support DNS hostname resolution for ClassicLink. If enabled,
         * the DNS hostname of a linked EC2-Classic instance resolves to its private IP
         * address when addressed from an instance in the VPC to which it's linked.
         * Similarly, the DNS hostname of an instance in a VPC resolves to its private IP
         * address when addressed from a linked EC2-Classic instance. For more information
         * about ClassicLink, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableVpcClassicLinkDnsSupportOutcome EnableVpcClassicLinkDnsSupport(const Model::EnableVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * <p>Enables a VPC to support DNS hostname resolution for ClassicLink. If enabled,
         * the DNS hostname of a linked EC2-Classic instance resolves to its private IP
         * address when addressed from an instance in the VPC to which it's linked.
         * Similarly, the DNS hostname of an instance in a VPC resolves to its private IP
         * address when addressed from a linked EC2-Classic instance. For more information
         * about ClassicLink, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableVpcClassicLinkDnsSupportOutcomeCallable EnableVpcClassicLinkDnsSupportCallable(const Model::EnableVpcClassicLinkDnsSupportRequest& request) const;

        /**
         * <p>Enables a VPC to support DNS hostname resolution for ClassicLink. If enabled,
         * the DNS hostname of a linked EC2-Classic instance resolves to its private IP
         * address when addressed from an instance in the VPC to which it's linked.
         * Similarly, the DNS hostname of an instance in a VPC resolves to its private IP
         * address when addressed from a linked EC2-Classic instance. For more information
         * about ClassicLink, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
         * in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVpcClassicLinkDnsSupport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableVpcClassicLinkDnsSupportAsync(const Model::EnableVpcClassicLinkDnsSupportRequest& request, const EnableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the console output for the specified instance.</p> <p>Instances do not
         * have a physical monitor through which you can view their console output. They
         * also lack physical controls that allow you to power up, reboot, or shut them
         * down. To allow these actions, we provide them through the Amazon EC2 API and
         * command line interface.</p> <p>Instance console output is buffered and posted
         * shortly after instance boot, reboot, and termination. Amazon EC2 preserves the
         * most recent 64 KB output, which is available for at least one hour after the
         * most recent post.</p> <p>For Linux instances, the instance console output
         * displays the exact console output that would normally be displayed on a physical
         * monitor attached to a computer. This output is buffered because the instance
         * produces it and then posts it to a store where the instance's owner can retrieve
         * it.</p> <p>For Windows instances, the instance console output includes output
         * from the EC2Config service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetConsoleOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConsoleOutputOutcome GetConsoleOutput(const Model::GetConsoleOutputRequest& request) const;

        /**
         * <p>Gets the console output for the specified instance.</p> <p>Instances do not
         * have a physical monitor through which you can view their console output. They
         * also lack physical controls that allow you to power up, reboot, or shut them
         * down. To allow these actions, we provide them through the Amazon EC2 API and
         * command line interface.</p> <p>Instance console output is buffered and posted
         * shortly after instance boot, reboot, and termination. Amazon EC2 preserves the
         * most recent 64 KB output, which is available for at least one hour after the
         * most recent post.</p> <p>For Linux instances, the instance console output
         * displays the exact console output that would normally be displayed on a physical
         * monitor attached to a computer. This output is buffered because the instance
         * produces it and then posts it to a store where the instance's owner can retrieve
         * it.</p> <p>For Windows instances, the instance console output includes output
         * from the EC2Config service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetConsoleOutput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConsoleOutputOutcomeCallable GetConsoleOutputCallable(const Model::GetConsoleOutputRequest& request) const;

        /**
         * <p>Gets the console output for the specified instance.</p> <p>Instances do not
         * have a physical monitor through which you can view their console output. They
         * also lack physical controls that allow you to power up, reboot, or shut them
         * down. To allow these actions, we provide them through the Amazon EC2 API and
         * command line interface.</p> <p>Instance console output is buffered and posted
         * shortly after instance boot, reboot, and termination. Amazon EC2 preserves the
         * most recent 64 KB output, which is available for at least one hour after the
         * most recent post.</p> <p>For Linux instances, the instance console output
         * displays the exact console output that would normally be displayed on a physical
         * monitor attached to a computer. This output is buffered because the instance
         * produces it and then posts it to a store where the instance's owner can retrieve
         * it.</p> <p>For Windows instances, the instance console output includes output
         * from the EC2Config service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetConsoleOutput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConsoleOutputAsync(const Model::GetConsoleOutputRequest& request, const GetConsoleOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a JPG-format screenshot of a running instance to help with
         * troubleshooting.</p> <p>The returned content is Base64-encoded.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetConsoleScreenshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConsoleScreenshotOutcome GetConsoleScreenshot(const Model::GetConsoleScreenshotRequest& request) const;

        /**
         * <p>Retrieve a JPG-format screenshot of a running instance to help with
         * troubleshooting.</p> <p>The returned content is Base64-encoded.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetConsoleScreenshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConsoleScreenshotOutcomeCallable GetConsoleScreenshotCallable(const Model::GetConsoleScreenshotRequest& request) const;

        /**
         * <p>Retrieve a JPG-format screenshot of a running instance to help with
         * troubleshooting.</p> <p>The returned content is Base64-encoded.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetConsoleScreenshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConsoleScreenshotAsync(const Model::GetConsoleScreenshotRequest& request, const GetConsoleScreenshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Preview a reservation purchase with configurations that match those of your
         * Dedicated Host. You must have active Dedicated Hosts in your account before you
         * purchase a reservation.</p> <p>This is a preview of the
         * <a>PurchaseHostReservation</a> action and does not result in the offering being
         * purchased.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetHostReservationPurchasePreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHostReservationPurchasePreviewOutcome GetHostReservationPurchasePreview(const Model::GetHostReservationPurchasePreviewRequest& request) const;

        /**
         * <p>Preview a reservation purchase with configurations that match those of your
         * Dedicated Host. You must have active Dedicated Hosts in your account before you
         * purchase a reservation.</p> <p>This is a preview of the
         * <a>PurchaseHostReservation</a> action and does not result in the offering being
         * purchased.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetHostReservationPurchasePreview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostReservationPurchasePreviewOutcomeCallable GetHostReservationPurchasePreviewCallable(const Model::GetHostReservationPurchasePreviewRequest& request) const;

        /**
         * <p>Preview a reservation purchase with configurations that match those of your
         * Dedicated Host. You must have active Dedicated Hosts in your account before you
         * purchase a reservation.</p> <p>This is a preview of the
         * <a>PurchaseHostReservation</a> action and does not result in the offering being
         * purchased.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetHostReservationPurchasePreview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostReservationPurchasePreviewAsync(const Model::GetHostReservationPurchasePreviewRequest& request, const GetHostReservationPurchasePreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the encrypted administrator password for a running Windows
         * instance.</p> <p>The Windows password is generated at boot by the
         * <code>EC2Config</code> service or <code>EC2Launch</code> scripts (Windows Server
         * 2016 and later). This usually only happens the first time an instance is
         * launched. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/UsingConfig_WinAMI.html">EC2Config</a>
         * and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2launch.html">EC2Launch</a>
         * in the Amazon Elastic Compute Cloud User Guide.</p> <p>For the
         * <code>EC2Config</code> service, the password is not generated for rebundled AMIs
         * unless <code>Ec2SetPassword</code> is enabled before bundling.</p> <p>The
         * password is encrypted using the key pair that you specified when you launched
         * the instance. You must provide the corresponding key pair file.</p> <p>When you
         * launch an instance, password generation and encryption may take a few minutes.
         * If you try to retrieve the password before it's available, the output returns an
         * empty string. We recommend that you wait up to 15 minutes after launching an
         * instance before trying to retrieve the generated password.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetPasswordData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPasswordDataOutcome GetPasswordData(const Model::GetPasswordDataRequest& request) const;

        /**
         * <p>Retrieves the encrypted administrator password for a running Windows
         * instance.</p> <p>The Windows password is generated at boot by the
         * <code>EC2Config</code> service or <code>EC2Launch</code> scripts (Windows Server
         * 2016 and later). This usually only happens the first time an instance is
         * launched. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/UsingConfig_WinAMI.html">EC2Config</a>
         * and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2launch.html">EC2Launch</a>
         * in the Amazon Elastic Compute Cloud User Guide.</p> <p>For the
         * <code>EC2Config</code> service, the password is not generated for rebundled AMIs
         * unless <code>Ec2SetPassword</code> is enabled before bundling.</p> <p>The
         * password is encrypted using the key pair that you specified when you launched
         * the instance. You must provide the corresponding key pair file.</p> <p>When you
         * launch an instance, password generation and encryption may take a few minutes.
         * If you try to retrieve the password before it's available, the output returns an
         * empty string. We recommend that you wait up to 15 minutes after launching an
         * instance before trying to retrieve the generated password.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetPasswordData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPasswordDataOutcomeCallable GetPasswordDataCallable(const Model::GetPasswordDataRequest& request) const;

        /**
         * <p>Retrieves the encrypted administrator password for a running Windows
         * instance.</p> <p>The Windows password is generated at boot by the
         * <code>EC2Config</code> service or <code>EC2Launch</code> scripts (Windows Server
         * 2016 and later). This usually only happens the first time an instance is
         * launched. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/UsingConfig_WinAMI.html">EC2Config</a>
         * and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2launch.html">EC2Launch</a>
         * in the Amazon Elastic Compute Cloud User Guide.</p> <p>For the
         * <code>EC2Config</code> service, the password is not generated for rebundled AMIs
         * unless <code>Ec2SetPassword</code> is enabled before bundling.</p> <p>The
         * password is encrypted using the key pair that you specified when you launched
         * the instance. You must provide the corresponding key pair file.</p> <p>When you
         * launch an instance, password generation and encryption may take a few minutes.
         * If you try to retrieve the password before it's available, the output returns an
         * empty string. We recommend that you wait up to 15 minutes after launching an
         * instance before trying to retrieve the generated password.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetPasswordData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPasswordDataAsync(const Model::GetPasswordDataRequest& request, const GetPasswordDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about the values and term of your specified Convertible
         * Reserved Instances. When a target configuration is specified, it returns
         * information about whether the exchange is valid and can be
         * performed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetReservedInstancesExchangeQuote">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReservedInstancesExchangeQuoteOutcome GetReservedInstancesExchangeQuote(const Model::GetReservedInstancesExchangeQuoteRequest& request) const;

        /**
         * <p>Returns details about the values and term of your specified Convertible
         * Reserved Instances. When a target configuration is specified, it returns
         * information about whether the exchange is valid and can be
         * performed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetReservedInstancesExchangeQuote">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReservedInstancesExchangeQuoteOutcomeCallable GetReservedInstancesExchangeQuoteCallable(const Model::GetReservedInstancesExchangeQuoteRequest& request) const;

        /**
         * <p>Returns details about the values and term of your specified Convertible
         * Reserved Instances. When a target configuration is specified, it returns
         * information about whether the exchange is valid and can be
         * performed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetReservedInstancesExchangeQuote">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReservedInstancesExchangeQuoteAsync(const Model::GetReservedInstancesExchangeQuoteRequest& request, const GetReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Import single or multi-volume disk images or EBS snapshots into an Amazon
         * Machine Image (AMI). For more information, see <a
         * href="http://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html">Importing
         * a VM as an Image Using VM Import/Export</a> in the <i>VM Import/Export User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportImage">AWS API
         * Reference</a></p>
         */
        virtual Model::ImportImageOutcome ImportImage(const Model::ImportImageRequest& request) const;

        /**
         * <p>Import single or multi-volume disk images or EBS snapshots into an Amazon
         * Machine Image (AMI). For more information, see <a
         * href="http://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html">Importing
         * a VM as an Image Using VM Import/Export</a> in the <i>VM Import/Export User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportImage">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportImageOutcomeCallable ImportImageCallable(const Model::ImportImageRequest& request) const;

        /**
         * <p>Import single or multi-volume disk images or EBS snapshots into an Amazon
         * Machine Image (AMI). For more information, see <a
         * href="http://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html">Importing
         * a VM as an Image Using VM Import/Export</a> in the <i>VM Import/Export User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportImage">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportImageAsync(const Model::ImportImageRequest& request, const ImportImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an import instance task using metadata from the specified disk image.
         * <code>ImportInstance</code> only supports single-volume VMs. To import
         * multi-volume VMs, use <a>ImportImage</a>. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/ec2-cli-vmimport-export.html">Importing
         * a Virtual Machine Using the Amazon EC2 CLI</a>.</p> <p>For information about the
         * import manifest referenced by this API action, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportInstanceOutcome ImportInstance(const Model::ImportInstanceRequest& request) const;

        /**
         * <p>Creates an import instance task using metadata from the specified disk image.
         * <code>ImportInstance</code> only supports single-volume VMs. To import
         * multi-volume VMs, use <a>ImportImage</a>. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/ec2-cli-vmimport-export.html">Importing
         * a Virtual Machine Using the Amazon EC2 CLI</a>.</p> <p>For information about the
         * import manifest referenced by this API action, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportInstanceOutcomeCallable ImportInstanceCallable(const Model::ImportInstanceRequest& request) const;

        /**
         * <p>Creates an import instance task using metadata from the specified disk image.
         * <code>ImportInstance</code> only supports single-volume VMs. To import
         * multi-volume VMs, use <a>ImportImage</a>. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/ec2-cli-vmimport-export.html">Importing
         * a Virtual Machine Using the Amazon EC2 CLI</a>.</p> <p>For information about the
         * import manifest referenced by this API action, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportInstanceAsync(const Model::ImportInstanceRequest& request, const ImportInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports the public key from an RSA key pair that you created with a
         * third-party tool. Compare this with <a>CreateKeyPair</a>, in which AWS creates
         * the key pair and gives the keys to you (AWS keeps a copy of the public key).
         * With ImportKeyPair, you create the key pair and give AWS just the public key.
         * The private key is never transferred between you and AWS.</p> <p>For more
         * information about key pairs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportKeyPairOutcome ImportKeyPair(const Model::ImportKeyPairRequest& request) const;

        /**
         * <p>Imports the public key from an RSA key pair that you created with a
         * third-party tool. Compare this with <a>CreateKeyPair</a>, in which AWS creates
         * the key pair and gives the keys to you (AWS keeps a copy of the public key).
         * With ImportKeyPair, you create the key pair and give AWS just the public key.
         * The private key is never transferred between you and AWS.</p> <p>For more
         * information about key pairs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportKeyPairOutcomeCallable ImportKeyPairCallable(const Model::ImportKeyPairRequest& request) const;

        /**
         * <p>Imports the public key from an RSA key pair that you created with a
         * third-party tool. Compare this with <a>CreateKeyPair</a>, in which AWS creates
         * the key pair and gives the keys to you (AWS keeps a copy of the public key).
         * With ImportKeyPair, you create the key pair and give AWS just the public key.
         * The private key is never transferred between you and AWS.</p> <p>For more
         * information about key pairs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportKeyPairAsync(const Model::ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports a disk into an EBS snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportSnapshotOutcome ImportSnapshot(const Model::ImportSnapshotRequest& request) const;

        /**
         * <p>Imports a disk into an EBS snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportSnapshotOutcomeCallable ImportSnapshotCallable(const Model::ImportSnapshotRequest& request) const;

        /**
         * <p>Imports a disk into an EBS snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportSnapshotAsync(const Model::ImportSnapshotRequest& request, const ImportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an import volume task using metadata from the specified disk
         * image.For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/importing-your-volumes-into-amazon-ebs.html">Importing
         * Disks to Amazon EBS</a>.</p> <p>For information about the import manifest
         * referenced by this API action, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportVolumeOutcome ImportVolume(const Model::ImportVolumeRequest& request) const;

        /**
         * <p>Creates an import volume task using metadata from the specified disk
         * image.For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/importing-your-volumes-into-amazon-ebs.html">Importing
         * Disks to Amazon EBS</a>.</p> <p>For information about the import manifest
         * referenced by this API action, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportVolumeOutcomeCallable ImportVolumeCallable(const Model::ImportVolumeRequest& request) const;

        /**
         * <p>Creates an import volume task using metadata from the specified disk
         * image.For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/importing-your-volumes-into-amazon-ebs.html">Importing
         * Disks to Amazon EBS</a>.</p> <p>For information about the import manifest
         * referenced by this API action, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
         * Import Manifest</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ImportVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportVolumeAsync(const Model::ImportVolumeRequest& request, const ImportVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attribute of the specified Amazon FPGA Image
         * (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyFpgaImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyFpgaImageAttributeOutcome ModifyFpgaImageAttribute(const Model::ModifyFpgaImageAttributeRequest& request) const;

        /**
         * <p>Modifies the specified attribute of the specified Amazon FPGA Image
         * (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyFpgaImageAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyFpgaImageAttributeOutcomeCallable ModifyFpgaImageAttributeCallable(const Model::ModifyFpgaImageAttributeRequest& request) const;

        /**
         * <p>Modifies the specified attribute of the specified Amazon FPGA Image
         * (AFI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyFpgaImageAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyFpgaImageAttributeAsync(const Model::ModifyFpgaImageAttributeRequest& request, const ModifyFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify the auto-placement setting of a Dedicated Host. When auto-placement is
         * enabled, AWS will place instances that you launch with a tenancy of
         * <code>host</code>, but without targeting a specific host ID, onto any available
         * Dedicated Host in your account which has auto-placement enabled. When
         * auto-placement is disabled, you need to provide a host ID if you want the
         * instance to launch onto a specific host. If no host ID is provided, the instance
         * will be launched onto a suitable host which has auto-placement
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyHosts">AWS API
         * Reference</a></p>
         */
        virtual Model::ModifyHostsOutcome ModifyHosts(const Model::ModifyHostsRequest& request) const;

        /**
         * <p>Modify the auto-placement setting of a Dedicated Host. When auto-placement is
         * enabled, AWS will place instances that you launch with a tenancy of
         * <code>host</code>, but without targeting a specific host ID, onto any available
         * Dedicated Host in your account which has auto-placement enabled. When
         * auto-placement is disabled, you need to provide a host ID if you want the
         * instance to launch onto a specific host. If no host ID is provided, the instance
         * will be launched onto a suitable host which has auto-placement
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyHosts">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyHostsOutcomeCallable ModifyHostsCallable(const Model::ModifyHostsRequest& request) const;

        /**
         * <p>Modify the auto-placement setting of a Dedicated Host. When auto-placement is
         * enabled, AWS will place instances that you launch with a tenancy of
         * <code>host</code>, but without targeting a specific host ID, onto any available
         * Dedicated Host in your account which has auto-placement enabled. When
         * auto-placement is disabled, you need to provide a host ID if you want the
         * instance to launch onto a specific host. If no host ID is provided, the instance
         * will be launched onto a suitable host which has auto-placement
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyHosts">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyHostsAsync(const Model::ModifyHostsRequest& request, const ModifyHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the ID format for the specified resource on a per-region basis. You
         * can specify that resources should receive longer IDs (17-character IDs) when
         * they are created. The following resource types support longer IDs:
         * <code>instance</code> | <code>reservation</code> | <code>snapshot</code> |
         * <code>volume</code>.</p> <p>This setting applies to the IAM user who makes the
         * request; it does not apply to the entire AWS account. By default, an IAM user
         * defaults to the same settings as the root user. If you're using this action as
         * the root user, then these settings apply to the entire account, unless an IAM
         * user explicitly overrides these settings for themselves. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>Resources
         * created with longer IDs are visible to all IAM roles and users, regardless of
         * these settings and provided that they have permission to use the relevant
         * <code>Describe</code> command for the resource type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIdFormat">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyIdFormatOutcome ModifyIdFormat(const Model::ModifyIdFormatRequest& request) const;

        /**
         * <p>Modifies the ID format for the specified resource on a per-region basis. You
         * can specify that resources should receive longer IDs (17-character IDs) when
         * they are created. The following resource types support longer IDs:
         * <code>instance</code> | <code>reservation</code> | <code>snapshot</code> |
         * <code>volume</code>.</p> <p>This setting applies to the IAM user who makes the
         * request; it does not apply to the entire AWS account. By default, an IAM user
         * defaults to the same settings as the root user. If you're using this action as
         * the root user, then these settings apply to the entire account, unless an IAM
         * user explicitly overrides these settings for themselves. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>Resources
         * created with longer IDs are visible to all IAM roles and users, regardless of
         * these settings and provided that they have permission to use the relevant
         * <code>Describe</code> command for the resource type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIdFormat">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyIdFormatOutcomeCallable ModifyIdFormatCallable(const Model::ModifyIdFormatRequest& request) const;

        /**
         * <p>Modifies the ID format for the specified resource on a per-region basis. You
         * can specify that resources should receive longer IDs (17-character IDs) when
         * they are created. The following resource types support longer IDs:
         * <code>instance</code> | <code>reservation</code> | <code>snapshot</code> |
         * <code>volume</code>.</p> <p>This setting applies to the IAM user who makes the
         * request; it does not apply to the entire AWS account. By default, an IAM user
         * defaults to the same settings as the root user. If you're using this action as
         * the root user, then these settings apply to the entire account, unless an IAM
         * user explicitly overrides these settings for themselves. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>Resources
         * created with longer IDs are visible to all IAM roles and users, regardless of
         * these settings and provided that they have permission to use the relevant
         * <code>Describe</code> command for the resource type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIdFormat">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyIdFormatAsync(const Model::ModifyIdFormatRequest& request, const ModifyIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the ID format of a resource for a specified IAM user, IAM role, or
         * the root user for an account; or all IAM users, IAM roles, and the root user for
         * an account. You can specify that resources should receive longer IDs
         * (17-character IDs) when they are created. </p> <p>The following resource types
         * support longer IDs: <code>instance</code> | <code>reservation</code> |
         * <code>snapshot</code> | <code>volume</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>This
         * setting applies to the principal specified in the request; it does not apply to
         * the principal that makes the request. </p> <p>Resources created with longer IDs
         * are visible to all IAM roles and users, regardless of these settings and
         * provided that they have permission to use the relevant <code>Describe</code>
         * command for the resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIdentityIdFormat">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyIdentityIdFormatOutcome ModifyIdentityIdFormat(const Model::ModifyIdentityIdFormatRequest& request) const;

        /**
         * <p>Modifies the ID format of a resource for a specified IAM user, IAM role, or
         * the root user for an account; or all IAM users, IAM roles, and the root user for
         * an account. You can specify that resources should receive longer IDs
         * (17-character IDs) when they are created. </p> <p>The following resource types
         * support longer IDs: <code>instance</code> | <code>reservation</code> |
         * <code>snapshot</code> | <code>volume</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>This
         * setting applies to the principal specified in the request; it does not apply to
         * the principal that makes the request. </p> <p>Resources created with longer IDs
         * are visible to all IAM roles and users, regardless of these settings and
         * provided that they have permission to use the relevant <code>Describe</code>
         * command for the resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIdentityIdFormat">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyIdentityIdFormatOutcomeCallable ModifyIdentityIdFormatCallable(const Model::ModifyIdentityIdFormatRequest& request) const;

        /**
         * <p>Modifies the ID format of a resource for a specified IAM user, IAM role, or
         * the root user for an account; or all IAM users, IAM roles, and the root user for
         * an account. You can specify that resources should receive longer IDs
         * (17-character IDs) when they are created. </p> <p>The following resource types
         * support longer IDs: <code>instance</code> | <code>reservation</code> |
         * <code>snapshot</code> | <code>volume</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
         * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p> <p>This
         * setting applies to the principal specified in the request; it does not apply to
         * the principal that makes the request. </p> <p>Resources created with longer IDs
         * are visible to all IAM roles and users, regardless of these settings and
         * provided that they have permission to use the relevant <code>Describe</code>
         * command for the resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyIdentityIdFormat">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyIdentityIdFormatAsync(const Model::ModifyIdentityIdFormatRequest& request, const ModifyIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attribute of the specified AMI. You can specify only
         * one attribute at a time.</p> <note> <p>AWS Marketplace product codes cannot be
         * modified. Images with an AWS Marketplace product code cannot be made public.</p>
         * </note> <note> <p>The SriovNetSupport enhanced networking attribute cannot be
         * changed using this command. Instead, enable SriovNetSupport on an instance and
         * create an AMI from the instance. This will result in an image with
         * SriovNetSupport enabled.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyImageAttributeOutcome ModifyImageAttribute(const Model::ModifyImageAttributeRequest& request) const;

        /**
         * <p>Modifies the specified attribute of the specified AMI. You can specify only
         * one attribute at a time.</p> <note> <p>AWS Marketplace product codes cannot be
         * modified. Images with an AWS Marketplace product code cannot be made public.</p>
         * </note> <note> <p>The SriovNetSupport enhanced networking attribute cannot be
         * changed using this command. Instead, enable SriovNetSupport on an instance and
         * create an AMI from the instance. This will result in an image with
         * SriovNetSupport enabled.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyImageAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyImageAttributeOutcomeCallable ModifyImageAttributeCallable(const Model::ModifyImageAttributeRequest& request) const;

        /**
         * <p>Modifies the specified attribute of the specified AMI. You can specify only
         * one attribute at a time.</p> <note> <p>AWS Marketplace product codes cannot be
         * modified. Images with an AWS Marketplace product code cannot be made public.</p>
         * </note> <note> <p>The SriovNetSupport enhanced networking attribute cannot be
         * changed using this command. Instead, enable SriovNetSupport on an instance and
         * create an AMI from the instance. This will result in an image with
         * SriovNetSupport enabled.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyImageAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyImageAttributeAsync(const Model::ModifyImageAttributeRequest& request, const ModifyImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attribute of the specified instance. You can specify
         * only one attribute at a time.</p> <p>To modify some attributes, the instance
         * must be stopped. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_ChangingAttributesWhileInstanceStopped.html">Modifying
         * Attributes of a Stopped Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstanceAttributeOutcome ModifyInstanceAttribute(const Model::ModifyInstanceAttributeRequest& request) const;

        /**
         * <p>Modifies the specified attribute of the specified instance. You can specify
         * only one attribute at a time.</p> <p>To modify some attributes, the instance
         * must be stopped. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_ChangingAttributesWhileInstanceStopped.html">Modifying
         * Attributes of a Stopped Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstanceAttributeOutcomeCallable ModifyInstanceAttributeCallable(const Model::ModifyInstanceAttributeRequest& request) const;

        /**
         * <p>Modifies the specified attribute of the specified instance. You can specify
         * only one attribute at a time.</p> <p>To modify some attributes, the instance
         * must be stopped. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_ChangingAttributesWhileInstanceStopped.html">Modifying
         * Attributes of a Stopped Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstanceAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstanceAttributeAsync(const Model::ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the instance affinity value for a specific stopped instance and modify
         * the instance tenancy setting.</p> <p>Instance affinity is disabled by default.
         * When instance affinity is <code>host</code> and it is not associated with a
         * specific Dedicated Host, the next time it is launched it will automatically be
         * associated with the host it lands on. This relationship will persist if the
         * instance is stopped/started, or rebooted.</p> <p>You can modify the host ID
         * associated with a stopped instance. If a stopped instance has a new host ID
         * association, the instance will target that host when restarted.</p> <p>You can
         * modify the tenancy of a stopped instance with a tenancy of <code>host</code> or
         * <code>dedicated</code>.</p> <p>Affinity, hostID, and tenancy are not required
         * parameters, but at least one of them must be specified in the request. Affinity
         * and tenancy can be modified in the same request, but tenancy can only be
         * modified on instances that are stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstancePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyInstancePlacementOutcome ModifyInstancePlacement(const Model::ModifyInstancePlacementRequest& request) const;

        /**
         * <p>Set the instance affinity value for a specific stopped instance and modify
         * the instance tenancy setting.</p> <p>Instance affinity is disabled by default.
         * When instance affinity is <code>host</code> and it is not associated with a
         * specific Dedicated Host, the next time it is launched it will automatically be
         * associated with the host it lands on. This relationship will persist if the
         * instance is stopped/started, or rebooted.</p> <p>You can modify the host ID
         * associated with a stopped instance. If a stopped instance has a new host ID
         * association, the instance will target that host when restarted.</p> <p>You can
         * modify the tenancy of a stopped instance with a tenancy of <code>host</code> or
         * <code>dedicated</code>.</p> <p>Affinity, hostID, and tenancy are not required
         * parameters, but at least one of them must be specified in the request. Affinity
         * and tenancy can be modified in the same request, but tenancy can only be
         * modified on instances that are stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstancePlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyInstancePlacementOutcomeCallable ModifyInstancePlacementCallable(const Model::ModifyInstancePlacementRequest& request) const;

        /**
         * <p>Set the instance affinity value for a specific stopped instance and modify
         * the instance tenancy setting.</p> <p>Instance affinity is disabled by default.
         * When instance affinity is <code>host</code> and it is not associated with a
         * specific Dedicated Host, the next time it is launched it will automatically be
         * associated with the host it lands on. This relationship will persist if the
         * instance is stopped/started, or rebooted.</p> <p>You can modify the host ID
         * associated with a stopped instance. If a stopped instance has a new host ID
         * association, the instance will target that host when restarted.</p> <p>You can
         * modify the tenancy of a stopped instance with a tenancy of <code>host</code> or
         * <code>dedicated</code>.</p> <p>Affinity, hostID, and tenancy are not required
         * parameters, but at least one of them must be specified in the request. Affinity
         * and tenancy can be modified in the same request, but tenancy can only be
         * modified on instances that are stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyInstancePlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyInstancePlacementAsync(const Model::ModifyInstancePlacementRequest& request, const ModifyInstancePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified network interface attribute. You can specify only one
         * attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyNetworkInterfaceAttributeOutcome ModifyNetworkInterfaceAttribute(const Model::ModifyNetworkInterfaceAttributeRequest& request) const;

        /**
         * <p>Modifies the specified network interface attribute. You can specify only one
         * attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyNetworkInterfaceAttributeOutcomeCallable ModifyNetworkInterfaceAttributeCallable(const Model::ModifyNetworkInterfaceAttributeRequest& request) const;

        /**
         * <p>Modifies the specified network interface attribute. You can specify only one
         * attribute at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyNetworkInterfaceAttributeAsync(const Model::ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the Availability Zone, instance count, instance type, or network
         * platform (EC2-Classic or EC2-VPC) of your Standard Reserved Instances. The
         * Reserved Instances to be modified must be identical, except for Availability
         * Zone, network platform, and instance type.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
         * Reserved Instances</a> in the Amazon Elastic Compute Cloud User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyReservedInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyReservedInstancesOutcome ModifyReservedInstances(const Model::ModifyReservedInstancesRequest& request) const;

        /**
         * <p>Modifies the Availability Zone, instance count, instance type, or network
         * platform (EC2-Classic or EC2-VPC) of your Standard Reserved Instances. The
         * Reserved Instances to be modified must be identical, except for Availability
         * Zone, network platform, and instance type.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
         * Reserved Instances</a> in the Amazon Elastic Compute Cloud User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyReservedInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyReservedInstancesOutcomeCallable ModifyReservedInstancesCallable(const Model::ModifyReservedInstancesRequest& request) const;

        /**
         * <p>Modifies the Availability Zone, instance count, instance type, or network
         * platform (EC2-Classic or EC2-VPC) of your Standard Reserved Instances. The
         * Reserved Instances to be modified must be identical, except for Availability
         * Zone, network platform, and instance type.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
         * Reserved Instances</a> in the Amazon Elastic Compute Cloud User
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyReservedInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyReservedInstancesAsync(const Model::ModifyReservedInstancesRequest& request, const ModifyReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or removes permission settings for the specified snapshot. You may add
         * or remove specified AWS account IDs from a snapshot's list of create volume
         * permissions, but you cannot do both in a single API call. If you need to both
         * add and remove account IDs for a snapshot, you must use multiple API calls.</p>
         * <note> <p>Encrypted snapshots and snapshots with AWS Marketplace product codes
         * cannot be made public. Snapshots encrypted with your default CMK cannot be
         * shared with other accounts.</p> </note> <p>For more information on modifying
         * snapshot permissions, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modifying-snapshot-permissions.html">Sharing
         * Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySnapshotAttributeOutcome ModifySnapshotAttribute(const Model::ModifySnapshotAttributeRequest& request) const;

        /**
         * <p>Adds or removes permission settings for the specified snapshot. You may add
         * or remove specified AWS account IDs from a snapshot's list of create volume
         * permissions, but you cannot do both in a single API call. If you need to both
         * add and remove account IDs for a snapshot, you must use multiple API calls.</p>
         * <note> <p>Encrypted snapshots and snapshots with AWS Marketplace product codes
         * cannot be made public. Snapshots encrypted with your default CMK cannot be
         * shared with other accounts.</p> </note> <p>For more information on modifying
         * snapshot permissions, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modifying-snapshot-permissions.html">Sharing
         * Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySnapshotAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySnapshotAttributeOutcomeCallable ModifySnapshotAttributeCallable(const Model::ModifySnapshotAttributeRequest& request) const;

        /**
         * <p>Adds or removes permission settings for the specified snapshot. You may add
         * or remove specified AWS account IDs from a snapshot's list of create volume
         * permissions, but you cannot do both in a single API call. If you need to both
         * add and remove account IDs for a snapshot, you must use multiple API calls.</p>
         * <note> <p>Encrypted snapshots and snapshots with AWS Marketplace product codes
         * cannot be made public. Snapshots encrypted with your default CMK cannot be
         * shared with other accounts.</p> </note> <p>For more information on modifying
         * snapshot permissions, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modifying-snapshot-permissions.html">Sharing
         * Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySnapshotAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySnapshotAttributeAsync(const Model::ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified Spot fleet request.</p> <p>While the Spot fleet
         * request is being modified, it is in the <code>modifying</code> state.</p> <p>To
         * scale up your Spot fleet, increase its target capacity. The Spot fleet launches
         * the additional Spot instances according to the allocation strategy for the Spot
         * fleet request. If the allocation strategy is <code>lowestPrice</code>, the Spot
         * fleet launches instances using the Spot pool with the lowest price. If the
         * allocation strategy is <code>diversified</code>, the Spot fleet distributes the
         * instances across the Spot pools.</p> <p>To scale down your Spot fleet, decrease
         * its target capacity. First, the Spot fleet cancels any open bids that exceed the
         * new target capacity. You can request that the Spot fleet terminate Spot
         * instances until the size of the fleet no longer exceeds the new target capacity.
         * If the allocation strategy is <code>lowestPrice</code>, the Spot fleet
         * terminates the instances with the highest price per unit. If the allocation
         * strategy is <code>diversified</code>, the Spot fleet terminates instances across
         * the Spot pools. Alternatively, you can request that the Spot fleet keep the
         * fleet at its current size, but not replace any Spot instances that are
         * interrupted or that you terminate manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySpotFleetRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySpotFleetRequestOutcome ModifySpotFleetRequest(const Model::ModifySpotFleetRequestRequest& request) const;

        /**
         * <p>Modifies the specified Spot fleet request.</p> <p>While the Spot fleet
         * request is being modified, it is in the <code>modifying</code> state.</p> <p>To
         * scale up your Spot fleet, increase its target capacity. The Spot fleet launches
         * the additional Spot instances according to the allocation strategy for the Spot
         * fleet request. If the allocation strategy is <code>lowestPrice</code>, the Spot
         * fleet launches instances using the Spot pool with the lowest price. If the
         * allocation strategy is <code>diversified</code>, the Spot fleet distributes the
         * instances across the Spot pools.</p> <p>To scale down your Spot fleet, decrease
         * its target capacity. First, the Spot fleet cancels any open bids that exceed the
         * new target capacity. You can request that the Spot fleet terminate Spot
         * instances until the size of the fleet no longer exceeds the new target capacity.
         * If the allocation strategy is <code>lowestPrice</code>, the Spot fleet
         * terminates the instances with the highest price per unit. If the allocation
         * strategy is <code>diversified</code>, the Spot fleet terminates instances across
         * the Spot pools. Alternatively, you can request that the Spot fleet keep the
         * fleet at its current size, but not replace any Spot instances that are
         * interrupted or that you terminate manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySpotFleetRequest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySpotFleetRequestOutcomeCallable ModifySpotFleetRequestCallable(const Model::ModifySpotFleetRequestRequest& request) const;

        /**
         * <p>Modifies the specified Spot fleet request.</p> <p>While the Spot fleet
         * request is being modified, it is in the <code>modifying</code> state.</p> <p>To
         * scale up your Spot fleet, increase its target capacity. The Spot fleet launches
         * the additional Spot instances according to the allocation strategy for the Spot
         * fleet request. If the allocation strategy is <code>lowestPrice</code>, the Spot
         * fleet launches instances using the Spot pool with the lowest price. If the
         * allocation strategy is <code>diversified</code>, the Spot fleet distributes the
         * instances across the Spot pools.</p> <p>To scale down your Spot fleet, decrease
         * its target capacity. First, the Spot fleet cancels any open bids that exceed the
         * new target capacity. You can request that the Spot fleet terminate Spot
         * instances until the size of the fleet no longer exceeds the new target capacity.
         * If the allocation strategy is <code>lowestPrice</code>, the Spot fleet
         * terminates the instances with the highest price per unit. If the allocation
         * strategy is <code>diversified</code>, the Spot fleet terminates instances across
         * the Spot pools. Alternatively, you can request that the Spot fleet keep the
         * fleet at its current size, but not replace any Spot instances that are
         * interrupted or that you terminate manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySpotFleetRequest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySpotFleetRequestAsync(const Model::ModifySpotFleetRequestRequest& request, const ModifySpotFleetRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a subnet attribute. You can only modify one attribute at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySubnetAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySubnetAttributeOutcome ModifySubnetAttribute(const Model::ModifySubnetAttributeRequest& request) const;

        /**
         * <p>Modifies a subnet attribute. You can only modify one attribute at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySubnetAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySubnetAttributeOutcomeCallable ModifySubnetAttributeCallable(const Model::ModifySubnetAttributeRequest& request) const;

        /**
         * <p>Modifies a subnet attribute. You can only modify one attribute at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySubnetAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySubnetAttributeAsync(const Model::ModifySubnetAttributeRequest& request, const ModifySubnetAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can modify several parameters of an existing EBS volume, including volume
         * size, volume type, and IOPS capacity. If your EBS volume is attached to a
         * current-generation EC2 instance type, you may be able to apply these changes
         * without stopping the instance or detaching the volume from it. For more
         * information about modifying an EBS volume running Linux, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Linux</a>. For more information
         * about modifying an EBS volume running Windows, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Windows</a>. </p> <p> When you
         * complete a resize operation on your volume, you need to extend the volume's
         * file-system size to take advantage of the new storage capacity. For information
         * about extending a Linux file system, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#recognize-expanded-volume-linux">Extending
         * a Linux File System</a>. For information about extending a Windows file system,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html#recognize-expanded-volume-windows">Extending
         * a Windows File System</a>. </p> <p> You can use CloudWatch Events to check the
         * status of a modification to an EBS volume. For information about CloudWatch
         * Events, see the <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/">Amazon
         * CloudWatch Events User Guide</a>. You can also track the status of a
         * modification using the <a>DescribeVolumesModifications</a> API. For information
         * about tracking status changes using either method, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#monitoring_mods">Monitoring
         * Volume Modifications</a>. </p> <note> <p>With previous-generation instance
         * types, resizing an EBS volume may require detaching and reattaching the volume
         * or stopping and restarting the instance. For more information about modifying an
         * EBS volume running Linux, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Linux</a>. For more information
         * about modifying an EBS volume running Windows, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Windows</a>.</p> </note> <note>
         * <p>If you reach the maximum volume modification rate per volume limit, you will
         * need to wait at least six hours before applying further modifications to the
         * affected EBS volume.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVolumeOutcome ModifyVolume(const Model::ModifyVolumeRequest& request) const;

        /**
         * <p>You can modify several parameters of an existing EBS volume, including volume
         * size, volume type, and IOPS capacity. If your EBS volume is attached to a
         * current-generation EC2 instance type, you may be able to apply these changes
         * without stopping the instance or detaching the volume from it. For more
         * information about modifying an EBS volume running Linux, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Linux</a>. For more information
         * about modifying an EBS volume running Windows, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Windows</a>. </p> <p> When you
         * complete a resize operation on your volume, you need to extend the volume's
         * file-system size to take advantage of the new storage capacity. For information
         * about extending a Linux file system, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#recognize-expanded-volume-linux">Extending
         * a Linux File System</a>. For information about extending a Windows file system,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html#recognize-expanded-volume-windows">Extending
         * a Windows File System</a>. </p> <p> You can use CloudWatch Events to check the
         * status of a modification to an EBS volume. For information about CloudWatch
         * Events, see the <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/">Amazon
         * CloudWatch Events User Guide</a>. You can also track the status of a
         * modification using the <a>DescribeVolumesModifications</a> API. For information
         * about tracking status changes using either method, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#monitoring_mods">Monitoring
         * Volume Modifications</a>. </p> <note> <p>With previous-generation instance
         * types, resizing an EBS volume may require detaching and reattaching the volume
         * or stopping and restarting the instance. For more information about modifying an
         * EBS volume running Linux, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Linux</a>. For more information
         * about modifying an EBS volume running Windows, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Windows</a>.</p> </note> <note>
         * <p>If you reach the maximum volume modification rate per volume limit, you will
         * need to wait at least six hours before applying further modifications to the
         * affected EBS volume.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVolumeOutcomeCallable ModifyVolumeCallable(const Model::ModifyVolumeRequest& request) const;

        /**
         * <p>You can modify several parameters of an existing EBS volume, including volume
         * size, volume type, and IOPS capacity. If your EBS volume is attached to a
         * current-generation EC2 instance type, you may be able to apply these changes
         * without stopping the instance or detaching the volume from it. For more
         * information about modifying an EBS volume running Linux, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Linux</a>. For more information
         * about modifying an EBS volume running Windows, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Windows</a>. </p> <p> When you
         * complete a resize operation on your volume, you need to extend the volume's
         * file-system size to take advantage of the new storage capacity. For information
         * about extending a Linux file system, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#recognize-expanded-volume-linux">Extending
         * a Linux File System</a>. For information about extending a Windows file system,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html#recognize-expanded-volume-windows">Extending
         * a Windows File System</a>. </p> <p> You can use CloudWatch Events to check the
         * status of a modification to an EBS volume. For information about CloudWatch
         * Events, see the <a
         * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/">Amazon
         * CloudWatch Events User Guide</a>. You can also track the status of a
         * modification using the <a>DescribeVolumesModifications</a> API. For information
         * about tracking status changes using either method, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#monitoring_mods">Monitoring
         * Volume Modifications</a>. </p> <note> <p>With previous-generation instance
         * types, resizing an EBS volume may require detaching and reattaching the volume
         * or stopping and restarting the instance. For more information about modifying an
         * EBS volume running Linux, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Linux</a>. For more information
         * about modifying an EBS volume running Windows, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html">Modifying
         * the Size, IOPS, or Type of an EBS Volume on Windows</a>.</p> </note> <note>
         * <p>If you reach the maximum volume modification rate per volume limit, you will
         * need to wait at least six hours before applying further modifications to the
         * affected EBS volume.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVolumeAsync(const Model::ModifyVolumeRequest& request, const ModifyVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies a volume attribute.</p> <p>By default, all I/O operations for the
         * volume are suspended when the data on the volume is determined to be potentially
         * inconsistent, to prevent undetectable, latent data corruption. The I/O access to
         * the volume can be resumed by first enabling I/O access and then checking the
         * data consistency on your volume.</p> <p>You can change the default behavior to
         * resume I/O operations. We recommend that you change this only for boot volumes
         * or for volumes that are stateless or disposable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVolumeAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVolumeAttributeOutcome ModifyVolumeAttribute(const Model::ModifyVolumeAttributeRequest& request) const;

        /**
         * <p>Modifies a volume attribute.</p> <p>By default, all I/O operations for the
         * volume are suspended when the data on the volume is determined to be potentially
         * inconsistent, to prevent undetectable, latent data corruption. The I/O access to
         * the volume can be resumed by first enabling I/O access and then checking the
         * data consistency on your volume.</p> <p>You can change the default behavior to
         * resume I/O operations. We recommend that you change this only for boot volumes
         * or for volumes that are stateless or disposable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVolumeAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVolumeAttributeOutcomeCallable ModifyVolumeAttributeCallable(const Model::ModifyVolumeAttributeRequest& request) const;

        /**
         * <p>Modifies a volume attribute.</p> <p>By default, all I/O operations for the
         * volume are suspended when the data on the volume is determined to be potentially
         * inconsistent, to prevent undetectable, latent data corruption. The I/O access to
         * the volume can be resumed by first enabling I/O access and then checking the
         * data consistency on your volume.</p> <p>You can change the default behavior to
         * resume I/O operations. We recommend that you change this only for boot volumes
         * or for volumes that are stateless or disposable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVolumeAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVolumeAttributeAsync(const Model::ModifyVolumeAttributeRequest& request, const ModifyVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified attribute of the specified VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcAttributeOutcome ModifyVpcAttribute(const Model::ModifyVpcAttributeRequest& request) const;

        /**
         * <p>Modifies the specified attribute of the specified VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcAttributeOutcomeCallable ModifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request) const;

        /**
         * <p>Modifies the specified attribute of the specified VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies attributes of a specified VPC endpoint. You can modify the policy
         * associated with the endpoint, and you can add and remove route tables associated
         * with the endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcEndpointOutcome ModifyVpcEndpoint(const Model::ModifyVpcEndpointRequest& request) const;

        /**
         * <p>Modifies attributes of a specified VPC endpoint. You can modify the policy
         * associated with the endpoint, and you can add and remove route tables associated
         * with the endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcEndpointOutcomeCallable ModifyVpcEndpointCallable(const Model::ModifyVpcEndpointRequest& request) const;

        /**
         * <p>Modifies attributes of a specified VPC endpoint. You can modify the policy
         * associated with the endpoint, and you can add and remove route tables associated
         * with the endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcEndpointAsync(const Model::ModifyVpcEndpointRequest& request, const ModifyVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the VPC peering connection options on one side of a VPC peering
         * connection. You can do the following:</p> <ul> <li> <p>Enable/disable
         * communication over the peering connection between an EC2-Classic instance that's
         * linked to your VPC (using ClassicLink) and instances in the peer VPC.</p> </li>
         * <li> <p>Enable/disable communication over the peering connection between
         * instances in your VPC and an EC2-Classic instance that's linked to the peer
         * VPC.</p> </li> <li> <p>Enable/disable a local VPC to resolve public DNS
         * hostnames to private IP addresses when queried from instances in the peer
         * VPC.</p> </li> </ul> <p>If the peered VPCs are in different accounts, each owner
         * must initiate a separate request to modify the peering connection options,
         * depending on whether their VPC was the requester or accepter for the VPC peering
         * connection. If the peered VPCs are in the same account, you can modify the
         * requester and accepter options in the same request. To confirm which VPC is the
         * accepter and requester for a VPC peering connection, use the
         * <a>DescribeVpcPeeringConnections</a> command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcPeeringConnectionOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyVpcPeeringConnectionOptionsOutcome ModifyVpcPeeringConnectionOptions(const Model::ModifyVpcPeeringConnectionOptionsRequest& request) const;

        /**
         * <p>Modifies the VPC peering connection options on one side of a VPC peering
         * connection. You can do the following:</p> <ul> <li> <p>Enable/disable
         * communication over the peering connection between an EC2-Classic instance that's
         * linked to your VPC (using ClassicLink) and instances in the peer VPC.</p> </li>
         * <li> <p>Enable/disable communication over the peering connection between
         * instances in your VPC and an EC2-Classic instance that's linked to the peer
         * VPC.</p> </li> <li> <p>Enable/disable a local VPC to resolve public DNS
         * hostnames to private IP addresses when queried from instances in the peer
         * VPC.</p> </li> </ul> <p>If the peered VPCs are in different accounts, each owner
         * must initiate a separate request to modify the peering connection options,
         * depending on whether their VPC was the requester or accepter for the VPC peering
         * connection. If the peered VPCs are in the same account, you can modify the
         * requester and accepter options in the same request. To confirm which VPC is the
         * accepter and requester for a VPC peering connection, use the
         * <a>DescribeVpcPeeringConnections</a> command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcPeeringConnectionOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyVpcPeeringConnectionOptionsOutcomeCallable ModifyVpcPeeringConnectionOptionsCallable(const Model::ModifyVpcPeeringConnectionOptionsRequest& request) const;

        /**
         * <p>Modifies the VPC peering connection options on one side of a VPC peering
         * connection. You can do the following:</p> <ul> <li> <p>Enable/disable
         * communication over the peering connection between an EC2-Classic instance that's
         * linked to your VPC (using ClassicLink) and instances in the peer VPC.</p> </li>
         * <li> <p>Enable/disable communication over the peering connection between
         * instances in your VPC and an EC2-Classic instance that's linked to the peer
         * VPC.</p> </li> <li> <p>Enable/disable a local VPC to resolve public DNS
         * hostnames to private IP addresses when queried from instances in the peer
         * VPC.</p> </li> </ul> <p>If the peered VPCs are in different accounts, each owner
         * must initiate a separate request to modify the peering connection options,
         * depending on whether their VPC was the requester or accepter for the VPC peering
         * connection. If the peered VPCs are in the same account, you can modify the
         * requester and accepter options in the same request. To confirm which VPC is the
         * accepter and requester for a VPC peering connection, use the
         * <a>DescribeVpcPeeringConnections</a> command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVpcPeeringConnectionOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyVpcPeeringConnectionOptionsAsync(const Model::ModifyVpcPeeringConnectionOptionsRequest& request, const ModifyVpcPeeringConnectionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables detailed monitoring for a running instance. Otherwise, basic
         * monitoring is enabled. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch.html">Monitoring
         * Your Instances and Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>To disable detailed monitoring, see .</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MonitorInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::MonitorInstancesOutcome MonitorInstances(const Model::MonitorInstancesRequest& request) const;

        /**
         * <p>Enables detailed monitoring for a running instance. Otherwise, basic
         * monitoring is enabled. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch.html">Monitoring
         * Your Instances and Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>To disable detailed monitoring, see .</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MonitorInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MonitorInstancesOutcomeCallable MonitorInstancesCallable(const Model::MonitorInstancesRequest& request) const;

        /**
         * <p>Enables detailed monitoring for a running instance. Otherwise, basic
         * monitoring is enabled. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch.html">Monitoring
         * Your Instances and Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>To disable detailed monitoring, see .</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MonitorInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MonitorInstancesAsync(const Model::MonitorInstancesRequest& request, const MonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves an Elastic IP address from the EC2-Classic platform to the EC2-VPC
         * platform. The Elastic IP address must be allocated to your account for more than
         * 24 hours, and it must not be associated with an instance. After the Elastic IP
         * address is moved, it is no longer available for use in the EC2-Classic platform,
         * unless you move it back using the <a>RestoreAddressToClassic</a> request. You
         * cannot move an Elastic IP address that was originally allocated for use in the
         * EC2-VPC platform to the EC2-Classic platform. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MoveAddressToVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::MoveAddressToVpcOutcome MoveAddressToVpc(const Model::MoveAddressToVpcRequest& request) const;

        /**
         * <p>Moves an Elastic IP address from the EC2-Classic platform to the EC2-VPC
         * platform. The Elastic IP address must be allocated to your account for more than
         * 24 hours, and it must not be associated with an instance. After the Elastic IP
         * address is moved, it is no longer available for use in the EC2-Classic platform,
         * unless you move it back using the <a>RestoreAddressToClassic</a> request. You
         * cannot move an Elastic IP address that was originally allocated for use in the
         * EC2-VPC platform to the EC2-Classic platform. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MoveAddressToVpc">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MoveAddressToVpcOutcomeCallable MoveAddressToVpcCallable(const Model::MoveAddressToVpcRequest& request) const;

        /**
         * <p>Moves an Elastic IP address from the EC2-Classic platform to the EC2-VPC
         * platform. The Elastic IP address must be allocated to your account for more than
         * 24 hours, and it must not be associated with an instance. After the Elastic IP
         * address is moved, it is no longer available for use in the EC2-Classic platform,
         * unless you move it back using the <a>RestoreAddressToClassic</a> request. You
         * cannot move an Elastic IP address that was originally allocated for use in the
         * EC2-VPC platform to the EC2-Classic platform. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MoveAddressToVpc">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MoveAddressToVpcAsync(const Model::MoveAddressToVpcRequest& request, const MoveAddressToVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Purchase a reservation with configurations that match those of your Dedicated
         * Host. You must have active Dedicated Hosts in your account before you purchase a
         * reservation. This action results in the specified reservation being purchased
         * and charged to your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseHostReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseHostReservationOutcome PurchaseHostReservation(const Model::PurchaseHostReservationRequest& request) const;

        /**
         * <p>Purchase a reservation with configurations that match those of your Dedicated
         * Host. You must have active Dedicated Hosts in your account before you purchase a
         * reservation. This action results in the specified reservation being purchased
         * and charged to your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseHostReservation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseHostReservationOutcomeCallable PurchaseHostReservationCallable(const Model::PurchaseHostReservationRequest& request) const;

        /**
         * <p>Purchase a reservation with configurations that match those of your Dedicated
         * Host. You must have active Dedicated Hosts in your account before you purchase a
         * reservation. This action results in the specified reservation being purchased
         * and charged to your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseHostReservation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseHostReservationAsync(const Model::PurchaseHostReservationRequest& request, const PurchaseHostReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Purchases a Reserved Instance for use with your account. With Reserved
         * Instances, you pay a lower hourly rate compared to On-Demand instance
         * pricing.</p> <p>Use <a>DescribeReservedInstancesOfferings</a> to get a list of
         * Reserved Instance offerings that match your specifications. After you've
         * purchased a Reserved Instance, you can check for your new Reserved Instance with
         * <a>DescribeReservedInstances</a>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-on-demand-reserved-instances.html">Reserved
         * Instances</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseReservedInstancesOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedInstancesOfferingOutcome PurchaseReservedInstancesOffering(const Model::PurchaseReservedInstancesOfferingRequest& request) const;

        /**
         * <p>Purchases a Reserved Instance for use with your account. With Reserved
         * Instances, you pay a lower hourly rate compared to On-Demand instance
         * pricing.</p> <p>Use <a>DescribeReservedInstancesOfferings</a> to get a list of
         * Reserved Instance offerings that match your specifications. After you've
         * purchased a Reserved Instance, you can check for your new Reserved Instance with
         * <a>DescribeReservedInstances</a>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-on-demand-reserved-instances.html">Reserved
         * Instances</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseReservedInstancesOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseReservedInstancesOfferingOutcomeCallable PurchaseReservedInstancesOfferingCallable(const Model::PurchaseReservedInstancesOfferingRequest& request) const;

        /**
         * <p>Purchases a Reserved Instance for use with your account. With Reserved
         * Instances, you pay a lower hourly rate compared to On-Demand instance
         * pricing.</p> <p>Use <a>DescribeReservedInstancesOfferings</a> to get a list of
         * Reserved Instance offerings that match your specifications. After you've
         * purchased a Reserved Instance, you can check for your new Reserved Instance with
         * <a>DescribeReservedInstances</a>.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-on-demand-reserved-instances.html">Reserved
         * Instances</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
         * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseReservedInstancesOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseReservedInstancesOfferingAsync(const Model::PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Purchases one or more Scheduled Instances with the specified schedule.</p>
         * <p>Scheduled Instances enable you to purchase Amazon EC2 compute capacity by the
         * hour for a one-year term. Before you can purchase a Scheduled Instance, you must
         * call <a>DescribeScheduledInstanceAvailability</a> to check for available
         * schedules and obtain a purchase token. After you purchase a Scheduled Instance,
         * you must call <a>RunScheduledInstances</a> during each scheduled time
         * period.</p> <p>After you purchase a Scheduled Instance, you can't cancel,
         * modify, or resell your purchase.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseScheduledInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseScheduledInstancesOutcome PurchaseScheduledInstances(const Model::PurchaseScheduledInstancesRequest& request) const;

        /**
         * <p>Purchases one or more Scheduled Instances with the specified schedule.</p>
         * <p>Scheduled Instances enable you to purchase Amazon EC2 compute capacity by the
         * hour for a one-year term. Before you can purchase a Scheduled Instance, you must
         * call <a>DescribeScheduledInstanceAvailability</a> to check for available
         * schedules and obtain a purchase token. After you purchase a Scheduled Instance,
         * you must call <a>RunScheduledInstances</a> during each scheduled time
         * period.</p> <p>After you purchase a Scheduled Instance, you can't cancel,
         * modify, or resell your purchase.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseScheduledInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseScheduledInstancesOutcomeCallable PurchaseScheduledInstancesCallable(const Model::PurchaseScheduledInstancesRequest& request) const;

        /**
         * <p>Purchases one or more Scheduled Instances with the specified schedule.</p>
         * <p>Scheduled Instances enable you to purchase Amazon EC2 compute capacity by the
         * hour for a one-year term. Before you can purchase a Scheduled Instance, you must
         * call <a>DescribeScheduledInstanceAvailability</a> to check for available
         * schedules and obtain a purchase token. After you purchase a Scheduled Instance,
         * you must call <a>RunScheduledInstances</a> during each scheduled time
         * period.</p> <p>After you purchase a Scheduled Instance, you can't cancel,
         * modify, or resell your purchase.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseScheduledInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseScheduledInstancesAsync(const Model::PurchaseScheduledInstancesRequest& request, const PurchaseScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a reboot of one or more instances. This operation is asynchronous;
         * it only queues a request to reboot the specified instances. The operation
         * succeeds if the instances are valid and belong to you. Requests to reboot
         * terminated instances are ignored.</p> <p>If an instance does not cleanly shut
         * down within four minutes, Amazon EC2 performs a hard reboot.</p> <p>For more
         * information about troubleshooting, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-console.html">Getting
         * Console Output and Rebooting Instances</a> in the <i>Amazon Elastic Compute
         * Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RebootInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest& request) const;

        /**
         * <p>Requests a reboot of one or more instances. This operation is asynchronous;
         * it only queues a request to reboot the specified instances. The operation
         * succeeds if the instances are valid and belong to you. Requests to reboot
         * terminated instances are ignored.</p> <p>If an instance does not cleanly shut
         * down within four minutes, Amazon EC2 performs a hard reboot.</p> <p>For more
         * information about troubleshooting, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-console.html">Getting
         * Console Output and Rebooting Instances</a> in the <i>Amazon Elastic Compute
         * Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RebootInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request) const;

        /**
         * <p>Requests a reboot of one or more instances. This operation is asynchronous;
         * it only queues a request to reboot the specified instances. The operation
         * succeeds if the instances are valid and belong to you. Requests to reboot
         * terminated instances are ignored.</p> <p>If an instance does not cleanly shut
         * down within four minutes, Amazon EC2 performs a hard reboot.</p> <p>For more
         * information about troubleshooting, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-console.html">Getting
         * Console Output and Rebooting Instances</a> in the <i>Amazon Elastic Compute
         * Cloud User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RebootInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an AMI. When you're creating an AMI, this is the final step you
         * must complete before you can launch an instance from the AMI. For more
         * information about creating AMIs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami.html">Creating
         * Your Own AMIs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <note> <p>For Amazon EBS-backed instances, <a>CreateImage</a> creates and
         * registers the AMI in a single request, so you don't have to register the AMI
         * yourself.</p> </note> <p>You can also use <code>RegisterImage</code> to create
         * an Amazon EBS-backed Linux AMI from a snapshot of a root device volume. You
         * specify the snapshot using the block device mapping. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-launch-snapshot.html">Launching
         * a Linux Instance from a Backup</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>You can't register an image where a secondary (non-root)
         * snapshot has AWS Marketplace product codes.</p> <p>Some Linux distributions,
         * such as Red Hat Enterprise Linux (RHEL) and SUSE Linux Enterprise Server (SLES),
         * use the EC2 billing product code associated with an AMI to verify the
         * subscription status for package updates. Creating an AMI from an EBS snapshot
         * does not maintain this billing code, and subsequent instances launched from such
         * an AMI will not be able to connect to package update infrastructure. To create
         * an AMI that must retain billing codes, see <a>CreateImage</a>.</p> <p>If needed,
         * you can deregister an AMI at any time. Any modifications you make to an AMI
         * backed by an instance store volume invalidates its registration. If you make
         * changes to an image, deregister the previous image and register the new
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterImage">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterImageOutcome RegisterImage(const Model::RegisterImageRequest& request) const;

        /**
         * <p>Registers an AMI. When you're creating an AMI, this is the final step you
         * must complete before you can launch an instance from the AMI. For more
         * information about creating AMIs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami.html">Creating
         * Your Own AMIs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <note> <p>For Amazon EBS-backed instances, <a>CreateImage</a> creates and
         * registers the AMI in a single request, so you don't have to register the AMI
         * yourself.</p> </note> <p>You can also use <code>RegisterImage</code> to create
         * an Amazon EBS-backed Linux AMI from a snapshot of a root device volume. You
         * specify the snapshot using the block device mapping. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-launch-snapshot.html">Launching
         * a Linux Instance from a Backup</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>You can't register an image where a secondary (non-root)
         * snapshot has AWS Marketplace product codes.</p> <p>Some Linux distributions,
         * such as Red Hat Enterprise Linux (RHEL) and SUSE Linux Enterprise Server (SLES),
         * use the EC2 billing product code associated with an AMI to verify the
         * subscription status for package updates. Creating an AMI from an EBS snapshot
         * does not maintain this billing code, and subsequent instances launched from such
         * an AMI will not be able to connect to package update infrastructure. To create
         * an AMI that must retain billing codes, see <a>CreateImage</a>.</p> <p>If needed,
         * you can deregister an AMI at any time. Any modifications you make to an AMI
         * backed by an instance store volume invalidates its registration. If you make
         * changes to an image, deregister the previous image and register the new
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterImageOutcomeCallable RegisterImageCallable(const Model::RegisterImageRequest& request) const;

        /**
         * <p>Registers an AMI. When you're creating an AMI, this is the final step you
         * must complete before you can launch an instance from the AMI. For more
         * information about creating AMIs, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami.html">Creating
         * Your Own AMIs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
         * <note> <p>For Amazon EBS-backed instances, <a>CreateImage</a> creates and
         * registers the AMI in a single request, so you don't have to register the AMI
         * yourself.</p> </note> <p>You can also use <code>RegisterImage</code> to create
         * an Amazon EBS-backed Linux AMI from a snapshot of a root device volume. You
         * specify the snapshot using the block device mapping. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-launch-snapshot.html">Launching
         * a Linux Instance from a Backup</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p> <p>You can't register an image where a secondary (non-root)
         * snapshot has AWS Marketplace product codes.</p> <p>Some Linux distributions,
         * such as Red Hat Enterprise Linux (RHEL) and SUSE Linux Enterprise Server (SLES),
         * use the EC2 billing product code associated with an AMI to verify the
         * subscription status for package updates. Creating an AMI from an EBS snapshot
         * does not maintain this billing code, and subsequent instances launched from such
         * an AMI will not be able to connect to package update infrastructure. To create
         * an AMI that must retain billing codes, see <a>CreateImage</a>.</p> <p>If needed,
         * you can deregister an AMI at any time. Any modifications you make to an AMI
         * backed by an instance store volume invalidates its registration. If you make
         * changes to an image, deregister the previous image and register the new
         * image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisterImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterImageAsync(const Model::RegisterImageRequest& request, const RegisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects a VPC peering connection request. The VPC peering connection must be
         * in the <code>pending-acceptance</code> state. Use the
         * <a>DescribeVpcPeeringConnections</a> request to view your outstanding VPC
         * peering connection requests. To delete an active VPC peering connection, or to
         * delete a VPC peering connection request that you initiated, use
         * <a>DeleteVpcPeeringConnection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectVpcPeeringConnectionOutcome RejectVpcPeeringConnection(const Model::RejectVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Rejects a VPC peering connection request. The VPC peering connection must be
         * in the <code>pending-acceptance</code> state. Use the
         * <a>DescribeVpcPeeringConnections</a> request to view your outstanding VPC
         * peering connection requests. To delete an active VPC peering connection, or to
         * delete a VPC peering connection request that you initiated, use
         * <a>DeleteVpcPeeringConnection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectVpcPeeringConnectionOutcomeCallable RejectVpcPeeringConnectionCallable(const Model::RejectVpcPeeringConnectionRequest& request) const;

        /**
         * <p>Rejects a VPC peering connection request. The VPC peering connection must be
         * in the <code>pending-acceptance</code> state. Use the
         * <a>DescribeVpcPeeringConnections</a> request to view your outstanding VPC
         * peering connection requests. To delete an active VPC peering connection, or to
         * delete a VPC peering connection request that you initiated, use
         * <a>DeleteVpcPeeringConnection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RejectVpcPeeringConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectVpcPeeringConnectionAsync(const Model::RejectVpcPeeringConnectionRequest& request, const RejectVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Releases the specified Elastic IP address.</p> <p>[EC2-Classic, default VPC]
         * Releasing an Elastic IP address automatically disassociates it from any instance
         * that it's associated with. To disassociate an Elastic IP address without
         * releasing it, use <a>DisassociateAddress</a>.</p> <p>[Nondefault VPC] You must
         * use <a>DisassociateAddress</a> to disassociate the Elastic IP address before you
         * can release it. Otherwise, Amazon EC2 returns an error
         * (<code>InvalidIPAddress.InUse</code>).</p> <p>After releasing an Elastic IP
         * address, it is released to the IP address pool. Be sure to update your DNS
         * records and any servers or devices that communicate with the address. If you
         * attempt to release an Elastic IP address that you already released, you'll get
         * an <code>AuthFailure</code> error if the address is already allocated to another
         * AWS account.</p> <p>[EC2-VPC] After you release an Elastic IP address for use in
         * a VPC, you might be able to recover it. For more information, see
         * <a>AllocateAddress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReleaseAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleaseAddressOutcome ReleaseAddress(const Model::ReleaseAddressRequest& request) const;

        /**
         * <p>Releases the specified Elastic IP address.</p> <p>[EC2-Classic, default VPC]
         * Releasing an Elastic IP address automatically disassociates it from any instance
         * that it's associated with. To disassociate an Elastic IP address without
         * releasing it, use <a>DisassociateAddress</a>.</p> <p>[Nondefault VPC] You must
         * use <a>DisassociateAddress</a> to disassociate the Elastic IP address before you
         * can release it. Otherwise, Amazon EC2 returns an error
         * (<code>InvalidIPAddress.InUse</code>).</p> <p>After releasing an Elastic IP
         * address, it is released to the IP address pool. Be sure to update your DNS
         * records and any servers or devices that communicate with the address. If you
         * attempt to release an Elastic IP address that you already released, you'll get
         * an <code>AuthFailure</code> error if the address is already allocated to another
         * AWS account.</p> <p>[EC2-VPC] After you release an Elastic IP address for use in
         * a VPC, you might be able to recover it. For more information, see
         * <a>AllocateAddress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReleaseAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReleaseAddressOutcomeCallable ReleaseAddressCallable(const Model::ReleaseAddressRequest& request) const;

        /**
         * <p>Releases the specified Elastic IP address.</p> <p>[EC2-Classic, default VPC]
         * Releasing an Elastic IP address automatically disassociates it from any instance
         * that it's associated with. To disassociate an Elastic IP address without
         * releasing it, use <a>DisassociateAddress</a>.</p> <p>[Nondefault VPC] You must
         * use <a>DisassociateAddress</a> to disassociate the Elastic IP address before you
         * can release it. Otherwise, Amazon EC2 returns an error
         * (<code>InvalidIPAddress.InUse</code>).</p> <p>After releasing an Elastic IP
         * address, it is released to the IP address pool. Be sure to update your DNS
         * records and any servers or devices that communicate with the address. If you
         * attempt to release an Elastic IP address that you already released, you'll get
         * an <code>AuthFailure</code> error if the address is already allocated to another
         * AWS account.</p> <p>[EC2-VPC] After you release an Elastic IP address for use in
         * a VPC, you might be able to recover it. For more information, see
         * <a>AllocateAddress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReleaseAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReleaseAddressAsync(const Model::ReleaseAddressRequest& request, const ReleaseAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When you no longer want to use an On-Demand Dedicated Host it can be
         * released. On-Demand billing is stopped and the host goes into
         * <code>released</code> state. The host ID of Dedicated Hosts that have been
         * released can no longer be specified in another request, e.g., ModifyHosts. You
         * must stop or terminate all instances on a host before it can be released.</p>
         * <p>When Dedicated Hosts are released, it make take some time for them to stop
         * counting toward your limit and you may receive capacity errors when trying to
         * allocate new Dedicated hosts. Try waiting a few minutes, and then try again.</p>
         * <p>Released hosts will still appear in a <a>DescribeHosts</a>
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReleaseHosts">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleaseHostsOutcome ReleaseHosts(const Model::ReleaseHostsRequest& request) const;

        /**
         * <p>When you no longer want to use an On-Demand Dedicated Host it can be
         * released. On-Demand billing is stopped and the host goes into
         * <code>released</code> state. The host ID of Dedicated Hosts that have been
         * released can no longer be specified in another request, e.g., ModifyHosts. You
         * must stop or terminate all instances on a host before it can be released.</p>
         * <p>When Dedicated Hosts are released, it make take some time for them to stop
         * counting toward your limit and you may receive capacity errors when trying to
         * allocate new Dedicated hosts. Try waiting a few minutes, and then try again.</p>
         * <p>Released hosts will still appear in a <a>DescribeHosts</a>
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReleaseHosts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReleaseHostsOutcomeCallable ReleaseHostsCallable(const Model::ReleaseHostsRequest& request) const;

        /**
         * <p>When you no longer want to use an On-Demand Dedicated Host it can be
         * released. On-Demand billing is stopped and the host goes into
         * <code>released</code> state. The host ID of Dedicated Hosts that have been
         * released can no longer be specified in another request, e.g., ModifyHosts. You
         * must stop or terminate all instances on a host before it can be released.</p>
         * <p>When Dedicated Hosts are released, it make take some time for them to stop
         * counting toward your limit and you may receive capacity errors when trying to
         * allocate new Dedicated hosts. Try waiting a few minutes, and then try again.</p>
         * <p>Released hosts will still appear in a <a>DescribeHosts</a>
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReleaseHosts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReleaseHostsAsync(const Model::ReleaseHostsRequest& request, const ReleaseHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces an IAM instance profile for the specified running instance. You can
         * use this action to change the IAM instance profile that's associated with an
         * instance without having to disassociate the existing IAM instance profile
         * first.</p> <p>Use <a>DescribeIamInstanceProfileAssociations</a> to get the
         * association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceIamInstanceProfileAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceIamInstanceProfileAssociationOutcome ReplaceIamInstanceProfileAssociation(const Model::ReplaceIamInstanceProfileAssociationRequest& request) const;

        /**
         * <p>Replaces an IAM instance profile for the specified running instance. You can
         * use this action to change the IAM instance profile that's associated with an
         * instance without having to disassociate the existing IAM instance profile
         * first.</p> <p>Use <a>DescribeIamInstanceProfileAssociations</a> to get the
         * association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceIamInstanceProfileAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceIamInstanceProfileAssociationOutcomeCallable ReplaceIamInstanceProfileAssociationCallable(const Model::ReplaceIamInstanceProfileAssociationRequest& request) const;

        /**
         * <p>Replaces an IAM instance profile for the specified running instance. You can
         * use this action to change the IAM instance profile that's associated with an
         * instance without having to disassociate the existing IAM instance profile
         * first.</p> <p>Use <a>DescribeIamInstanceProfileAssociations</a> to get the
         * association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceIamInstanceProfileAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceIamInstanceProfileAssociationAsync(const Model::ReplaceIamInstanceProfileAssociationRequest& request, const ReplaceIamInstanceProfileAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes which network ACL a subnet is associated with. By default when you
         * create a subnet, it's automatically associated with the default network ACL. For
         * more information about network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceNetworkAclAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceNetworkAclAssociationOutcome ReplaceNetworkAclAssociation(const Model::ReplaceNetworkAclAssociationRequest& request) const;

        /**
         * <p>Changes which network ACL a subnet is associated with. By default when you
         * create a subnet, it's automatically associated with the default network ACL. For
         * more information about network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceNetworkAclAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceNetworkAclAssociationOutcomeCallable ReplaceNetworkAclAssociationCallable(const Model::ReplaceNetworkAclAssociationRequest& request) const;

        /**
         * <p>Changes which network ACL a subnet is associated with. By default when you
         * create a subnet, it's automatically associated with the default network ACL. For
         * more information about network ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceNetworkAclAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceNetworkAclAssociationAsync(const Model::ReplaceNetworkAclAssociationRequest& request, const ReplaceNetworkAclAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces an entry (rule) in a network ACL. For more information about network
         * ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceNetworkAclEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceNetworkAclEntryOutcome ReplaceNetworkAclEntry(const Model::ReplaceNetworkAclEntryRequest& request) const;

        /**
         * <p>Replaces an entry (rule) in a network ACL. For more information about network
         * ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceNetworkAclEntry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceNetworkAclEntryOutcomeCallable ReplaceNetworkAclEntryCallable(const Model::ReplaceNetworkAclEntryRequest& request) const;

        /**
         * <p>Replaces an entry (rule) in a network ACL. For more information about network
         * ACLs, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network
         * ACLs</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceNetworkAclEntry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceNetworkAclEntryAsync(const Model::ReplaceNetworkAclEntryRequest& request, const ReplaceNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces an existing route within a route table in a VPC. You must provide
         * only one of the following: Internet gateway or virtual private gateway, NAT
         * instance, NAT gateway, VPC peering connection, network interface, or egress-only
         * Internet gateway.</p> <p>For more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceRouteOutcome ReplaceRoute(const Model::ReplaceRouteRequest& request) const;

        /**
         * <p>Replaces an existing route within a route table in a VPC. You must provide
         * only one of the following: Internet gateway or virtual private gateway, NAT
         * instance, NAT gateway, VPC peering connection, network interface, or egress-only
         * Internet gateway.</p> <p>For more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceRouteOutcomeCallable ReplaceRouteCallable(const Model::ReplaceRouteRequest& request) const;

        /**
         * <p>Replaces an existing route within a route table in a VPC. You must provide
         * only one of the following: Internet gateway or virtual private gateway, NAT
         * instance, NAT gateway, VPC peering connection, network interface, or egress-only
         * Internet gateway.</p> <p>For more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceRouteAsync(const Model::ReplaceRouteRequest& request, const ReplaceRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the route table associated with a given subnet in a VPC. After the
         * operation completes, the subnet uses the routes in the new route table it's
         * associated with. For more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p> <p>You can
         * also use ReplaceRouteTableAssociation to change which table is the main route
         * table in the VPC. You just specify the main route table's association ID and the
         * route table to be the new main route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceRouteTableAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceRouteTableAssociationOutcome ReplaceRouteTableAssociation(const Model::ReplaceRouteTableAssociationRequest& request) const;

        /**
         * <p>Changes the route table associated with a given subnet in a VPC. After the
         * operation completes, the subnet uses the routes in the new route table it's
         * associated with. For more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p> <p>You can
         * also use ReplaceRouteTableAssociation to change which table is the main route
         * table in the VPC. You just specify the main route table's association ID and the
         * route table to be the new main route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceRouteTableAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceRouteTableAssociationOutcomeCallable ReplaceRouteTableAssociationCallable(const Model::ReplaceRouteTableAssociationRequest& request) const;

        /**
         * <p>Changes the route table associated with a given subnet in a VPC. After the
         * operation completes, the subnet uses the routes in the new route table it's
         * associated with. For more information about route tables, see <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route
         * Tables</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p> <p>You can
         * also use ReplaceRouteTableAssociation to change which table is the main route
         * table in the VPC. You just specify the main route table's association ID and the
         * route table to be the new main route table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceRouteTableAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceRouteTableAssociationAsync(const Model::ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits feedback about the status of an instance. The instance must be in the
         * <code>running</code> state. If your experience with the instance differs from
         * the instance status returned by <a>DescribeInstanceStatus</a>, use
         * <a>ReportInstanceStatus</a> to report your experience with the instance. Amazon
         * EC2 collects this information to improve the accuracy of status checks.</p>
         * <p>Use of this action does not change the value returned by
         * <a>DescribeInstanceStatus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReportInstanceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ReportInstanceStatusOutcome ReportInstanceStatus(const Model::ReportInstanceStatusRequest& request) const;

        /**
         * <p>Submits feedback about the status of an instance. The instance must be in the
         * <code>running</code> state. If your experience with the instance differs from
         * the instance status returned by <a>DescribeInstanceStatus</a>, use
         * <a>ReportInstanceStatus</a> to report your experience with the instance. Amazon
         * EC2 collects this information to improve the accuracy of status checks.</p>
         * <p>Use of this action does not change the value returned by
         * <a>DescribeInstanceStatus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReportInstanceStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReportInstanceStatusOutcomeCallable ReportInstanceStatusCallable(const Model::ReportInstanceStatusRequest& request) const;

        /**
         * <p>Submits feedback about the status of an instance. The instance must be in the
         * <code>running</code> state. If your experience with the instance differs from
         * the instance status returned by <a>DescribeInstanceStatus</a>, use
         * <a>ReportInstanceStatus</a> to report your experience with the instance. Amazon
         * EC2 collects this information to improve the accuracy of status checks.</p>
         * <p>Use of this action does not change the value returned by
         * <a>DescribeInstanceStatus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReportInstanceStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReportInstanceStatusAsync(const Model::ReportInstanceStatusRequest& request, const ReportInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Spot fleet request.</p> <p>You can submit a single request that
         * includes multiple launch specifications that vary by instance type, AMI,
         * Availability Zone, or subnet.</p> <p>By default, the Spot fleet requests Spot
         * instances in the Spot pool where the price per unit is the lowest. Each launch
         * specification can include its own instance weighting that reflects the value of
         * the instance type to your application workload.</p> <p>Alternatively, you can
         * specify that the Spot fleet distribute the target capacity across the Spot pools
         * included in its launch specifications. By ensuring that the Spot instances in
         * your Spot fleet are in different Spot pools, you can improve the availability of
         * your fleet.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html">Spot
         * Fleet Requests</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestSpotFleetOutcome RequestSpotFleet(const Model::RequestSpotFleetRequest& request) const;

        /**
         * <p>Creates a Spot fleet request.</p> <p>You can submit a single request that
         * includes multiple launch specifications that vary by instance type, AMI,
         * Availability Zone, or subnet.</p> <p>By default, the Spot fleet requests Spot
         * instances in the Spot pool where the price per unit is the lowest. Each launch
         * specification can include its own instance weighting that reflects the value of
         * the instance type to your application workload.</p> <p>Alternatively, you can
         * specify that the Spot fleet distribute the target capacity across the Spot pools
         * included in its launch specifications. By ensuring that the Spot instances in
         * your Spot fleet are in different Spot pools, you can improve the availability of
         * your fleet.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html">Spot
         * Fleet Requests</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestSpotFleetOutcomeCallable RequestSpotFleetCallable(const Model::RequestSpotFleetRequest& request) const;

        /**
         * <p>Creates a Spot fleet request.</p> <p>You can submit a single request that
         * includes multiple launch specifications that vary by instance type, AMI,
         * Availability Zone, or subnet.</p> <p>By default, the Spot fleet requests Spot
         * instances in the Spot pool where the price per unit is the lowest. Each launch
         * specification can include its own instance weighting that reflects the value of
         * the instance type to your application workload.</p> <p>Alternatively, you can
         * specify that the Spot fleet distribute the target capacity across the Spot pools
         * included in its launch specifications. By ensuring that the Spot instances in
         * your Spot fleet are in different Spot pools, you can improve the availability of
         * your fleet.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html">Spot
         * Fleet Requests</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestSpotFleetAsync(const Model::RequestSpotFleetRequest& request, const RequestSpotFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Spot instance request. Spot instances are instances that Amazon EC2
         * launches when the bid price that you specify exceeds the current Spot price.
         * Amazon EC2 periodically sets the Spot price based on available Spot Instance
         * capacity and current Spot instance requests. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot
         * Instance Requests</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestSpotInstancesOutcome RequestSpotInstances(const Model::RequestSpotInstancesRequest& request) const;

        /**
         * <p>Creates a Spot instance request. Spot instances are instances that Amazon EC2
         * launches when the bid price that you specify exceeds the current Spot price.
         * Amazon EC2 periodically sets the Spot price based on available Spot Instance
         * capacity and current Spot instance requests. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot
         * Instance Requests</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestSpotInstancesOutcomeCallable RequestSpotInstancesCallable(const Model::RequestSpotInstancesRequest& request) const;

        /**
         * <p>Creates a Spot instance request. Spot instances are instances that Amazon EC2
         * launches when the bid price that you specify exceeds the current Spot price.
         * Amazon EC2 periodically sets the Spot price based on available Spot Instance
         * capacity and current Spot instance requests. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot
         * Instance Requests</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestSpotInstancesAsync(const Model::RequestSpotInstancesRequest& request, const RequestSpotInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the specified attribute of the specified Amazon FPGA Image (AFI) to
         * its default value. You can only reset the load permission
         * attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetFpgaImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetFpgaImageAttributeOutcome ResetFpgaImageAttribute(const Model::ResetFpgaImageAttributeRequest& request) const;

        /**
         * <p>Resets the specified attribute of the specified Amazon FPGA Image (AFI) to
         * its default value. You can only reset the load permission
         * attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetFpgaImageAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetFpgaImageAttributeOutcomeCallable ResetFpgaImageAttributeCallable(const Model::ResetFpgaImageAttributeRequest& request) const;

        /**
         * <p>Resets the specified attribute of the specified Amazon FPGA Image (AFI) to
         * its default value. You can only reset the load permission
         * attribute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetFpgaImageAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetFpgaImageAttributeAsync(const Model::ResetFpgaImageAttributeRequest& request, const ResetFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets an attribute of an AMI to its default value.</p> <note> <p>The
         * productCodes attribute can't be reset.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetImageAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetImageAttributeOutcome ResetImageAttribute(const Model::ResetImageAttributeRequest& request) const;

        /**
         * <p>Resets an attribute of an AMI to its default value.</p> <note> <p>The
         * productCodes attribute can't be reset.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetImageAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetImageAttributeOutcomeCallable ResetImageAttributeCallable(const Model::ResetImageAttributeRequest& request) const;

        /**
         * <p>Resets an attribute of an AMI to its default value.</p> <note> <p>The
         * productCodes attribute can't be reset.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetImageAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetImageAttributeAsync(const Model::ResetImageAttributeRequest& request, const ResetImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets an attribute of an instance to its default value. To reset the
         * <code>kernel</code> or <code>ramdisk</code>, the instance must be in a stopped
         * state. To reset the <code>sourceDestCheck</code>, the instance can be either
         * running or stopped.</p> <p>The <code>sourceDestCheck</code> attribute controls
         * whether source/destination checking is enabled. The default value is
         * <code>true</code>, which means checking is enabled. This value must be
         * <code>false</code> for a NAT instance to perform NAT. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT
         * Instances</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetInstanceAttributeOutcome ResetInstanceAttribute(const Model::ResetInstanceAttributeRequest& request) const;

        /**
         * <p>Resets an attribute of an instance to its default value. To reset the
         * <code>kernel</code> or <code>ramdisk</code>, the instance must be in a stopped
         * state. To reset the <code>sourceDestCheck</code>, the instance can be either
         * running or stopped.</p> <p>The <code>sourceDestCheck</code> attribute controls
         * whether source/destination checking is enabled. The default value is
         * <code>true</code>, which means checking is enabled. This value must be
         * <code>false</code> for a NAT instance to perform NAT. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT
         * Instances</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetInstanceAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetInstanceAttributeOutcomeCallable ResetInstanceAttributeCallable(const Model::ResetInstanceAttributeRequest& request) const;

        /**
         * <p>Resets an attribute of an instance to its default value. To reset the
         * <code>kernel</code> or <code>ramdisk</code>, the instance must be in a stopped
         * state. To reset the <code>sourceDestCheck</code>, the instance can be either
         * running or stopped.</p> <p>The <code>sourceDestCheck</code> attribute controls
         * whether source/destination checking is enabled. The default value is
         * <code>true</code>, which means checking is enabled. This value must be
         * <code>false</code> for a NAT instance to perform NAT. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT
         * Instances</a> in the <i>Amazon Virtual Private Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetInstanceAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetInstanceAttributeAsync(const Model::ResetInstanceAttributeRequest& request, const ResetInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets a network interface attribute. You can specify only one attribute at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetNetworkInterfaceAttributeOutcome ResetNetworkInterfaceAttribute(const Model::ResetNetworkInterfaceAttributeRequest& request) const;

        /**
         * <p>Resets a network interface attribute. You can specify only one attribute at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetNetworkInterfaceAttributeOutcomeCallable ResetNetworkInterfaceAttributeCallable(const Model::ResetNetworkInterfaceAttributeRequest& request) const;

        /**
         * <p>Resets a network interface attribute. You can specify only one attribute at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetNetworkInterfaceAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetNetworkInterfaceAttributeAsync(const Model::ResetNetworkInterfaceAttributeRequest& request, const ResetNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets permission settings for the specified snapshot.</p> <p>For more
         * information on modifying snapshot permissions, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modifying-snapshot-permissions.html">Sharing
         * Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetSnapshotAttributeOutcome ResetSnapshotAttribute(const Model::ResetSnapshotAttributeRequest& request) const;

        /**
         * <p>Resets permission settings for the specified snapshot.</p> <p>For more
         * information on modifying snapshot permissions, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modifying-snapshot-permissions.html">Sharing
         * Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetSnapshotAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetSnapshotAttributeOutcomeCallable ResetSnapshotAttributeCallable(const Model::ResetSnapshotAttributeRequest& request) const;

        /**
         * <p>Resets permission settings for the specified snapshot.</p> <p>For more
         * information on modifying snapshot permissions, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modifying-snapshot-permissions.html">Sharing
         * Snapshots</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetSnapshotAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetSnapshotAttributeAsync(const Model::ResetSnapshotAttributeRequest& request, const ResetSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores an Elastic IP address that was previously moved to the EC2-VPC
         * platform back to the EC2-Classic platform. You cannot move an Elastic IP address
         * that was originally allocated for use in EC2-VPC. The Elastic IP address must
         * not be associated with an instance or network interface.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RestoreAddressToClassic">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreAddressToClassicOutcome RestoreAddressToClassic(const Model::RestoreAddressToClassicRequest& request) const;

        /**
         * <p>Restores an Elastic IP address that was previously moved to the EC2-VPC
         * platform back to the EC2-Classic platform. You cannot move an Elastic IP address
         * that was originally allocated for use in EC2-VPC. The Elastic IP address must
         * not be associated with an instance or network interface.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RestoreAddressToClassic">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreAddressToClassicOutcomeCallable RestoreAddressToClassicCallable(const Model::RestoreAddressToClassicRequest& request) const;

        /**
         * <p>Restores an Elastic IP address that was previously moved to the EC2-VPC
         * platform back to the EC2-Classic platform. You cannot move an Elastic IP address
         * that was originally allocated for use in EC2-VPC. The Elastic IP address must
         * not be associated with an instance or network interface.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RestoreAddressToClassic">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreAddressToClassicAsync(const Model::RestoreAddressToClassicRequest& request, const RestoreAddressToClassicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[EC2-VPC only] Removes one or more egress rules from a security group for
         * EC2-VPC. This action doesn't apply to security groups for use in EC2-Classic. To
         * remove a rule, the values that you specify (for example, ports) must match the
         * existing rule's values exactly.</p> <p>Each rule consists of the protocol and
         * the IPv4 or IPv6 CIDR range or source security group. For the TCP and UDP
         * protocols, you must also specify the destination port or range of ports. For the
         * ICMP protocol, you must also specify the ICMP type and code. If the security
         * group rule has a description, you do not have to specify the description to
         * revoke the rule.</p> <p>Rule changes are propagated to instances within the
         * security group as quickly as possible. However, a small delay might
         * occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokeSecurityGroupEgress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeSecurityGroupEgressOutcome RevokeSecurityGroupEgress(const Model::RevokeSecurityGroupEgressRequest& request) const;

        /**
         * <p>[EC2-VPC only] Removes one or more egress rules from a security group for
         * EC2-VPC. This action doesn't apply to security groups for use in EC2-Classic. To
         * remove a rule, the values that you specify (for example, ports) must match the
         * existing rule's values exactly.</p> <p>Each rule consists of the protocol and
         * the IPv4 or IPv6 CIDR range or source security group. For the TCP and UDP
         * protocols, you must also specify the destination port or range of ports. For the
         * ICMP protocol, you must also specify the ICMP type and code. If the security
         * group rule has a description, you do not have to specify the description to
         * revoke the rule.</p> <p>Rule changes are propagated to instances within the
         * security group as quickly as possible. However, a small delay might
         * occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokeSecurityGroupEgress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeSecurityGroupEgressOutcomeCallable RevokeSecurityGroupEgressCallable(const Model::RevokeSecurityGroupEgressRequest& request) const;

        /**
         * <p>[EC2-VPC only] Removes one or more egress rules from a security group for
         * EC2-VPC. This action doesn't apply to security groups for use in EC2-Classic. To
         * remove a rule, the values that you specify (for example, ports) must match the
         * existing rule's values exactly.</p> <p>Each rule consists of the protocol and
         * the IPv4 or IPv6 CIDR range or source security group. For the TCP and UDP
         * protocols, you must also specify the destination port or range of ports. For the
         * ICMP protocol, you must also specify the ICMP type and code. If the security
         * group rule has a description, you do not have to specify the description to
         * revoke the rule.</p> <p>Rule changes are propagated to instances within the
         * security group as quickly as possible. However, a small delay might
         * occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokeSecurityGroupEgress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeSecurityGroupEgressAsync(const Model::RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more ingress rules from a security group. To remove a rule,
         * the values that you specify (for example, ports) must match the existing rule's
         * values exactly.</p> <note> <p>[EC2-Classic security groups only] If the values
         * you specify do not match the existing rule's values, no error is returned. Use
         * <a>DescribeSecurityGroups</a> to verify that the rule has been removed.</p>
         * </note> <p>Each rule consists of the protocol and the CIDR range or source
         * security group. For the TCP and UDP protocols, you must also specify the
         * destination port or range of ports. For the ICMP protocol, you must also specify
         * the ICMP type and code. If the security group rule has a description, you do not
         * have to specify the description to revoke the rule.</p> <p>Rule changes are
         * propagated to instances within the security group as quickly as possible.
         * However, a small delay might occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokeSecurityGroupIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeSecurityGroupIngressOutcome RevokeSecurityGroupIngress(const Model::RevokeSecurityGroupIngressRequest& request) const;

        /**
         * <p>Removes one or more ingress rules from a security group. To remove a rule,
         * the values that you specify (for example, ports) must match the existing rule's
         * values exactly.</p> <note> <p>[EC2-Classic security groups only] If the values
         * you specify do not match the existing rule's values, no error is returned. Use
         * <a>DescribeSecurityGroups</a> to verify that the rule has been removed.</p>
         * </note> <p>Each rule consists of the protocol and the CIDR range or source
         * security group. For the TCP and UDP protocols, you must also specify the
         * destination port or range of ports. For the ICMP protocol, you must also specify
         * the ICMP type and code. If the security group rule has a description, you do not
         * have to specify the description to revoke the rule.</p> <p>Rule changes are
         * propagated to instances within the security group as quickly as possible.
         * However, a small delay might occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokeSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeSecurityGroupIngressOutcomeCallable RevokeSecurityGroupIngressCallable(const Model::RevokeSecurityGroupIngressRequest& request) const;

        /**
         * <p>Removes one or more ingress rules from a security group. To remove a rule,
         * the values that you specify (for example, ports) must match the existing rule's
         * values exactly.</p> <note> <p>[EC2-Classic security groups only] If the values
         * you specify do not match the existing rule's values, no error is returned. Use
         * <a>DescribeSecurityGroups</a> to verify that the rule has been removed.</p>
         * </note> <p>Each rule consists of the protocol and the CIDR range or source
         * security group. For the TCP and UDP protocols, you must also specify the
         * destination port or range of ports. For the ICMP protocol, you must also specify
         * the ICMP type and code. If the security group rule has a description, you do not
         * have to specify the description to revoke the rule.</p> <p>Rule changes are
         * propagated to instances within the security group as quickly as possible.
         * However, a small delay might occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokeSecurityGroupIngress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeSecurityGroupIngressAsync(const Model::RevokeSecurityGroupIngressRequest& request, const RevokeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches the specified number of instances using an AMI for which you have
         * permissions. </p> <p>You can specify a number of options, or leave the default
         * options. The following rules apply:</p> <ul> <li> <p>[EC2-VPC] If you don't
         * specify a subnet ID, we choose a default subnet from your default VPC for you.
         * If you don't have a default VPC, you must specify a subnet ID in the
         * request.</p> </li> <li> <p>[EC2-Classic] If don't specify an Availability Zone,
         * we choose one for you.</p> </li> <li> <p>Some instance types must be launched
         * into a VPC. If you do not have a default VPC, or if you do not specify a subnet
         * ID, the request fails. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-vpc.html#vpc-only-instance-types">Instance
         * Types Available Only in a VPC</a>.</p> </li> <li> <p>[EC2-VPC] All instances
         * have a network interface with a primary private IPv4 address. If you don't
         * specify this address, we choose one from the IPv4 range of your subnet.</p>
         * </li> <li> <p>Not all instance types support IPv6 addresses. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
         * Types</a>.</p> </li> <li> <p>If you don't specify a security group ID, we use
         * the default security group. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Security
         * Groups</a>.</p> </li> <li> <p>If any of the AMIs have a product code attached
         * for which the user has not subscribed, the request fails.</p> </li> </ul> <p>To
         * ensure faster instance launches, break up large requests into smaller batches.
         * For example, create five separate launch requests for 100 instances each instead
         * of one launch request for 500 instances.</p> <p>An instance is ready for you to
         * use when it's in the <code>running</code> state. You can check the state of your
         * instance using <a>DescribeInstances</a>. You can tag instances and EBS volumes
         * during launch, after launch, or both. For more information, see
         * <a>CreateTags</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a>.</p> <p>Linux instances have access to the public
         * key of the key pair at boot. You can use this key to provide secure access to
         * the instance. Amazon EC2 public images use this feature to provide secure access
         * without passwords. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>For
         * troubleshooting, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_InstanceStraightToTerminated.html">What
         * To Do If An Instance Immediately Terminates</a>, and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesConnecting.html">Troubleshooting
         * Connecting to Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::RunInstancesOutcome RunInstances(const Model::RunInstancesRequest& request) const;

        /**
         * <p>Launches the specified number of instances using an AMI for which you have
         * permissions. </p> <p>You can specify a number of options, or leave the default
         * options. The following rules apply:</p> <ul> <li> <p>[EC2-VPC] If you don't
         * specify a subnet ID, we choose a default subnet from your default VPC for you.
         * If you don't have a default VPC, you must specify a subnet ID in the
         * request.</p> </li> <li> <p>[EC2-Classic] If don't specify an Availability Zone,
         * we choose one for you.</p> </li> <li> <p>Some instance types must be launched
         * into a VPC. If you do not have a default VPC, or if you do not specify a subnet
         * ID, the request fails. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-vpc.html#vpc-only-instance-types">Instance
         * Types Available Only in a VPC</a>.</p> </li> <li> <p>[EC2-VPC] All instances
         * have a network interface with a primary private IPv4 address. If you don't
         * specify this address, we choose one from the IPv4 range of your subnet.</p>
         * </li> <li> <p>Not all instance types support IPv6 addresses. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
         * Types</a>.</p> </li> <li> <p>If you don't specify a security group ID, we use
         * the default security group. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Security
         * Groups</a>.</p> </li> <li> <p>If any of the AMIs have a product code attached
         * for which the user has not subscribed, the request fails.</p> </li> </ul> <p>To
         * ensure faster instance launches, break up large requests into smaller batches.
         * For example, create five separate launch requests for 100 instances each instead
         * of one launch request for 500 instances.</p> <p>An instance is ready for you to
         * use when it's in the <code>running</code> state. You can check the state of your
         * instance using <a>DescribeInstances</a>. You can tag instances and EBS volumes
         * during launch, after launch, or both. For more information, see
         * <a>CreateTags</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a>.</p> <p>Linux instances have access to the public
         * key of the key pair at boot. You can use this key to provide secure access to
         * the instance. Amazon EC2 public images use this feature to provide secure access
         * without passwords. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>For
         * troubleshooting, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_InstanceStraightToTerminated.html">What
         * To Do If An Instance Immediately Terminates</a>, and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesConnecting.html">Troubleshooting
         * Connecting to Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunInstancesOutcomeCallable RunInstancesCallable(const Model::RunInstancesRequest& request) const;

        /**
         * <p>Launches the specified number of instances using an AMI for which you have
         * permissions. </p> <p>You can specify a number of options, or leave the default
         * options. The following rules apply:</p> <ul> <li> <p>[EC2-VPC] If you don't
         * specify a subnet ID, we choose a default subnet from your default VPC for you.
         * If you don't have a default VPC, you must specify a subnet ID in the
         * request.</p> </li> <li> <p>[EC2-Classic] If don't specify an Availability Zone,
         * we choose one for you.</p> </li> <li> <p>Some instance types must be launched
         * into a VPC. If you do not have a default VPC, or if you do not specify a subnet
         * ID, the request fails. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-vpc.html#vpc-only-instance-types">Instance
         * Types Available Only in a VPC</a>.</p> </li> <li> <p>[EC2-VPC] All instances
         * have a network interface with a primary private IPv4 address. If you don't
         * specify this address, we choose one from the IPv4 range of your subnet.</p>
         * </li> <li> <p>Not all instance types support IPv6 addresses. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
         * Types</a>.</p> </li> <li> <p>If you don't specify a security group ID, we use
         * the default security group. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Security
         * Groups</a>.</p> </li> <li> <p>If any of the AMIs have a product code attached
         * for which the user has not subscribed, the request fails.</p> </li> </ul> <p>To
         * ensure faster instance launches, break up large requests into smaller batches.
         * For example, create five separate launch requests for 100 instances each instead
         * of one launch request for 500 instances.</p> <p>An instance is ready for you to
         * use when it's in the <code>running</code> state. You can check the state of your
         * instance using <a>DescribeInstances</a>. You can tag instances and EBS volumes
         * during launch, after launch, or both. For more information, see
         * <a>CreateTags</a> and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a>.</p> <p>Linux instances have access to the public
         * key of the key pair at boot. You can use this key to provide secure access to
         * the instance. Amazon EC2 public images use this feature to provide secure access
         * without passwords. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key
         * Pairs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>For
         * troubleshooting, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_InstanceStraightToTerminated.html">What
         * To Do If An Instance Immediately Terminates</a>, and <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesConnecting.html">Troubleshooting
         * Connecting to Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches the specified Scheduled Instances.</p> <p>Before you can launch a
         * Scheduled Instance, you must purchase it and obtain an identifier using
         * <a>PurchaseScheduledInstances</a>.</p> <p>You must launch a Scheduled Instance
         * during its scheduled time period. You can't stop or reboot a Scheduled Instance,
         * but you can terminate it as needed. If you terminate a Scheduled Instance before
         * the current scheduled time period ends, you can launch it again after a few
         * minutes. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-scheduled-instances.html">Scheduled
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunScheduledInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::RunScheduledInstancesOutcome RunScheduledInstances(const Model::RunScheduledInstancesRequest& request) const;

        /**
         * <p>Launches the specified Scheduled Instances.</p> <p>Before you can launch a
         * Scheduled Instance, you must purchase it and obtain an identifier using
         * <a>PurchaseScheduledInstances</a>.</p> <p>You must launch a Scheduled Instance
         * during its scheduled time period. You can't stop or reboot a Scheduled Instance,
         * but you can terminate it as needed. If you terminate a Scheduled Instance before
         * the current scheduled time period ends, you can launch it again after a few
         * minutes. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-scheduled-instances.html">Scheduled
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunScheduledInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunScheduledInstancesOutcomeCallable RunScheduledInstancesCallable(const Model::RunScheduledInstancesRequest& request) const;

        /**
         * <p>Launches the specified Scheduled Instances.</p> <p>Before you can launch a
         * Scheduled Instance, you must purchase it and obtain an identifier using
         * <a>PurchaseScheduledInstances</a>.</p> <p>You must launch a Scheduled Instance
         * during its scheduled time period. You can't stop or reboot a Scheduled Instance,
         * but you can terminate it as needed. If you terminate a Scheduled Instance before
         * the current scheduled time period ends, you can launch it again after a few
         * minutes. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-scheduled-instances.html">Scheduled
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunScheduledInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunScheduledInstancesAsync(const Model::RunScheduledInstancesRequest& request, const RunScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an Amazon EBS-backed instance that you've previously stopped.</p>
         * <p>Instances that use Amazon EBS volumes as their root devices can be quickly
         * stopped and started. When an instance is stopped, the compute resources are
         * released and you are not billed for instance usage. However, your root partition
         * Amazon EBS volume remains and continues to persist your data, and you are
         * charged for Amazon EBS volume usage. You can restart your instance at any time.
         * Every time you start your Windows instance, Amazon EC2 charges you for a full
         * instance hour. If you stop and restart your Windows instance, a new instance
         * hour begins and Amazon EC2 charges you for another full instance hour even if
         * you are still within the same 60-minute period when it was stopped. Every time
         * you start your Linux instance, Amazon EC2 charges a one-minute minimum for
         * instance usage, and thereafter charges per second for instance usage.</p>
         * <p>Before stopping an instance, make sure it is in a state from which it can be
         * restarted. Stopping an instance does not preserve data stored in RAM.</p>
         * <p>Performing this operation on an instance that uses an instance store as its
         * root device returns an error.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html">Stopping
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StartInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstancesOutcome StartInstances(const Model::StartInstancesRequest& request) const;

        /**
         * <p>Starts an Amazon EBS-backed instance that you've previously stopped.</p>
         * <p>Instances that use Amazon EBS volumes as their root devices can be quickly
         * stopped and started. When an instance is stopped, the compute resources are
         * released and you are not billed for instance usage. However, your root partition
         * Amazon EBS volume remains and continues to persist your data, and you are
         * charged for Amazon EBS volume usage. You can restart your instance at any time.
         * Every time you start your Windows instance, Amazon EC2 charges you for a full
         * instance hour. If you stop and restart your Windows instance, a new instance
         * hour begins and Amazon EC2 charges you for another full instance hour even if
         * you are still within the same 60-minute period when it was stopped. Every time
         * you start your Linux instance, Amazon EC2 charges a one-minute minimum for
         * instance usage, and thereafter charges per second for instance usage.</p>
         * <p>Before stopping an instance, make sure it is in a state from which it can be
         * restarted. Stopping an instance does not preserve data stored in RAM.</p>
         * <p>Performing this operation on an instance that uses an instance store as its
         * root device returns an error.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html">Stopping
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StartInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInstancesOutcomeCallable StartInstancesCallable(const Model::StartInstancesRequest& request) const;

        /**
         * <p>Starts an Amazon EBS-backed instance that you've previously stopped.</p>
         * <p>Instances that use Amazon EBS volumes as their root devices can be quickly
         * stopped and started. When an instance is stopped, the compute resources are
         * released and you are not billed for instance usage. However, your root partition
         * Amazon EBS volume remains and continues to persist your data, and you are
         * charged for Amazon EBS volume usage. You can restart your instance at any time.
         * Every time you start your Windows instance, Amazon EC2 charges you for a full
         * instance hour. If you stop and restart your Windows instance, a new instance
         * hour begins and Amazon EC2 charges you for another full instance hour even if
         * you are still within the same 60-minute period when it was stopped. Every time
         * you start your Linux instance, Amazon EC2 charges a one-minute minimum for
         * instance usage, and thereafter charges per second for instance usage.</p>
         * <p>Before stopping an instance, make sure it is in a state from which it can be
         * restarted. Stopping an instance does not preserve data stored in RAM.</p>
         * <p>Performing this operation on an instance that uses an instance store as its
         * root device returns an error.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html">Stopping
         * Instances</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StartInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an Amazon EBS-backed instance.</p> <p>We don't charge usage for a
         * stopped instance, or data transfer fees; however, your root partition Amazon EBS
         * volume remains and continues to persist your data, and you are charged for
         * Amazon EBS volume usage. Every time you start your Windows instance, Amazon EC2
         * charges you for a full instance hour. If you stop and restart your Windows
         * instance, a new instance hour begins and Amazon EC2 charges you for another full
         * instance hour even if you are still within the same 60-minute period when it was
         * stopped. Every time you start your Linux instance, Amazon EC2 charges a
         * one-minute minimum for instance usage, and thereafter charges per second for
         * instance usage.</p> <p>You can't start or stop Spot Instances, and you can't
         * stop instance store-backed instances.</p> <p>When you stop an instance, we shut
         * it down. You can restart your instance at any time. Before stopping an instance,
         * make sure it is in a state from which it can be restarted. Stopping an instance
         * does not preserve data stored in RAM.</p> <p>Stopping an instance is different
         * to rebooting or terminating it. For example, when you stop an instance, the root
         * device and any other devices attached to the instance persist. When you
         * terminate an instance, the root device and any other devices attached during the
         * instance launch are automatically deleted. For more information about the
         * differences between rebooting, stopping, and terminating instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * Lifecycle</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>When
         * you stop an instance, we attempt to shut it down forcibly after a short while.
         * If your instance appears stuck in the stopping state after a period of time,
         * there may be an issue with the underlying host computer. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesStopping.html">Troubleshooting
         * Stopping Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StopInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInstancesOutcome StopInstances(const Model::StopInstancesRequest& request) const;

        /**
         * <p>Stops an Amazon EBS-backed instance.</p> <p>We don't charge usage for a
         * stopped instance, or data transfer fees; however, your root partition Amazon EBS
         * volume remains and continues to persist your data, and you are charged for
         * Amazon EBS volume usage. Every time you start your Windows instance, Amazon EC2
         * charges you for a full instance hour. If you stop and restart your Windows
         * instance, a new instance hour begins and Amazon EC2 charges you for another full
         * instance hour even if you are still within the same 60-minute period when it was
         * stopped. Every time you start your Linux instance, Amazon EC2 charges a
         * one-minute minimum for instance usage, and thereafter charges per second for
         * instance usage.</p> <p>You can't start or stop Spot Instances, and you can't
         * stop instance store-backed instances.</p> <p>When you stop an instance, we shut
         * it down. You can restart your instance at any time. Before stopping an instance,
         * make sure it is in a state from which it can be restarted. Stopping an instance
         * does not preserve data stored in RAM.</p> <p>Stopping an instance is different
         * to rebooting or terminating it. For example, when you stop an instance, the root
         * device and any other devices attached to the instance persist. When you
         * terminate an instance, the root device and any other devices attached during the
         * instance launch are automatically deleted. For more information about the
         * differences between rebooting, stopping, and terminating instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * Lifecycle</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>When
         * you stop an instance, we attempt to shut it down forcibly after a short while.
         * If your instance appears stuck in the stopping state after a period of time,
         * there may be an issue with the underlying host computer. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesStopping.html">Troubleshooting
         * Stopping Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StopInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopInstancesOutcomeCallable StopInstancesCallable(const Model::StopInstancesRequest& request) const;

        /**
         * <p>Stops an Amazon EBS-backed instance.</p> <p>We don't charge usage for a
         * stopped instance, or data transfer fees; however, your root partition Amazon EBS
         * volume remains and continues to persist your data, and you are charged for
         * Amazon EBS volume usage. Every time you start your Windows instance, Amazon EC2
         * charges you for a full instance hour. If you stop and restart your Windows
         * instance, a new instance hour begins and Amazon EC2 charges you for another full
         * instance hour even if you are still within the same 60-minute period when it was
         * stopped. Every time you start your Linux instance, Amazon EC2 charges a
         * one-minute minimum for instance usage, and thereafter charges per second for
         * instance usage.</p> <p>You can't start or stop Spot Instances, and you can't
         * stop instance store-backed instances.</p> <p>When you stop an instance, we shut
         * it down. You can restart your instance at any time. Before stopping an instance,
         * make sure it is in a state from which it can be restarted. Stopping an instance
         * does not preserve data stored in RAM.</p> <p>Stopping an instance is different
         * to rebooting or terminating it. For example, when you stop an instance, the root
         * device and any other devices attached to the instance persist. When you
         * terminate an instance, the root device and any other devices attached during the
         * instance launch are automatically deleted. For more information about the
         * differences between rebooting, stopping, and terminating instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * Lifecycle</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>When
         * you stop an instance, we attempt to shut it down forcibly after a short while.
         * If your instance appears stuck in the stopping state after a period of time,
         * there may be an issue with the underlying host computer. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesStopping.html">Troubleshooting
         * Stopping Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StopInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shuts down one or more instances. This operation is idempotent; if you
         * terminate an instance more than once, each call succeeds. </p> <p>If you specify
         * multiple instances and the request fails (for example, because of a single
         * incorrect instance ID), none of the instances are terminated.</p> <p>Terminated
         * instances remain visible after termination (for approximately one hour).</p>
         * <p>By default, Amazon EC2 deletes all EBS volumes that were attached when the
         * instance launched. Volumes attached after instance launch continue running.</p>
         * <p>You can stop, start, and terminate EBS-backed instances. You can only
         * terminate instance store-backed instances. What happens to an instance differs
         * if you stop it or terminate it. For example, when you stop an instance, the root
         * device and any other devices attached to the instance persist. When you
         * terminate an instance, any attached EBS volumes with the
         * <code>DeleteOnTermination</code> block device mapping parameter set to
         * <code>true</code> are automatically deleted. For more information about the
         * differences between stopping and terminating instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * Lifecycle</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>For
         * more information about troubleshooting, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesShuttingDown.html">Troubleshooting
         * Terminating Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TerminateInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest& request) const;

        /**
         * <p>Shuts down one or more instances. This operation is idempotent; if you
         * terminate an instance more than once, each call succeeds. </p> <p>If you specify
         * multiple instances and the request fails (for example, because of a single
         * incorrect instance ID), none of the instances are terminated.</p> <p>Terminated
         * instances remain visible after termination (for approximately one hour).</p>
         * <p>By default, Amazon EC2 deletes all EBS volumes that were attached when the
         * instance launched. Volumes attached after instance launch continue running.</p>
         * <p>You can stop, start, and terminate EBS-backed instances. You can only
         * terminate instance store-backed instances. What happens to an instance differs
         * if you stop it or terminate it. For example, when you stop an instance, the root
         * device and any other devices attached to the instance persist. When you
         * terminate an instance, any attached EBS volumes with the
         * <code>DeleteOnTermination</code> block device mapping parameter set to
         * <code>true</code> are automatically deleted. For more information about the
         * differences between stopping and terminating instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * Lifecycle</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>For
         * more information about troubleshooting, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesShuttingDown.html">Troubleshooting
         * Terminating Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TerminateInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request) const;

        /**
         * <p>Shuts down one or more instances. This operation is idempotent; if you
         * terminate an instance more than once, each call succeeds. </p> <p>If you specify
         * multiple instances and the request fails (for example, because of a single
         * incorrect instance ID), none of the instances are terminated.</p> <p>Terminated
         * instances remain visible after termination (for approximately one hour).</p>
         * <p>By default, Amazon EC2 deletes all EBS volumes that were attached when the
         * instance launched. Volumes attached after instance launch continue running.</p>
         * <p>You can stop, start, and terminate EBS-backed instances. You can only
         * terminate instance store-backed instances. What happens to an instance differs
         * if you stop it or terminate it. For example, when you stop an instance, the root
         * device and any other devices attached to the instance persist. When you
         * terminate an instance, any attached EBS volumes with the
         * <code>DeleteOnTermination</code> block device mapping parameter set to
         * <code>true</code> are automatically deleted. For more information about the
         * differences between stopping and terminating instances, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
         * Lifecycle</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p> <p>For
         * more information about troubleshooting, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesShuttingDown.html">Troubleshooting
         * Terminating Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TerminateInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unassigns one or more IPv6 addresses from a network interface.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignIpv6Addresses">AWS
         * API Reference</a></p>
         */
        virtual Model::UnassignIpv6AddressesOutcome UnassignIpv6Addresses(const Model::UnassignIpv6AddressesRequest& request) const;

        /**
         * <p>Unassigns one or more IPv6 addresses from a network interface.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignIpv6Addresses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnassignIpv6AddressesOutcomeCallable UnassignIpv6AddressesCallable(const Model::UnassignIpv6AddressesRequest& request) const;

        /**
         * <p>Unassigns one or more IPv6 addresses from a network interface.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignIpv6Addresses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnassignIpv6AddressesAsync(const Model::UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unassigns one or more secondary private IP addresses from a network
         * interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignPrivateIpAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::UnassignPrivateIpAddressesOutcome UnassignPrivateIpAddresses(const Model::UnassignPrivateIpAddressesRequest& request) const;

        /**
         * <p>Unassigns one or more secondary private IP addresses from a network
         * interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignPrivateIpAddresses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnassignPrivateIpAddressesOutcomeCallable UnassignPrivateIpAddressesCallable(const Model::UnassignPrivateIpAddressesRequest& request) const;

        /**
         * <p>Unassigns one or more secondary private IP addresses from a network
         * interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnassignPrivateIpAddresses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnassignPrivateIpAddressesAsync(const Model::UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables detailed monitoring for a running instance. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch.html">Monitoring
         * Your Instances and Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnmonitorInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::UnmonitorInstancesOutcome UnmonitorInstances(const Model::UnmonitorInstancesRequest& request) const;

        /**
         * <p>Disables detailed monitoring for a running instance. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch.html">Monitoring
         * Your Instances and Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnmonitorInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnmonitorInstancesOutcomeCallable UnmonitorInstancesCallable(const Model::UnmonitorInstancesRequest& request) const;

        /**
         * <p>Disables detailed monitoring for a running instance. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch.html">Monitoring
         * Your Instances and Volumes</a> in the <i>Amazon Elastic Compute Cloud User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnmonitorInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnmonitorInstancesAsync(const Model::UnmonitorInstancesRequest& request, const UnmonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>[EC2-VPC only] Updates the description of an egress (outbound) security group
         * rule. You can replace an existing description, or add a description to a rule
         * that did not have one previously.</p> <p>You specify the description as part of
         * the IP permissions structure. You can remove a description for a security group
         * rule by omitting the description parameter in the request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UpdateSecurityGroupRuleDescriptionsEgress">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityGroupRuleDescriptionsEgressOutcome UpdateSecurityGroupRuleDescriptionsEgress(const Model::UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const;

        /**
         * <p>[EC2-VPC only] Updates the description of an egress (outbound) security group
         * rule. You can replace an existing description, or add a description to a rule
         * that did not have one previously.</p> <p>You specify the description as part of
         * the IP permissions structure. You can remove a description for a security group
         * rule by omitting the description parameter in the request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UpdateSecurityGroupRuleDescriptionsEgress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityGroupRuleDescriptionsEgressOutcomeCallable UpdateSecurityGroupRuleDescriptionsEgressCallable(const Model::UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const;

        /**
         * <p>[EC2-VPC only] Updates the description of an egress (outbound) security group
         * rule. You can replace an existing description, or add a description to a rule
         * that did not have one previously.</p> <p>You specify the description as part of
         * the IP permissions structure. You can remove a description for a security group
         * rule by omitting the description parameter in the request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UpdateSecurityGroupRuleDescriptionsEgress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityGroupRuleDescriptionsEgressAsync(const Model::UpdateSecurityGroupRuleDescriptionsEgressRequest& request, const UpdateSecurityGroupRuleDescriptionsEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description of an ingress (inbound) security group rule. You can
         * replace an existing description, or add a description to a rule that did not
         * have one previously.</p> <p>You specify the description as part of the IP
         * permissions structure. You can remove a description for a security group rule by
         * omitting the description parameter in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UpdateSecurityGroupRuleDescriptionsIngress">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityGroupRuleDescriptionsIngressOutcome UpdateSecurityGroupRuleDescriptionsIngress(const Model::UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const;

        /**
         * <p>Updates the description of an ingress (inbound) security group rule. You can
         * replace an existing description, or add a description to a rule that did not
         * have one previously.</p> <p>You specify the description as part of the IP
         * permissions structure. You can remove a description for a security group rule by
         * omitting the description parameter in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UpdateSecurityGroupRuleDescriptionsIngress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityGroupRuleDescriptionsIngressOutcomeCallable UpdateSecurityGroupRuleDescriptionsIngressCallable(const Model::UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const;

        /**
         * <p>Updates the description of an ingress (inbound) security group rule. You can
         * replace an existing description, or add a description to a rule that did not
         * have one previously.</p> <p>You specify the description as part of the IP
         * permissions structure. You can remove a description for a security group rule by
         * omitting the description parameter in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UpdateSecurityGroupRuleDescriptionsIngress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityGroupRuleDescriptionsIngressAsync(const Model::UpdateSecurityGroupRuleDescriptionsIngressRequest& request, const UpdateSecurityGroupRuleDescriptionsIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AcceptReservedInstancesExchangeQuoteAsyncHelper(const Model::AcceptReservedInstancesExchangeQuoteRequest& request, const AcceptReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AcceptVpcPeeringConnectionAsyncHelper(const Model::AcceptVpcPeeringConnectionRequest& request, const AcceptVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllocateAddressAsyncHelper(const Model::AllocateAddressRequest& request, const AllocateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AllocateHostsAsyncHelper(const Model::AllocateHostsRequest& request, const AllocateHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssignIpv6AddressesAsyncHelper(const Model::AssignIpv6AddressesRequest& request, const AssignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssignPrivateIpAddressesAsyncHelper(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateAddressAsyncHelper(const Model::AssociateAddressRequest& request, const AssociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateDhcpOptionsAsyncHelper(const Model::AssociateDhcpOptionsRequest& request, const AssociateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateIamInstanceProfileAsyncHelper(const Model::AssociateIamInstanceProfileRequest& request, const AssociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateRouteTableAsyncHelper(const Model::AssociateRouteTableRequest& request, const AssociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateSubnetCidrBlockAsyncHelper(const Model::AssociateSubnetCidrBlockRequest& request, const AssociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateVpcCidrBlockAsyncHelper(const Model::AssociateVpcCidrBlockRequest& request, const AssociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachClassicLinkVpcAsyncHelper(const Model::AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachInternetGatewayAsyncHelper(const Model::AttachInternetGatewayRequest& request, const AttachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachNetworkInterfaceAsyncHelper(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachVolumeAsyncHelper(const Model::AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachVpnGatewayAsyncHelper(const Model::AttachVpnGatewayRequest& request, const AttachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AuthorizeSecurityGroupEgressAsyncHelper(const Model::AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AuthorizeSecurityGroupIngressAsyncHelper(const Model::AuthorizeSecurityGroupIngressRequest& request, const AuthorizeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BundleInstanceAsyncHelper(const Model::BundleInstanceRequest& request, const BundleInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelBundleTaskAsyncHelper(const Model::CancelBundleTaskRequest& request, const CancelBundleTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelConversionTaskAsyncHelper(const Model::CancelConversionTaskRequest& request, const CancelConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelExportTaskAsyncHelper(const Model::CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelImportTaskAsyncHelper(const Model::CancelImportTaskRequest& request, const CancelImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelReservedInstancesListingAsyncHelper(const Model::CancelReservedInstancesListingRequest& request, const CancelReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelSpotFleetRequestsAsyncHelper(const Model::CancelSpotFleetRequestsRequest& request, const CancelSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelSpotInstanceRequestsAsyncHelper(const Model::CancelSpotInstanceRequestsRequest& request, const CancelSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmProductInstanceAsyncHelper(const Model::ConfirmProductInstanceRequest& request, const ConfirmProductInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyFpgaImageAsyncHelper(const Model::CopyFpgaImageRequest& request, const CopyFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyImageAsyncHelper(const Model::CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopySnapshotAsyncHelper(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomerGatewayAsyncHelper(const Model::CreateCustomerGatewayRequest& request, const CreateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDefaultVpcAsyncHelper(const Model::CreateDefaultVpcRequest& request, const CreateDefaultVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDhcpOptionsAsyncHelper(const Model::CreateDhcpOptionsRequest& request, const CreateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEgressOnlyInternetGatewayAsyncHelper(const Model::CreateEgressOnlyInternetGatewayRequest& request, const CreateEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFlowLogsAsyncHelper(const Model::CreateFlowLogsRequest& request, const CreateFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFpgaImageAsyncHelper(const Model::CreateFpgaImageRequest& request, const CreateFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImageAsyncHelper(const Model::CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstanceExportTaskAsyncHelper(const Model::CreateInstanceExportTaskRequest& request, const CreateInstanceExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInternetGatewayAsyncHelper(const Model::CreateInternetGatewayRequest& request, const CreateInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateKeyPairAsyncHelper(const Model::CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNatGatewayAsyncHelper(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkAclAsyncHelper(const Model::CreateNetworkAclRequest& request, const CreateNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkAclEntryAsyncHelper(const Model::CreateNetworkAclEntryRequest& request, const CreateNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkInterfaceAsyncHelper(const Model::CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkInterfacePermissionAsyncHelper(const Model::CreateNetworkInterfacePermissionRequest& request, const CreateNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlacementGroupAsyncHelper(const Model::CreatePlacementGroupRequest& request, const CreatePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReservedInstancesListingAsyncHelper(const Model::CreateReservedInstancesListingRequest& request, const CreateReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRouteAsyncHelper(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRouteTableAsyncHelper(const Model::CreateRouteTableRequest& request, const CreateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSecurityGroupAsyncHelper(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSnapshotAsyncHelper(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSpotDatafeedSubscriptionAsyncHelper(const Model::CreateSpotDatafeedSubscriptionRequest& request, const CreateSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSubnetAsyncHelper(const Model::CreateSubnetRequest& request, const CreateSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVolumeAsyncHelper(const Model::CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVpcAsyncHelper(const Model::CreateVpcRequest& request, const CreateVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVpcEndpointAsyncHelper(const Model::CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVpcPeeringConnectionAsyncHelper(const Model::CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVpnConnectionAsyncHelper(const Model::CreateVpnConnectionRequest& request, const CreateVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVpnConnectionRouteAsyncHelper(const Model::CreateVpnConnectionRouteRequest& request, const CreateVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVpnGatewayAsyncHelper(const Model::CreateVpnGatewayRequest& request, const CreateVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomerGatewayAsyncHelper(const Model::DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDhcpOptionsAsyncHelper(const Model::DeleteDhcpOptionsRequest& request, const DeleteDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEgressOnlyInternetGatewayAsyncHelper(const Model::DeleteEgressOnlyInternetGatewayRequest& request, const DeleteEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFlowLogsAsyncHelper(const Model::DeleteFlowLogsRequest& request, const DeleteFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFpgaImageAsyncHelper(const Model::DeleteFpgaImageRequest& request, const DeleteFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInternetGatewayAsyncHelper(const Model::DeleteInternetGatewayRequest& request, const DeleteInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteKeyPairAsyncHelper(const Model::DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNatGatewayAsyncHelper(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNetworkAclAsyncHelper(const Model::DeleteNetworkAclRequest& request, const DeleteNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNetworkAclEntryAsyncHelper(const Model::DeleteNetworkAclEntryRequest& request, const DeleteNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNetworkInterfaceAsyncHelper(const Model::DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNetworkInterfacePermissionAsyncHelper(const Model::DeleteNetworkInterfacePermissionRequest& request, const DeleteNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePlacementGroupAsyncHelper(const Model::DeletePlacementGroupRequest& request, const DeletePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteAsyncHelper(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteTableAsyncHelper(const Model::DeleteRouteTableRequest& request, const DeleteRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSecurityGroupAsyncHelper(const Model::DeleteSecurityGroupRequest& request, const DeleteSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSnapshotAsyncHelper(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSpotDatafeedSubscriptionAsyncHelper(const Model::DeleteSpotDatafeedSubscriptionRequest& request, const DeleteSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSubnetAsyncHelper(const Model::DeleteSubnetRequest& request, const DeleteSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVolumeAsyncHelper(const Model::DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVpcAsyncHelper(const Model::DeleteVpcRequest& request, const DeleteVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVpcEndpointsAsyncHelper(const Model::DeleteVpcEndpointsRequest& request, const DeleteVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVpcPeeringConnectionAsyncHelper(const Model::DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVpnConnectionAsyncHelper(const Model::DeleteVpnConnectionRequest& request, const DeleteVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVpnConnectionRouteAsyncHelper(const Model::DeleteVpnConnectionRouteRequest& request, const DeleteVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVpnGatewayAsyncHelper(const Model::DeleteVpnGatewayRequest& request, const DeleteVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterImageAsyncHelper(const Model::DeregisterImageRequest& request, const DeregisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAttributesAsyncHelper(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAddressesAsyncHelper(const Model::DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAvailabilityZonesAsyncHelper(const Model::DescribeAvailabilityZonesRequest& request, const DescribeAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBundleTasksAsyncHelper(const Model::DescribeBundleTasksRequest& request, const DescribeBundleTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClassicLinkInstancesAsyncHelper(const Model::DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConversionTasksAsyncHelper(const Model::DescribeConversionTasksRequest& request, const DescribeConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCustomerGatewaysAsyncHelper(const Model::DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDhcpOptionsAsyncHelper(const Model::DescribeDhcpOptionsRequest& request, const DescribeDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEgressOnlyInternetGatewaysAsyncHelper(const Model::DescribeEgressOnlyInternetGatewaysRequest& request, const DescribeEgressOnlyInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeElasticGpusAsyncHelper(const Model::DescribeElasticGpusRequest& request, const DescribeElasticGpusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExportTasksAsyncHelper(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFlowLogsAsyncHelper(const Model::DescribeFlowLogsRequest& request, const DescribeFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFpgaImageAttributeAsyncHelper(const Model::DescribeFpgaImageAttributeRequest& request, const DescribeFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFpgaImagesAsyncHelper(const Model::DescribeFpgaImagesRequest& request, const DescribeFpgaImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHostReservationOfferingsAsyncHelper(const Model::DescribeHostReservationOfferingsRequest& request, const DescribeHostReservationOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHostReservationsAsyncHelper(const Model::DescribeHostReservationsRequest& request, const DescribeHostReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHostsAsyncHelper(const Model::DescribeHostsRequest& request, const DescribeHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIamInstanceProfileAssociationsAsyncHelper(const Model::DescribeIamInstanceProfileAssociationsRequest& request, const DescribeIamInstanceProfileAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIdFormatAsyncHelper(const Model::DescribeIdFormatRequest& request, const DescribeIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIdentityIdFormatAsyncHelper(const Model::DescribeIdentityIdFormatRequest& request, const DescribeIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImageAttributeAsyncHelper(const Model::DescribeImageAttributeRequest& request, const DescribeImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImagesAsyncHelper(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImportImageTasksAsyncHelper(const Model::DescribeImportImageTasksRequest& request, const DescribeImportImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImportSnapshotTasksAsyncHelper(const Model::DescribeImportSnapshotTasksRequest& request, const DescribeImportSnapshotTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceAttributeAsyncHelper(const Model::DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceStatusAsyncHelper(const Model::DescribeInstanceStatusRequest& request, const DescribeInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstancesAsyncHelper(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInternetGatewaysAsyncHelper(const Model::DescribeInternetGatewaysRequest& request, const DescribeInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeKeyPairsAsyncHelper(const Model::DescribeKeyPairsRequest& request, const DescribeKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMovingAddressesAsyncHelper(const Model::DescribeMovingAddressesRequest& request, const DescribeMovingAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNatGatewaysAsyncHelper(const Model::DescribeNatGatewaysRequest& request, const DescribeNatGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNetworkAclsAsyncHelper(const Model::DescribeNetworkAclsRequest& request, const DescribeNetworkAclsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNetworkInterfaceAttributeAsyncHelper(const Model::DescribeNetworkInterfaceAttributeRequest& request, const DescribeNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNetworkInterfacePermissionsAsyncHelper(const Model::DescribeNetworkInterfacePermissionsRequest& request, const DescribeNetworkInterfacePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNetworkInterfacesAsyncHelper(const Model::DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePlacementGroupsAsyncHelper(const Model::DescribePlacementGroupsRequest& request, const DescribePlacementGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePrefixListsAsyncHelper(const Model::DescribePrefixListsRequest& request, const DescribePrefixListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRegionsAsyncHelper(const Model::DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedInstancesAsyncHelper(const Model::DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedInstancesListingsAsyncHelper(const Model::DescribeReservedInstancesListingsRequest& request, const DescribeReservedInstancesListingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedInstancesModificationsAsyncHelper(const Model::DescribeReservedInstancesModificationsRequest& request, const DescribeReservedInstancesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservedInstancesOfferingsAsyncHelper(const Model::DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRouteTablesAsyncHelper(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScheduledInstanceAvailabilityAsyncHelper(const Model::DescribeScheduledInstanceAvailabilityRequest& request, const DescribeScheduledInstanceAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScheduledInstancesAsyncHelper(const Model::DescribeScheduledInstancesRequest& request, const DescribeScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSecurityGroupReferencesAsyncHelper(const Model::DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSecurityGroupsAsyncHelper(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSnapshotAttributeAsyncHelper(const Model::DescribeSnapshotAttributeRequest& request, const DescribeSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSnapshotsAsyncHelper(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSpotDatafeedSubscriptionAsyncHelper(const Model::DescribeSpotDatafeedSubscriptionRequest& request, const DescribeSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSpotFleetInstancesAsyncHelper(const Model::DescribeSpotFleetInstancesRequest& request, const DescribeSpotFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSpotFleetRequestHistoryAsyncHelper(const Model::DescribeSpotFleetRequestHistoryRequest& request, const DescribeSpotFleetRequestHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSpotFleetRequestsAsyncHelper(const Model::DescribeSpotFleetRequestsRequest& request, const DescribeSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSpotInstanceRequestsAsyncHelper(const Model::DescribeSpotInstanceRequestsRequest& request, const DescribeSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSpotPriceHistoryAsyncHelper(const Model::DescribeSpotPriceHistoryRequest& request, const DescribeSpotPriceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStaleSecurityGroupsAsyncHelper(const Model::DescribeStaleSecurityGroupsRequest& request, const DescribeStaleSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubnetsAsyncHelper(const Model::DescribeSubnetsRequest& request, const DescribeSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVolumeAttributeAsyncHelper(const Model::DescribeVolumeAttributeRequest& request, const DescribeVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVolumeStatusAsyncHelper(const Model::DescribeVolumeStatusRequest& request, const DescribeVolumeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVolumesAsyncHelper(const Model::DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVolumesModificationsAsyncHelper(const Model::DescribeVolumesModificationsRequest& request, const DescribeVolumesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpcAttributeAsyncHelper(const Model::DescribeVpcAttributeRequest& request, const DescribeVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpcClassicLinkAsyncHelper(const Model::DescribeVpcClassicLinkRequest& request, const DescribeVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpcClassicLinkDnsSupportAsyncHelper(const Model::DescribeVpcClassicLinkDnsSupportRequest& request, const DescribeVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpcEndpointServicesAsyncHelper(const Model::DescribeVpcEndpointServicesRequest& request, const DescribeVpcEndpointServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpcEndpointsAsyncHelper(const Model::DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpcPeeringConnectionsAsyncHelper(const Model::DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpcsAsyncHelper(const Model::DescribeVpcsRequest& request, const DescribeVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpnConnectionsAsyncHelper(const Model::DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpnGatewaysAsyncHelper(const Model::DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachClassicLinkVpcAsyncHelper(const Model::DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachInternetGatewayAsyncHelper(const Model::DetachInternetGatewayRequest& request, const DetachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachNetworkInterfaceAsyncHelper(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachVolumeAsyncHelper(const Model::DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachVpnGatewayAsyncHelper(const Model::DetachVpnGatewayRequest& request, const DetachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableVgwRoutePropagationAsyncHelper(const Model::DisableVgwRoutePropagationRequest& request, const DisableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableVpcClassicLinkAsyncHelper(const Model::DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableVpcClassicLinkDnsSupportAsyncHelper(const Model::DisableVpcClassicLinkDnsSupportRequest& request, const DisableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateAddressAsyncHelper(const Model::DisassociateAddressRequest& request, const DisassociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateIamInstanceProfileAsyncHelper(const Model::DisassociateIamInstanceProfileRequest& request, const DisassociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateRouteTableAsyncHelper(const Model::DisassociateRouteTableRequest& request, const DisassociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateSubnetCidrBlockAsyncHelper(const Model::DisassociateSubnetCidrBlockRequest& request, const DisassociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateVpcCidrBlockAsyncHelper(const Model::DisassociateVpcCidrBlockRequest& request, const DisassociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableVgwRoutePropagationAsyncHelper(const Model::EnableVgwRoutePropagationRequest& request, const EnableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableVolumeIOAsyncHelper(const Model::EnableVolumeIORequest& request, const EnableVolumeIOResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableVpcClassicLinkAsyncHelper(const Model::EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableVpcClassicLinkDnsSupportAsyncHelper(const Model::EnableVpcClassicLinkDnsSupportRequest& request, const EnableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConsoleOutputAsyncHelper(const Model::GetConsoleOutputRequest& request, const GetConsoleOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConsoleScreenshotAsyncHelper(const Model::GetConsoleScreenshotRequest& request, const GetConsoleScreenshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHostReservationPurchasePreviewAsyncHelper(const Model::GetHostReservationPurchasePreviewRequest& request, const GetHostReservationPurchasePreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPasswordDataAsyncHelper(const Model::GetPasswordDataRequest& request, const GetPasswordDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReservedInstancesExchangeQuoteAsyncHelper(const Model::GetReservedInstancesExchangeQuoteRequest& request, const GetReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportImageAsyncHelper(const Model::ImportImageRequest& request, const ImportImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportInstanceAsyncHelper(const Model::ImportInstanceRequest& request, const ImportInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportKeyPairAsyncHelper(const Model::ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportSnapshotAsyncHelper(const Model::ImportSnapshotRequest& request, const ImportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportVolumeAsyncHelper(const Model::ImportVolumeRequest& request, const ImportVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyFpgaImageAttributeAsyncHelper(const Model::ModifyFpgaImageAttributeRequest& request, const ModifyFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyHostsAsyncHelper(const Model::ModifyHostsRequest& request, const ModifyHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyIdFormatAsyncHelper(const Model::ModifyIdFormatRequest& request, const ModifyIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyIdentityIdFormatAsyncHelper(const Model::ModifyIdentityIdFormatRequest& request, const ModifyIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyImageAttributeAsyncHelper(const Model::ModifyImageAttributeRequest& request, const ModifyImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyInstanceAttributeAsyncHelper(const Model::ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyInstancePlacementAsyncHelper(const Model::ModifyInstancePlacementRequest& request, const ModifyInstancePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyNetworkInterfaceAttributeAsyncHelper(const Model::ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyReservedInstancesAsyncHelper(const Model::ModifyReservedInstancesRequest& request, const ModifyReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifySnapshotAttributeAsyncHelper(const Model::ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifySpotFleetRequestAsyncHelper(const Model::ModifySpotFleetRequestRequest& request, const ModifySpotFleetRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifySubnetAttributeAsyncHelper(const Model::ModifySubnetAttributeRequest& request, const ModifySubnetAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyVolumeAsyncHelper(const Model::ModifyVolumeRequest& request, const ModifyVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyVolumeAttributeAsyncHelper(const Model::ModifyVolumeAttributeRequest& request, const ModifyVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyVpcAttributeAsyncHelper(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyVpcEndpointAsyncHelper(const Model::ModifyVpcEndpointRequest& request, const ModifyVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyVpcPeeringConnectionOptionsAsyncHelper(const Model::ModifyVpcPeeringConnectionOptionsRequest& request, const ModifyVpcPeeringConnectionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MonitorInstancesAsyncHelper(const Model::MonitorInstancesRequest& request, const MonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MoveAddressToVpcAsyncHelper(const Model::MoveAddressToVpcRequest& request, const MoveAddressToVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseHostReservationAsyncHelper(const Model::PurchaseHostReservationRequest& request, const PurchaseHostReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseReservedInstancesOfferingAsyncHelper(const Model::PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseScheduledInstancesAsyncHelper(const Model::PurchaseScheduledInstancesRequest& request, const PurchaseScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootInstancesAsyncHelper(const Model::RebootInstancesRequest& request, const RebootInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterImageAsyncHelper(const Model::RegisterImageRequest& request, const RegisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectVpcPeeringConnectionAsyncHelper(const Model::RejectVpcPeeringConnectionRequest& request, const RejectVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReleaseAddressAsyncHelper(const Model::ReleaseAddressRequest& request, const ReleaseAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReleaseHostsAsyncHelper(const Model::ReleaseHostsRequest& request, const ReleaseHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReplaceIamInstanceProfileAssociationAsyncHelper(const Model::ReplaceIamInstanceProfileAssociationRequest& request, const ReplaceIamInstanceProfileAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReplaceNetworkAclAssociationAsyncHelper(const Model::ReplaceNetworkAclAssociationRequest& request, const ReplaceNetworkAclAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReplaceNetworkAclEntryAsyncHelper(const Model::ReplaceNetworkAclEntryRequest& request, const ReplaceNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReplaceRouteAsyncHelper(const Model::ReplaceRouteRequest& request, const ReplaceRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReplaceRouteTableAssociationAsyncHelper(const Model::ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReportInstanceStatusAsyncHelper(const Model::ReportInstanceStatusRequest& request, const ReportInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestSpotFleetAsyncHelper(const Model::RequestSpotFleetRequest& request, const RequestSpotFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestSpotInstancesAsyncHelper(const Model::RequestSpotInstancesRequest& request, const RequestSpotInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetFpgaImageAttributeAsyncHelper(const Model::ResetFpgaImageAttributeRequest& request, const ResetFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetImageAttributeAsyncHelper(const Model::ResetImageAttributeRequest& request, const ResetImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetInstanceAttributeAsyncHelper(const Model::ResetInstanceAttributeRequest& request, const ResetInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetNetworkInterfaceAttributeAsyncHelper(const Model::ResetNetworkInterfaceAttributeRequest& request, const ResetNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetSnapshotAttributeAsyncHelper(const Model::ResetSnapshotAttributeRequest& request, const ResetSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreAddressToClassicAsyncHelper(const Model::RestoreAddressToClassicRequest& request, const RestoreAddressToClassicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeSecurityGroupEgressAsyncHelper(const Model::RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeSecurityGroupIngressAsyncHelper(const Model::RevokeSecurityGroupIngressRequest& request, const RevokeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RunInstancesAsyncHelper(const Model::RunInstancesRequest& request, const RunInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RunScheduledInstancesAsyncHelper(const Model::RunScheduledInstancesRequest& request, const RunScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartInstancesAsyncHelper(const Model::StartInstancesRequest& request, const StartInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopInstancesAsyncHelper(const Model::StopInstancesRequest& request, const StopInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateInstancesAsyncHelper(const Model::TerminateInstancesRequest& request, const TerminateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnassignIpv6AddressesAsyncHelper(const Model::UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnassignPrivateIpAddressesAsyncHelper(const Model::UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnmonitorInstancesAsyncHelper(const Model::UnmonitorInstancesRequest& request, const UnmonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSecurityGroupRuleDescriptionsEgressAsyncHelper(const Model::UpdateSecurityGroupRuleDescriptionsEgressRequest& request, const UpdateSecurityGroupRuleDescriptionsEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSecurityGroupRuleDescriptionsIngressAsyncHelper(const Model::UpdateSecurityGroupRuleDescriptionsIngressRequest& request, const UpdateSecurityGroupRuleDescriptionsIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EC2
} // namespace Aws
