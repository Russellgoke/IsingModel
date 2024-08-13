#include "ising_model.h"
#include <iostream>

int main()
{
    // Initialize Ising Model
    IsingModel model(4, 3, 2); // TODO set up params, dimensions, tupple of dimension sizes

    // Run simulation
    model.runSimulation(1000); // Example number of iterations

    // Save results
    model.saveResults("data/results.txt");

    return 0;
}