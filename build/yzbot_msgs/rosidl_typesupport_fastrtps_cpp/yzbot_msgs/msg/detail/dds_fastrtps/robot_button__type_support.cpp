// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from yzbot_msgs:msg/RobotButton.idl
// generated code does not contain a copyright notice
#include "yzbot_msgs/msg/detail/robot_button__rosidl_typesupport_fastrtps_cpp.hpp"
#include "yzbot_msgs/msg/detail/robot_button__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace yzbot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yzbot_msgs
cdr_serialize(
  const yzbot_msgs::msg::RobotButton & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: button_audio
  cdr << ros_message.button_audio;
  // Member: button_power
  cdr << ros_message.button_power;
  // Member: zs
  cdr << ros_message.zs;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yzbot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yzbot_msgs::msg::RobotButton & ros_message)
{
  // Member: button_audio
  cdr >> ros_message.button_audio;

  // Member: button_power
  cdr >> ros_message.button_power;

  // Member: zs
  cdr >> ros_message.zs;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yzbot_msgs
get_serialized_size(
  const yzbot_msgs::msg::RobotButton & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: button_audio
  {
    size_t item_size = sizeof(ros_message.button_audio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_power
  {
    size_t item_size = sizeof(ros_message.button_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zs
  {
    size_t item_size = sizeof(ros_message.zs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yzbot_msgs
max_serialized_size_RobotButton(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: button_audio
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: button_power
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: zs
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RobotButton__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const yzbot_msgs::msg::RobotButton *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotButton__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<yzbot_msgs::msg::RobotButton *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotButton__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const yzbot_msgs::msg::RobotButton *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotButton__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotButton(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotButton__callbacks = {
  "yzbot_msgs::msg",
  "RobotButton",
  _RobotButton__cdr_serialize,
  _RobotButton__cdr_deserialize,
  _RobotButton__get_serialized_size,
  _RobotButton__max_serialized_size
};

static rosidl_message_type_support_t _RobotButton__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotButton__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace yzbot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_yzbot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<yzbot_msgs::msg::RobotButton>()
{
  return &yzbot_msgs::msg::typesupport_fastrtps_cpp::_RobotButton__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yzbot_msgs, msg, RobotButton)() {
  return &yzbot_msgs::msg::typesupport_fastrtps_cpp::_RobotButton__handle;
}

#ifdef __cplusplus
}
#endif
