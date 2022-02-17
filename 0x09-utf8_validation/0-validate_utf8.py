#!/usr/bin/python3
"""
UTF-8 Validator
"""


def validUTF8(data):
    """
    method that determines if a given data set represents a
    valid UTF-8 encoding.
    args:
        @data: set to validate.
    Return:
        True if data set is a valid UTF-8 encoding.
        False otherwise.
    """
    try:
        bytes(number & 0xFF for number in data).decode()
        return True
    except UnicodeDecodeError:
        return False
