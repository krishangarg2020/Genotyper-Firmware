#  Copyright (c) Technoculture Research, 2022. All rights reserved.
import logging

log = logging.getLogger(__name__)


def goto(pos: int) -> None:
    """go to the position pos
    :arg pos: position in an int form
    """
    log.debug(f"go to {pos}")
