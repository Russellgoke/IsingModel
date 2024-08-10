#ifndef ISING_MODEL_H
#define ISING_MODEL_H

#include <vector>
#include <string>

class IsingModel {
public:
    IsingModel();
    void runSimulation(int iterations);
    void saveResults(const std::string& filename);

private:
    int TODO; // set up params
    std::vector<std::vector<std::vector<int>>> lattice; //Set up lattice dimensionality
    void initializeLattice();
    void updateLattice();
    double calculateEnergy();
};

#endif // ISING_MODEL_H
