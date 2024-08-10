#include "ising_model.h"
#include <iostream>

int main() {
    // Initialize Ising Model
    IsingModel model; // TODO set up params, dimensions, tupple of dimension sizes

    // Run simulation
    model.runSimulation(1000); // Example number of iterations

    // Save results
    model.saveResults("data/results.txt");

    return 0;
}