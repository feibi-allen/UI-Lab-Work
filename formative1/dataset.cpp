// COMP2811 Coursework 1: QuakeDataset class

#include <stdexcept>
#include "dataset.hpp"
#include <fstream>

using namespace std;


QuakeDataset::QuakeDataset(){

    
    ifstream inputFile(file);

    if (!inputFile.is_open()) {
        throw runtime_error("Could not open file: " + file);
    }

}