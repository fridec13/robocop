// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/ServicesForType.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__SERVICES_FOR_TYPE__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__SERVICES_FOR_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/services_for_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_ServicesForType_Request_type
{
public:
  Init_ServicesForType_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::ServicesForType_Request type(::rosapi_msgs::srv::ServicesForType_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::ServicesForType_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::ServicesForType_Request>()
{
  return rosapi_msgs::srv::builder::Init_ServicesForType_Request_type();
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_ServicesForType_Response_services
{
public:
  Init_ServicesForType_Response_services()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::ServicesForType_Response services(::rosapi_msgs::srv::ServicesForType_Response::_services_type arg)
  {
    msg_.services = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::ServicesForType_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::ServicesForType_Response>()
{
  return rosapi_msgs::srv::builder::Init_ServicesForType_Response_services();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__SERVICES_FOR_TYPE__BUILDER_HPP_
