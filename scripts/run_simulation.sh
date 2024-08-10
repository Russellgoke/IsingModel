#!/bin/bash

set -e

# matches MAKEFILE
BINARY_NAME="ising_model_simulator" 

echo "Running make to compile the source files..."
make

echo "Running the simulation..."
./$BINARY_NAME

if [ $? -eq 0 ]; then
    echo "Simulation completed successfully."
else
    echo "Simulation failed."
    exit 1
fi

RESULTS_FILE="data/results.txt"
if [ -f $RESULTS_FILE ]; then
    echo "Results saved to $RESULTS_FILE"
else
    echo "Results file not found. Please check the implementation."
fi
