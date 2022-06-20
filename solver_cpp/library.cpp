#include "library.h"
#include <iostream>

int add(const int &a, const int &b) {
    return a + b;
}

MeshModel::MeshModel(
    const std::vector<double>& InX,
    const std::vector<double>& InY)
    : n( InX.size() )
    , x( InX )
    , y( InY )
{
    std::cout<<"kek \n";
}