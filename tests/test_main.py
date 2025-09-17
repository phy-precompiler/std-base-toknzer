# pylint: disable=missing-function-docstring,unused-import
""" main test cases """
# imports
from pprint import pprint
import pytest


# @pytest.mark.skip()
def test_mod_avaiable():
    # pylint: disable=import-outside-toplevel
    import std_base_toknzer
    pprint(std_base_toknzer.__dict__)
