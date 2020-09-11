#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <onmi.hpp>

PYBIND11_MODULE(pyonmi, m) {
    m.doc() = "pybind11 of the function overlaping NMI of the  aaronmcdaid/Overlapping-NMI repository "; // Optional module docstring
    m.def("oNMI", &oNMI, "A function that calculates the overlapping nmi of two communities sets");
}
