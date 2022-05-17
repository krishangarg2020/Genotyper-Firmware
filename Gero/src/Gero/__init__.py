#  Copyright (c) Technoculture Research, 2022. All rights reserved.

import logging
from util.logger import setup_logging


if __name__ == '__main__':
    print("Initializing the Library")
    setup_logging()

    log = logging.getLogger(__name__)
    log.debug("hello")
