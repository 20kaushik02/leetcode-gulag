import random


# https://stackoverflow.com/questions/15993447/python-data-structure-for-efficient-add-remove-and-random-choice
class RandomizedSet:
    def __init__(self):
        self.store = []
        self.indices = {}

    def insert(self, val: int) -> bool:
        if val in self.indices:
            return False
        self.indices[val] = len(self.store)
        self.store.append(val)
        return True

    def remove(self, val: int) -> bool:
        if val not in self.indices:
            return False
        val_pos = self.indices.pop(val)
        last_val = self.store.pop()
        # if target was not at end, we popped something else
        # so overwrite target's position with it and update its pos
        # all O(1) operations
        if val_pos != len(self.store):
            self.store[val_pos] = last_val
            self.indices[last_val] = val_pos
        return True

    def getRandom(self) -> int:
        return random.choice(self.store)
