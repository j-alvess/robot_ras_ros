# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_ras_decision:srv/SetVelocity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetVelocity_Request(type):
    """Metaclass of message 'SetVelocity_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_ras_decision')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_ras_decision.srv.SetVelocity_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_velocity__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_velocity__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_velocity__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_velocity__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_velocity__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetVelocity_Request(metaclass=Metaclass_SetVelocity_Request):
    """Message class 'SetVelocity_Request'."""

    __slots__ = [
        '_linear_velocity',
    ]

    _fields_and_field_types = {
        'linear_velocity': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.linear_velocity = kwargs.get('linear_velocity', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.linear_velocity != other.linear_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def linear_velocity(self):
        """Message field 'linear_velocity'."""
        return self._linear_velocity

    @linear_velocity.setter
    def linear_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'linear_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._linear_velocity = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetVelocity_Response(type):
    """Metaclass of message 'SetVelocity_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_ras_decision')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_ras_decision.srv.SetVelocity_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_velocity__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_velocity__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_velocity__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_velocity__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_velocity__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetVelocity_Response(metaclass=Metaclass_SetVelocity_Response):
    """Message class 'SetVelocity_Response'."""

    __slots__ = [
        '_sucesso',
    ]

    _fields_and_field_types = {
        'sucesso': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sucesso = kwargs.get('sucesso', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.sucesso != other.sucesso:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sucesso(self):
        """Message field 'sucesso'."""
        return self._sucesso

    @sucesso.setter
    def sucesso(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sucesso' field must be of type 'bool'"
        self._sucesso = value


class Metaclass_SetVelocity(type):
    """Metaclass of service 'SetVelocity'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_ras_decision')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_ras_decision.srv.SetVelocity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_velocity

            from robot_ras_decision.srv import _set_velocity
            if _set_velocity.Metaclass_SetVelocity_Request._TYPE_SUPPORT is None:
                _set_velocity.Metaclass_SetVelocity_Request.__import_type_support__()
            if _set_velocity.Metaclass_SetVelocity_Response._TYPE_SUPPORT is None:
                _set_velocity.Metaclass_SetVelocity_Response.__import_type_support__()


class SetVelocity(metaclass=Metaclass_SetVelocity):
    from robot_ras_decision.srv._set_velocity import SetVelocity_Request as Request
    from robot_ras_decision.srv._set_velocity import SetVelocity_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
