import SolverCPP
from SolverCPP import MeshModel

from scripts.MeshReader import ReadMesh
from scripts.Plotters import MeshPlotter

mesh = ReadMesh("meshes/test.facet")

# print(mesh.x)
# print(mesh.y)
# print(type(mesh.x))

plotter = MeshPlotter(mesh)
plotter.Show()