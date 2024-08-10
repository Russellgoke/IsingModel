CXX = g++
CXXFLAGS = -std=c++20 -Wall -Iinclude

SRC = src/main.cpp src/ising_model.cpp src/utilities.cpp
OBJ = $(SRC:src/%.cpp=build/%.o)
TARGET = ising_model_simulator

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

build/%.o: src/%.cpp
	@if not exist build mkdir build
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@if exist build rmdir /s /q build
	@if exist $(TARGET) del $(TARGET)
