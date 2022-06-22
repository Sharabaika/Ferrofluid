import numpy as np
from SolverCPP import MeshModel

def ReadMesh(path) -> MeshModel:
    try:
        with open(path, 'r') as file:
            header = file.readline()
            for _ in range(3):
                file.readline()
            
            n_nodes = int(file.readline())
            x = np.empty(n_nodes)
            y = np.empty(n_nodes)

            for n_node in range(n_nodes):
                x_coord, y_coord, z_coord = np.genfromtxt(file.readline().split(), dtype = float)
                x[n_node] = x_coord
                y[n_node] = y_coord

            for _ in range(2):
                file.readline()

            n_triangles, _ = np.genfromtxt(file.readline().split(), dtype=np.int32)
            triangles = np.empty((n_triangles, 3), dtype=np.int32)

            for n_triangle in range(n_triangles):
                a, b, c, _, index, n = np.genfromtxt(file.readline().split(), dtype=np.int32)

                triangles[n_triangle] = [a-1, b-1, c-1]

            return MeshModel(x,y,triangles)

    finally:
        file.close()
