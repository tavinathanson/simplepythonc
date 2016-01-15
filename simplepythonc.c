#include <Python/Python.h>

static PyObject *
simple_method(PyObject *self, PyObject *args) {
  return PyInt_FromLong(0L);
}

static PyMethodDef SimpleMethods[] = {
  {"simple_method",  simple_method, METH_VARARGS,
   "A dummy method."},
  {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC
initsimplepythonc(void) {
  (void) Py_InitModule("simplepythonc", SimpleMethods);
}
