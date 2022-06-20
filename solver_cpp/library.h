#pragma once
#include <vector>

int add(const int &, const int &);

struct MeshModel
{
    const int n;
    
    const std::vector<double> x;
    const std::vector<double> y;


    MeshModel(
        const std::vector<double>& InX,
        const std::vector<double>& InY);
};