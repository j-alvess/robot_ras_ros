// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from count_interfaces:action/Count.idl
// generated code does not contain a copyright notice
#include "count_interfaces/action/detail/count__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
count_interfaces__action__Count_Goal__init(count_interfaces__action__Count_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // limit
  return true;
}

void
count_interfaces__action__Count_Goal__fini(count_interfaces__action__Count_Goal * msg)
{
  if (!msg) {
    return;
  }
  // limit
}

bool
count_interfaces__action__Count_Goal__are_equal(const count_interfaces__action__Count_Goal * lhs, const count_interfaces__action__Count_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // limit
  if (lhs->limit != rhs->limit) {
    return false;
  }
  return true;
}

bool
count_interfaces__action__Count_Goal__copy(
  const count_interfaces__action__Count_Goal * input,
  count_interfaces__action__Count_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // limit
  output->limit = input->limit;
  return true;
}

count_interfaces__action__Count_Goal *
count_interfaces__action__Count_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_Goal * msg = (count_interfaces__action__Count_Goal *)allocator.allocate(sizeof(count_interfaces__action__Count_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(count_interfaces__action__Count_Goal));
  bool success = count_interfaces__action__Count_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
count_interfaces__action__Count_Goal__destroy(count_interfaces__action__Count_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    count_interfaces__action__Count_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
count_interfaces__action__Count_Goal__Sequence__init(count_interfaces__action__Count_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_Goal * data = NULL;

  if (size) {
    data = (count_interfaces__action__Count_Goal *)allocator.zero_allocate(size, sizeof(count_interfaces__action__Count_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = count_interfaces__action__Count_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        count_interfaces__action__Count_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
count_interfaces__action__Count_Goal__Sequence__fini(count_interfaces__action__Count_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      count_interfaces__action__Count_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

count_interfaces__action__Count_Goal__Sequence *
count_interfaces__action__Count_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_Goal__Sequence * array = (count_interfaces__action__Count_Goal__Sequence *)allocator.allocate(sizeof(count_interfaces__action__Count_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = count_interfaces__action__Count_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
count_interfaces__action__Count_Goal__Sequence__destroy(count_interfaces__action__Count_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    count_interfaces__action__Count_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
count_interfaces__action__Count_Goal__Sequence__are_equal(const count_interfaces__action__Count_Goal__Sequence * lhs, const count_interfaces__action__Count_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!count_interfaces__action__Count_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
count_interfaces__action__Count_Goal__Sequence__copy(
  const count_interfaces__action__Count_Goal__Sequence * input,
  count_interfaces__action__Count_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(count_interfaces__action__Count_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    count_interfaces__action__Count_Goal * data =
      (count_interfaces__action__Count_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!count_interfaces__action__Count_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          count_interfaces__action__Count_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!count_interfaces__action__Count_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
count_interfaces__action__Count_Result__init(count_interfaces__action__Count_Result * msg)
{
  if (!msg) {
    return false;
  }
  // total
  return true;
}

void
count_interfaces__action__Count_Result__fini(count_interfaces__action__Count_Result * msg)
{
  if (!msg) {
    return;
  }
  // total
}

bool
count_interfaces__action__Count_Result__are_equal(const count_interfaces__action__Count_Result * lhs, const count_interfaces__action__Count_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // total
  if (lhs->total != rhs->total) {
    return false;
  }
  return true;
}

bool
count_interfaces__action__Count_Result__copy(
  const count_interfaces__action__Count_Result * input,
  count_interfaces__action__Count_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // total
  output->total = input->total;
  return true;
}

count_interfaces__action__Count_Result *
count_interfaces__action__Count_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_Result * msg = (count_interfaces__action__Count_Result *)allocator.allocate(sizeof(count_interfaces__action__Count_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(count_interfaces__action__Count_Result));
  bool success = count_interfaces__action__Count_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
count_interfaces__action__Count_Result__destroy(count_interfaces__action__Count_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    count_interfaces__action__Count_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
count_interfaces__action__Count_Result__Sequence__init(count_interfaces__action__Count_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_Result * data = NULL;

  if (size) {
    data = (count_interfaces__action__Count_Result *)allocator.zero_allocate(size, sizeof(count_interfaces__action__Count_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = count_interfaces__action__Count_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        count_interfaces__action__Count_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
count_interfaces__action__Count_Result__Sequence__fini(count_interfaces__action__Count_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      count_interfaces__action__Count_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

count_interfaces__action__Count_Result__Sequence *
count_interfaces__action__Count_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_Result__Sequence * array = (count_interfaces__action__Count_Result__Sequence *)allocator.allocate(sizeof(count_interfaces__action__Count_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = count_interfaces__action__Count_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
count_interfaces__action__Count_Result__Sequence__destroy(count_interfaces__action__Count_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    count_interfaces__action__Count_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
count_interfaces__action__Count_Result__Sequence__are_equal(const count_interfaces__action__Count_Result__Sequence * lhs, const count_interfaces__action__Count_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!count_interfaces__action__Count_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
count_interfaces__action__Count_Result__Sequence__copy(
  const count_interfaces__action__Count_Result__Sequence * input,
  count_interfaces__action__Count_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(count_interfaces__action__Count_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    count_interfaces__action__Count_Result * data =
      (count_interfaces__action__Count_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!count_interfaces__action__Count_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          count_interfaces__action__Count_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!count_interfaces__action__Count_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
count_interfaces__action__Count_Feedback__init(count_interfaces__action__Count_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current
  return true;
}

void
count_interfaces__action__Count_Feedback__fini(count_interfaces__action__Count_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current
}

bool
count_interfaces__action__Count_Feedback__are_equal(const count_interfaces__action__Count_Feedback * lhs, const count_interfaces__action__Count_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  return true;
}

bool
count_interfaces__action__Count_Feedback__copy(
  const count_interfaces__action__Count_Feedback * input,
  count_interfaces__action__Count_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current
  output->current = input->current;
  return true;
}

count_interfaces__action__Count_Feedback *
count_interfaces__action__Count_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_Feedback * msg = (count_interfaces__action__Count_Feedback *)allocator.allocate(sizeof(count_interfaces__action__Count_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(count_interfaces__action__Count_Feedback));
  bool success = count_interfaces__action__Count_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
count_interfaces__action__Count_Feedback__destroy(count_interfaces__action__Count_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    count_interfaces__action__Count_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
count_interfaces__action__Count_Feedback__Sequence__init(count_interfaces__action__Count_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_Feedback * data = NULL;

  if (size) {
    data = (count_interfaces__action__Count_Feedback *)allocator.zero_allocate(size, sizeof(count_interfaces__action__Count_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = count_interfaces__action__Count_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        count_interfaces__action__Count_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
count_interfaces__action__Count_Feedback__Sequence__fini(count_interfaces__action__Count_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      count_interfaces__action__Count_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

count_interfaces__action__Count_Feedback__Sequence *
count_interfaces__action__Count_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_Feedback__Sequence * array = (count_interfaces__action__Count_Feedback__Sequence *)allocator.allocate(sizeof(count_interfaces__action__Count_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = count_interfaces__action__Count_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
count_interfaces__action__Count_Feedback__Sequence__destroy(count_interfaces__action__Count_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    count_interfaces__action__Count_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
count_interfaces__action__Count_Feedback__Sequence__are_equal(const count_interfaces__action__Count_Feedback__Sequence * lhs, const count_interfaces__action__Count_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!count_interfaces__action__Count_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
count_interfaces__action__Count_Feedback__Sequence__copy(
  const count_interfaces__action__Count_Feedback__Sequence * input,
  count_interfaces__action__Count_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(count_interfaces__action__Count_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    count_interfaces__action__Count_Feedback * data =
      (count_interfaces__action__Count_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!count_interfaces__action__Count_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          count_interfaces__action__Count_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!count_interfaces__action__Count_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "count_interfaces/action/detail/count__functions.h"

bool
count_interfaces__action__Count_SendGoal_Request__init(count_interfaces__action__Count_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    count_interfaces__action__Count_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!count_interfaces__action__Count_Goal__init(&msg->goal)) {
    count_interfaces__action__Count_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
count_interfaces__action__Count_SendGoal_Request__fini(count_interfaces__action__Count_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  count_interfaces__action__Count_Goal__fini(&msg->goal);
}

bool
count_interfaces__action__Count_SendGoal_Request__are_equal(const count_interfaces__action__Count_SendGoal_Request * lhs, const count_interfaces__action__Count_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!count_interfaces__action__Count_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
count_interfaces__action__Count_SendGoal_Request__copy(
  const count_interfaces__action__Count_SendGoal_Request * input,
  count_interfaces__action__Count_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!count_interfaces__action__Count_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

count_interfaces__action__Count_SendGoal_Request *
count_interfaces__action__Count_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_SendGoal_Request * msg = (count_interfaces__action__Count_SendGoal_Request *)allocator.allocate(sizeof(count_interfaces__action__Count_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(count_interfaces__action__Count_SendGoal_Request));
  bool success = count_interfaces__action__Count_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
count_interfaces__action__Count_SendGoal_Request__destroy(count_interfaces__action__Count_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    count_interfaces__action__Count_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
count_interfaces__action__Count_SendGoal_Request__Sequence__init(count_interfaces__action__Count_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_SendGoal_Request * data = NULL;

  if (size) {
    data = (count_interfaces__action__Count_SendGoal_Request *)allocator.zero_allocate(size, sizeof(count_interfaces__action__Count_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = count_interfaces__action__Count_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        count_interfaces__action__Count_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
count_interfaces__action__Count_SendGoal_Request__Sequence__fini(count_interfaces__action__Count_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      count_interfaces__action__Count_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

count_interfaces__action__Count_SendGoal_Request__Sequence *
count_interfaces__action__Count_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_SendGoal_Request__Sequence * array = (count_interfaces__action__Count_SendGoal_Request__Sequence *)allocator.allocate(sizeof(count_interfaces__action__Count_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = count_interfaces__action__Count_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
count_interfaces__action__Count_SendGoal_Request__Sequence__destroy(count_interfaces__action__Count_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    count_interfaces__action__Count_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
count_interfaces__action__Count_SendGoal_Request__Sequence__are_equal(const count_interfaces__action__Count_SendGoal_Request__Sequence * lhs, const count_interfaces__action__Count_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!count_interfaces__action__Count_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
count_interfaces__action__Count_SendGoal_Request__Sequence__copy(
  const count_interfaces__action__Count_SendGoal_Request__Sequence * input,
  count_interfaces__action__Count_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(count_interfaces__action__Count_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    count_interfaces__action__Count_SendGoal_Request * data =
      (count_interfaces__action__Count_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!count_interfaces__action__Count_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          count_interfaces__action__Count_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!count_interfaces__action__Count_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
count_interfaces__action__Count_SendGoal_Response__init(count_interfaces__action__Count_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    count_interfaces__action__Count_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
count_interfaces__action__Count_SendGoal_Response__fini(count_interfaces__action__Count_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
count_interfaces__action__Count_SendGoal_Response__are_equal(const count_interfaces__action__Count_SendGoal_Response * lhs, const count_interfaces__action__Count_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
count_interfaces__action__Count_SendGoal_Response__copy(
  const count_interfaces__action__Count_SendGoal_Response * input,
  count_interfaces__action__Count_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

count_interfaces__action__Count_SendGoal_Response *
count_interfaces__action__Count_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_SendGoal_Response * msg = (count_interfaces__action__Count_SendGoal_Response *)allocator.allocate(sizeof(count_interfaces__action__Count_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(count_interfaces__action__Count_SendGoal_Response));
  bool success = count_interfaces__action__Count_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
count_interfaces__action__Count_SendGoal_Response__destroy(count_interfaces__action__Count_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    count_interfaces__action__Count_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
count_interfaces__action__Count_SendGoal_Response__Sequence__init(count_interfaces__action__Count_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_SendGoal_Response * data = NULL;

  if (size) {
    data = (count_interfaces__action__Count_SendGoal_Response *)allocator.zero_allocate(size, sizeof(count_interfaces__action__Count_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = count_interfaces__action__Count_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        count_interfaces__action__Count_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
count_interfaces__action__Count_SendGoal_Response__Sequence__fini(count_interfaces__action__Count_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      count_interfaces__action__Count_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

count_interfaces__action__Count_SendGoal_Response__Sequence *
count_interfaces__action__Count_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_SendGoal_Response__Sequence * array = (count_interfaces__action__Count_SendGoal_Response__Sequence *)allocator.allocate(sizeof(count_interfaces__action__Count_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = count_interfaces__action__Count_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
count_interfaces__action__Count_SendGoal_Response__Sequence__destroy(count_interfaces__action__Count_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    count_interfaces__action__Count_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
count_interfaces__action__Count_SendGoal_Response__Sequence__are_equal(const count_interfaces__action__Count_SendGoal_Response__Sequence * lhs, const count_interfaces__action__Count_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!count_interfaces__action__Count_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
count_interfaces__action__Count_SendGoal_Response__Sequence__copy(
  const count_interfaces__action__Count_SendGoal_Response__Sequence * input,
  count_interfaces__action__Count_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(count_interfaces__action__Count_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    count_interfaces__action__Count_SendGoal_Response * data =
      (count_interfaces__action__Count_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!count_interfaces__action__Count_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          count_interfaces__action__Count_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!count_interfaces__action__Count_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
count_interfaces__action__Count_GetResult_Request__init(count_interfaces__action__Count_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    count_interfaces__action__Count_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
count_interfaces__action__Count_GetResult_Request__fini(count_interfaces__action__Count_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
count_interfaces__action__Count_GetResult_Request__are_equal(const count_interfaces__action__Count_GetResult_Request * lhs, const count_interfaces__action__Count_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
count_interfaces__action__Count_GetResult_Request__copy(
  const count_interfaces__action__Count_GetResult_Request * input,
  count_interfaces__action__Count_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

count_interfaces__action__Count_GetResult_Request *
count_interfaces__action__Count_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_GetResult_Request * msg = (count_interfaces__action__Count_GetResult_Request *)allocator.allocate(sizeof(count_interfaces__action__Count_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(count_interfaces__action__Count_GetResult_Request));
  bool success = count_interfaces__action__Count_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
count_interfaces__action__Count_GetResult_Request__destroy(count_interfaces__action__Count_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    count_interfaces__action__Count_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
count_interfaces__action__Count_GetResult_Request__Sequence__init(count_interfaces__action__Count_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_GetResult_Request * data = NULL;

  if (size) {
    data = (count_interfaces__action__Count_GetResult_Request *)allocator.zero_allocate(size, sizeof(count_interfaces__action__Count_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = count_interfaces__action__Count_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        count_interfaces__action__Count_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
count_interfaces__action__Count_GetResult_Request__Sequence__fini(count_interfaces__action__Count_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      count_interfaces__action__Count_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

count_interfaces__action__Count_GetResult_Request__Sequence *
count_interfaces__action__Count_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_GetResult_Request__Sequence * array = (count_interfaces__action__Count_GetResult_Request__Sequence *)allocator.allocate(sizeof(count_interfaces__action__Count_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = count_interfaces__action__Count_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
count_interfaces__action__Count_GetResult_Request__Sequence__destroy(count_interfaces__action__Count_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    count_interfaces__action__Count_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
count_interfaces__action__Count_GetResult_Request__Sequence__are_equal(const count_interfaces__action__Count_GetResult_Request__Sequence * lhs, const count_interfaces__action__Count_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!count_interfaces__action__Count_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
count_interfaces__action__Count_GetResult_Request__Sequence__copy(
  const count_interfaces__action__Count_GetResult_Request__Sequence * input,
  count_interfaces__action__Count_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(count_interfaces__action__Count_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    count_interfaces__action__Count_GetResult_Request * data =
      (count_interfaces__action__Count_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!count_interfaces__action__Count_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          count_interfaces__action__Count_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!count_interfaces__action__Count_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "count_interfaces/action/detail/count__functions.h"

bool
count_interfaces__action__Count_GetResult_Response__init(count_interfaces__action__Count_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!count_interfaces__action__Count_Result__init(&msg->result)) {
    count_interfaces__action__Count_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
count_interfaces__action__Count_GetResult_Response__fini(count_interfaces__action__Count_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  count_interfaces__action__Count_Result__fini(&msg->result);
}

bool
count_interfaces__action__Count_GetResult_Response__are_equal(const count_interfaces__action__Count_GetResult_Response * lhs, const count_interfaces__action__Count_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!count_interfaces__action__Count_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
count_interfaces__action__Count_GetResult_Response__copy(
  const count_interfaces__action__Count_GetResult_Response * input,
  count_interfaces__action__Count_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!count_interfaces__action__Count_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

count_interfaces__action__Count_GetResult_Response *
count_interfaces__action__Count_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_GetResult_Response * msg = (count_interfaces__action__Count_GetResult_Response *)allocator.allocate(sizeof(count_interfaces__action__Count_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(count_interfaces__action__Count_GetResult_Response));
  bool success = count_interfaces__action__Count_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
count_interfaces__action__Count_GetResult_Response__destroy(count_interfaces__action__Count_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    count_interfaces__action__Count_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
count_interfaces__action__Count_GetResult_Response__Sequence__init(count_interfaces__action__Count_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_GetResult_Response * data = NULL;

  if (size) {
    data = (count_interfaces__action__Count_GetResult_Response *)allocator.zero_allocate(size, sizeof(count_interfaces__action__Count_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = count_interfaces__action__Count_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        count_interfaces__action__Count_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
count_interfaces__action__Count_GetResult_Response__Sequence__fini(count_interfaces__action__Count_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      count_interfaces__action__Count_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

count_interfaces__action__Count_GetResult_Response__Sequence *
count_interfaces__action__Count_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_GetResult_Response__Sequence * array = (count_interfaces__action__Count_GetResult_Response__Sequence *)allocator.allocate(sizeof(count_interfaces__action__Count_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = count_interfaces__action__Count_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
count_interfaces__action__Count_GetResult_Response__Sequence__destroy(count_interfaces__action__Count_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    count_interfaces__action__Count_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
count_interfaces__action__Count_GetResult_Response__Sequence__are_equal(const count_interfaces__action__Count_GetResult_Response__Sequence * lhs, const count_interfaces__action__Count_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!count_interfaces__action__Count_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
count_interfaces__action__Count_GetResult_Response__Sequence__copy(
  const count_interfaces__action__Count_GetResult_Response__Sequence * input,
  count_interfaces__action__Count_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(count_interfaces__action__Count_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    count_interfaces__action__Count_GetResult_Response * data =
      (count_interfaces__action__Count_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!count_interfaces__action__Count_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          count_interfaces__action__Count_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!count_interfaces__action__Count_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "count_interfaces/action/detail/count__functions.h"

bool
count_interfaces__action__Count_FeedbackMessage__init(count_interfaces__action__Count_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    count_interfaces__action__Count_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!count_interfaces__action__Count_Feedback__init(&msg->feedback)) {
    count_interfaces__action__Count_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
count_interfaces__action__Count_FeedbackMessage__fini(count_interfaces__action__Count_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  count_interfaces__action__Count_Feedback__fini(&msg->feedback);
}

bool
count_interfaces__action__Count_FeedbackMessage__are_equal(const count_interfaces__action__Count_FeedbackMessage * lhs, const count_interfaces__action__Count_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!count_interfaces__action__Count_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
count_interfaces__action__Count_FeedbackMessage__copy(
  const count_interfaces__action__Count_FeedbackMessage * input,
  count_interfaces__action__Count_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!count_interfaces__action__Count_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

count_interfaces__action__Count_FeedbackMessage *
count_interfaces__action__Count_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_FeedbackMessage * msg = (count_interfaces__action__Count_FeedbackMessage *)allocator.allocate(sizeof(count_interfaces__action__Count_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(count_interfaces__action__Count_FeedbackMessage));
  bool success = count_interfaces__action__Count_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
count_interfaces__action__Count_FeedbackMessage__destroy(count_interfaces__action__Count_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    count_interfaces__action__Count_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
count_interfaces__action__Count_FeedbackMessage__Sequence__init(count_interfaces__action__Count_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_FeedbackMessage * data = NULL;

  if (size) {
    data = (count_interfaces__action__Count_FeedbackMessage *)allocator.zero_allocate(size, sizeof(count_interfaces__action__Count_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = count_interfaces__action__Count_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        count_interfaces__action__Count_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
count_interfaces__action__Count_FeedbackMessage__Sequence__fini(count_interfaces__action__Count_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      count_interfaces__action__Count_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

count_interfaces__action__Count_FeedbackMessage__Sequence *
count_interfaces__action__Count_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  count_interfaces__action__Count_FeedbackMessage__Sequence * array = (count_interfaces__action__Count_FeedbackMessage__Sequence *)allocator.allocate(sizeof(count_interfaces__action__Count_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = count_interfaces__action__Count_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
count_interfaces__action__Count_FeedbackMessage__Sequence__destroy(count_interfaces__action__Count_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    count_interfaces__action__Count_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
count_interfaces__action__Count_FeedbackMessage__Sequence__are_equal(const count_interfaces__action__Count_FeedbackMessage__Sequence * lhs, const count_interfaces__action__Count_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!count_interfaces__action__Count_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
count_interfaces__action__Count_FeedbackMessage__Sequence__copy(
  const count_interfaces__action__Count_FeedbackMessage__Sequence * input,
  count_interfaces__action__Count_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(count_interfaces__action__Count_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    count_interfaces__action__Count_FeedbackMessage * data =
      (count_interfaces__action__Count_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!count_interfaces__action__Count_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          count_interfaces__action__Count_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!count_interfaces__action__Count_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
