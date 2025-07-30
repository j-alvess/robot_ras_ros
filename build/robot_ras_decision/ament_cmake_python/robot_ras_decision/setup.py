from setuptools import find_packages
from setuptools import setup

setup(
    name='robot_ras_decision',
    version='0.0.0',
    packages=find_packages(
        include=('robot_ras_decision', 'robot_ras_decision.*')),
)
