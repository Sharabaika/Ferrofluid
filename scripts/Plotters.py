from SolverCPP import MeshModel
from matplotlib import pyplot as plt
import numpy as np

class MeshPlotter:
    def __init__(self, mesh : MeshModel) -> None:
        self.mesh = mesh


    def Show(self):
        fig, ax = plt.subplots()

        ax.triplot(self.mesh.x, self.mesh.y, self.mesh.trigs)

        plt.show()