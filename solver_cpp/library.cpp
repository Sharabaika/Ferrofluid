#include "library.h"
#include <iostream>

namespace py = pybind11;

MeshModel::MeshModel(
    const std::vector<double>& InX,
    const std::vector<double>& InY,
    const std::vector<std::vector<int>>& InTriangles)
    : n_nodes( InX.size() )
    , n_triangles( InTriangles.size() )
    , x( InX )
    , y( InY )
{
    triangles.resize(n_triangles, std::vector<int>(3));
    for (size_t n_triangle = 0; n_triangle < n_triangles; n_triangle++)
    {
        // TODO read py_list instead?

        const auto& inTriangle = InTriangles[n_triangle];
        if (inTriangle.size() != 3)
        {
            // TODO throw exception

            std::cout<<"wrong triangles format";
            return;
        }
        triangles[n_triangle] = {inTriangle[0], inTriangle[1], inTriangle[2]};
    }    
}

pybind11::array_t<double> MeshModel::GetTriangles()
{
    pybind11::array_t<double> result = pybind11::array_t<double>(10);

    return result;
}