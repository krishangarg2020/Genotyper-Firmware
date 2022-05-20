# import pytest

from gero import config


def test_name_not_on_robot():
    """test if IS_ROBOT is False"""
    IS_ROBOT: bool = config.IS_ROBOT
    config.IS_ROBOT = False

    assert config.name() == 'gero-dev'
    config.IS_ROBOT = IS_ROBOT
