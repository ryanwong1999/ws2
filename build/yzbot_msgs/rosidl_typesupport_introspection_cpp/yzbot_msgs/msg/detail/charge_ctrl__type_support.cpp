// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yzbot_msgs:msg/ChargeCtrl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yzbot_msgs/msg/detail/charge_ctrl__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace yzbot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ChargeCtrl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yzbot_msgs::msg::ChargeCtrl(_init);
}

void ChargeCtrl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yzbot_msgs::msg::ChargeCtrl *>(message_memory);
  typed_message->~ChargeCtrl();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChargeCtrl_message_member_array[1] = {
  {
    "auto_charge_flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yzbot_msgs::msg::ChargeCtrl, auto_charge_flag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChargeCtrl_message_members = {
  "yzbot_msgs::msg",  // message namespace
  "ChargeCtrl",  // message name
  1,  // number of fields
  sizeof(yzbot_msgs::msg::ChargeCtrl),
  ChargeCtrl_message_member_array,  // message members
  ChargeCtrl_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargeCtrl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChargeCtrl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChargeCtrl_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace yzbot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yzbot_msgs::msg::ChargeCtrl>()
{
  return &::yzbot_msgs::msg::rosidl_typesupport_introspection_cpp::ChargeCtrl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yzbot_msgs, msg, ChargeCtrl)() {
  return &::yzbot_msgs::msg::rosidl_typesupport_introspection_cpp::ChargeCtrl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
