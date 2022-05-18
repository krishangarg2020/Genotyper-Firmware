#  Copyright (c) Technoculture Research, 2022. All rights reserved.
import logging
log = logging.getLogger(__name__)


def goto(pos: int) -> None:
    """got to a given position

    Args:
        pos (int): psoition as a number
    """

    log.debug(f"go to {pos}")
