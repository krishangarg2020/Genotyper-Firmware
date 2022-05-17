#  Copyright (c) Technoculture Research, 2022. All rights reserved.

import pytest

import config
import gero.config


def test_name_not_on_robot():
    """test if IS_ROBOT is False"""
    IS_ROBOT = config.IS_ROBOT
    config.IS_ROBOT = False

    assert config.name() == 'gero-dev'
    config.IS_ROBOT = IS_ROBOT
