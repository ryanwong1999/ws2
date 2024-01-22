// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yzbot_msgs:msg/PscKeyHeadControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yzbot_msgs/msg/detail/psc_key_head_control__rosidl_typesupport_introspection_c.h"
#include "yzbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yzbot_msgs/msg/detail/psc_key_head_control__functions.h"
#include "yzbot_msgs/msg/detail/psc_key_head_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yzbot_msgs__msg__PscKeyHeadControl__init(message_memory);
}

void PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_fini_function(void * message_memory)
{
  yzbot_msgs__msg__PscKeyHeadControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_message_member_array[1] = {
  {
    "psc_head_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yzbot_msgs__msg__PscKeyHeadControl, psc_head_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_message_members = {
  "yzbot_msgs__msg",  // message namespace
  "PscKeyHeadControl",  // message name
  1,  // number of fields
  sizeof(yzbot_msgs__msg__PscKeyHeadControl),
  PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_message_member_array,  // message members
  PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_init_function,  // function to initialize message memory (memory has to be allocated)
  PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_message_type_support_handle = {
  0,
  &PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yzbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yzbot_msgs, msg, PscKeyHeadControl)() {
  if (!PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_message_type_support_handle.typesupport_identifier) {
    PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PscKeyHeadControl__rosidl_typesupport_introspection_c__PscKeyHeadControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
