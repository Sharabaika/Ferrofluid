#pragma once
#include <pybind11/pybind11.h> 
#include <pybind11/numpy.h>
#include <vector>

struct MeshModel
{
    const unsigned int n_nodes;
    const unsigned int n_triangles;
    
    const std::vector<double> x;
    const std::vector<double> y;

    std::vector<std::vector<int>> triangles;

    MeshModel(
        const std::vector<double>& InX,
        const std::vector<double>& InY,
        const std::vector<std::vector<int>>& InTriangles);


    // Pybind interfaces //
    // ================= //
    pybind11::array_t<double> GetTriangles();
};