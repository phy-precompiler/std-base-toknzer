from setuptools import setup, Extension

setup(
    name="_tokenizemodule",
    version="0.1",
    ext_modules=[Extension("_tokenizemodule", ["Python-tokenize.c"])],
)
