#ifndef ISING_MODEL_H
#define ISING_MODEL_H

#include <vector>
#include <string>

class IsingModel {
public:
    IsingModel(int xDim, int yDim, int zDim);
    void runSimulation(int iterations);
    void saveResults(const std::string& filename);

private:
    int xDim, yDim, zDim; // set up params
    std::vector<std::vector<std::vector<int>>> lattice;
    void initializeLattice();
    void updateLattice();
    double calculateEnergy();
};

#endif // ISING_MODEL_H
