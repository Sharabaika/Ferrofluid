#include <pybind11/pybind11.h> 
#include <pybind11/stl.h>
#include "library.h" 

namespace py = pybind11;

PYBIND11_MODULE(SolverCPP, m) {
    m.def("add", &add);

    py::class_<MeshModel>(m, "MeshModel")
        .def(py::init<const std::vector<double>&, const std::vector<double>&>())
        .def_readonly("x", &MeshModel::x)
        .def_readonly("y", &MeshModel::y)
        ;
};