from setuptools import find_packages
from setuptools import setup

setup(
    name='pickbot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('pickbot_msgs', 'pickbot_msgs.*')),
)
