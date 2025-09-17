/** module definition  */
#define PY_SSIZE_T_CLEAN

/** includes */
// include python headers
#include <Python.h>

// include local headers

/** bare c functions */
int my_add(int x)
{
    return x + 1;
}

/** python wrapper for c functions */
static PyObject *my_add_wrapper(PyObject *self, PyObject *args)
{
    float input, result;
    if (!PyArg_ParseTuple(args, "f", &input))
    {
        return NULL;
    }
    result = my_add(input);
    return PyFloat_FromDouble(result);
}

/** python methods table */
static PyMethodDef std_base_toknzer_methods[] = {
    {"my_add", my_add_wrapper, METH_VARARGS, "Add function"},
    {NULL, NULL, 0, NULL} // mark for terminal
};

/** python module definition */
static struct PyModuleDef std_base_toknzer_module = {
    PyModuleDef_HEAD_INIT, 
    "std_base_toknzer",
    NULL, 
    -1, 
    std_base_toknzer_methods
};

/** name here must match extension name, with `PyInit_` prefix */
PyMODINIT_FUNC PyInit_std_base_toknzer(void)
{
    return PyModule_Create(&std_base_toknzer_module);
}