from setuptools import find_packages
from setuptools import setup

setup(
    name='count_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('count_interfaces', 'count_interfaces.*')),
)
