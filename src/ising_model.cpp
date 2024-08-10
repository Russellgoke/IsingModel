#include "ising_model.h"
#include <fstream>
#include <iostream>
#include <string>

IsingModel::IsingModel(){
    initializeLattice();
}

void IsingModel::initializeLattice() {
    // TODO
}

void IsingModel::runSimulation(int iterations) {
    for (int i = 0; i < iterations; ++i) {
        updateLattice();
    }
}

void IsingModel::updateLattice() {
    // TODO Implement lattice update logic
}

double IsingModel::calculateEnergy() {
    // TODO Implement energy calculation
    return 0.0;
}

void IsingModel::saveResults(const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& plane : lattice) {
            for (const auto& row : plane) {
                for (int spin : row) {
                    outFile << spin << " ";
                }
                outFile << "\n";
            }
            outFile << "\n";
        }
        outFile.close();
    } else {
        std::cerr << "Unable to open file: " << filename << "\n";
    }
}
