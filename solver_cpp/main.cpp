#include <pybind11/pybind11.h> 
#include <pybind11/stl.h>
#include "library.h" 

namespace py = pybind11;

PYBIND11_MODULE(SolverCPP, m) {

    py::class_<MeshModel>(m, "MeshModel")
        .def(py::init<
            const std::vector<double>&,
            const std::vector<double>&,
            const std::vector<std::vector<int>>& >())
        .def_readonly("x", &MeshModel::x)
        .def_readonly("y", &MeshModel::y)
        .def_readonly("trigs", &MeshModel::triangles)
        .def_property_readonly("triangles", &MeshModel::GetTriangles)
        ;
};