#!/usr/bin/python3
''''
This file contain a function to check if boxes can be opened.
'''


def searchkey(boxes, idx):
    i = 0
    keys = []
    for box in boxes:
        if i == idx:
            i += 1
            continue
        for key in box:
            if key not in keys:
                keys.append(key)
        i += 1
    return keys


def canUnlockAll(boxes):
    """
    Method that determines if all boxes can be openend.
    Args:
        boxes: list of list. The content of the lists are the keys.
    Return:
        True if all boxes can be openen, False otherwise.
    """
    index_keys = {}

    for idx in range(len(boxes)):
        if idx != 0:
            index_keys[idx] = searchkey(boxes, idx)
        idx += 1

    i = 0
    for key, values in index_keys.items():
        if key not in values:
            return False
        i += 1
    return True
