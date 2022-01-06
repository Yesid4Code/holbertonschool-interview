#!/usr/bin/python3
''''
This file contain a function to check if boxes can be opened.
'''


def searchkey(boxes, idx):
    """Found the key of a box"""
    i = 0

    for box in boxes:
        if i != idx and idx in box:
            return True
        i += 1
    return False


def canUnlockAll(boxes):
    """
    Method that determines if all boxes can be openend.
    Args:
        boxes: list of list. The content of the lists are the keys.
    Return:
        True if all boxes can be openen, False otherwise.
    """

    for idx in range(len(boxes)):
        if idx != 0 and not searchkey(boxes, idx):
            return False
    return True
