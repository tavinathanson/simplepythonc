from distutils.core import setup, Extension

simplepythonc = Extension('simplepythonc',
                          sources = ['simplepythonc.c'])

setup(name = 'simplepythonc',
      version = '0.0.0',
      description = 'An example of a simple C extension for Python',
      ext_modules = [simplepythonc])
