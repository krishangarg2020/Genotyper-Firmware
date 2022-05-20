# import pytest

from gero import configuration


def test_name_not_on_robot():
    """test if IS_ROBOT is False"""
    IS_ROBOT: bool = configuration.IS_ROBOT
    configuration.IS_ROBOT = False

    assert configuration.name() == 'gero-dev'
    configuration.IS_ROBOT = IS_ROBOT
