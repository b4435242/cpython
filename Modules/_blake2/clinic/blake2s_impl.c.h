/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(py_blake2s_new__doc__,
"blake2s(data=b\'\', /, *, digest_size=_blake2.blake2s.MAX_DIGEST_SIZE,\n"
"        key=b\'\', salt=b\'\', person=b\'\', fanout=1, depth=1, leaf_size=0,\n"
"        node_offset=0, node_depth=0, inner_size=0, last_node=False)\n"
"--\n"
"\n"
"Return a new BLAKE2s hash object.");

static PyObject *
py_blake2s_new_impl(PyTypeObject *type, PyObject *data, int digest_size,
                    Py_buffer *key, Py_buffer *salt, Py_buffer *person,
                    int fanout, int depth, PyObject *leaf_size_obj,
                    PyObject *node_offset_obj, int node_depth,
                    int inner_size, int last_node);

static PyObject *
py_blake2s_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"", "digest_size", "key", "salt", "person", "fanout", "depth", "leaf_size", "node_offset", "node_depth", "inner_size", "last_node", NULL};
    static _PyArg_Parser _parser = {"|O$iy*y*y*iiOOiip:blake2s", _keywords, 0};
    PyObject *data = NULL;
    int digest_size = BLAKE2S_OUTBYTES;
    Py_buffer key = {NULL, NULL};
    Py_buffer salt = {NULL, NULL};
    Py_buffer person = {NULL, NULL};
    int fanout = 1;
    int depth = 1;
    PyObject *leaf_size_obj = NULL;
    PyObject *node_offset_obj = NULL;
    int node_depth = 0;
    int inner_size = 0;
    int last_node = 0;

    if (!_PyArg_ParseTupleAndKeywordsFast(args, kwargs, &_parser,
        &data, &digest_size, &key, &salt, &person, &fanout, &depth, &leaf_size_obj, &node_offset_obj, &node_depth, &inner_size, &last_node)) {
        goto exit;
    }
    return_value = py_blake2s_new_impl(type, data, digest_size, &key, &salt, &person, fanout, depth, leaf_size_obj, node_offset_obj, node_depth, inner_size, last_node);

exit:
    /* Cleanup for key */
    if (key.obj) {
       PyBuffer_Release(&key);
    }
    /* Cleanup for salt */
    if (salt.obj) {
       PyBuffer_Release(&salt);
    }
    /* Cleanup for person */
    if (person.obj) {
       PyBuffer_Release(&person);
    }

    return return_value;
}

PyDoc_STRVAR(_blake2_blake2s_copy__doc__,
"copy($self, /)\n"
"--\n"
"\n"
"Return a copy of the hash object.");

#define _BLAKE2_BLAKE2S_COPY_METHODDEF    \
    {"copy", (PyCFunction)_blake2_blake2s_copy, METH_NOARGS, _blake2_blake2s_copy__doc__},

static PyObject *
_blake2_blake2s_copy_impl(BLAKE2sObject *self);

static PyObject *
_blake2_blake2s_copy(BLAKE2sObject *self, PyObject *Py_UNUSED(ignored))
{
    return _blake2_blake2s_copy_impl(self);
}

PyDoc_STRVAR(_blake2_blake2s_update__doc__,
"update($self, data, /)\n"
"--\n"
"\n"
"Update this hash object\'s state with the provided bytes-like object.");

#define _BLAKE2_BLAKE2S_UPDATE_METHODDEF    \
    {"update", (PyCFunction)_blake2_blake2s_update, METH_O, _blake2_blake2s_update__doc__},

PyDoc_STRVAR(_blake2_blake2s_digest__doc__,
"digest($self, /)\n"
"--\n"
"\n"
"Return the digest value as a bytes object.");

#define _BLAKE2_BLAKE2S_DIGEST_METHODDEF    \
    {"digest", (PyCFunction)_blake2_blake2s_digest, METH_NOARGS, _blake2_blake2s_digest__doc__},

static PyObject *
_blake2_blake2s_digest_impl(BLAKE2sObject *self);

static PyObject *
_blake2_blake2s_digest(BLAKE2sObject *self, PyObject *Py_UNUSED(ignored))
{
    return _blake2_blake2s_digest_impl(self);
}

PyDoc_STRVAR(_blake2_blake2s_hexdigest__doc__,
"hexdigest($self, /)\n"
"--\n"
"\n"
"Return the digest value as a string of hexadecimal digits.");

#define _BLAKE2_BLAKE2S_HEXDIGEST_METHODDEF    \
    {"hexdigest", (PyCFunction)_blake2_blake2s_hexdigest, METH_NOARGS, _blake2_blake2s_hexdigest__doc__},

static PyObject *
_blake2_blake2s_hexdigest_impl(BLAKE2sObject *self);

static PyObject *
_blake2_blake2s_hexdigest(BLAKE2sObject *self, PyObject *Py_UNUSED(ignored))
{
    return _blake2_blake2s_hexdigest_impl(self);
}
/*[clinic end generated code: output=13d4b08ea9ee2d62 input=a9049054013a1b77]*/
