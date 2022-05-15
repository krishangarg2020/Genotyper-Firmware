#  Copyright (c) Technoculture Research, 2022. All rights reserved.

# from dataclasses import dataclass
from typing import Protocol
# from gero.drivers.smoothie.controller import goto


# @dataclass
class Command(Protocol):
    """Protocol for defining a command"""

    def execute(self):
        """method to call in order to execute the Command."""
        ...


def init():
    # controller.goto(10)
    # goto(10)
    ...
