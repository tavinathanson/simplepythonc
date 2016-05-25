# simplepythonc
Example of the simplest possible C extensions for Python.

Run `python setup.py install`, which will both `build` and `install` the C extension. No further compilation is necessary.

Afterwards, within a Python environment, you should be able to run:

```
import simplepythonc
simplepythonc.simple_method()
```
