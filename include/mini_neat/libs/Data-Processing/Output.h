#ifndef OUTPUT_H
#define OUTPUT_H

#include <vector>
#include <iostream>
#include "../Math/LinearAlgebra.h"

extern bool DEBUG;

void debugMessage(const std::string& tag, const std::string& message);

void printMatrixDebug(const std::vector<std::vector<double>>& matrix);
void printMatrix(const std::vector<std::vector<double>> &matrix);

void printVectorDebug(const std::vector<double> &vec);
void printVector(const std::vector<double> &vec);

template <typename T>
void print(const T& value) {
    std::cout << value << std::endl;
}

template <typename T>
void printDebug(const T& value) {
    if (DEBUG) {
        std::cout << value << std::endl;
    }
}

void printPredictionsVSLabels(const std::vector<std::vector<double>> &predictions,
                              const std::vector<std::vector<double>> &labels);



#endif