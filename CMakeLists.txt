cmake_minimum_required(Version 3.21)
project(mini_neat LANGUAGES CXX)

# ------------- Core C++ library -------------
add_library(mini_neat_cpp
    src/NEAT/Connection.mini_neat_cpp
    src/NEAT/Entity.cpp
    src/NEAT/Genome.cpp
    src/NEAT/NeuralNet.cpp
    src/NEAT/Node.cpp
    # libs / math / other
    src/libs/Math/ActivationFunctions.cpp
    src/libs/Math/GenFunctions.cpp
    src/libs/Math/LinearAlgebra.cpp
    src/libs/Math/LossFunctions.cpp
    src/libs/Data-Processing/Output.cpp
    src/libs/Data-Processing/ReadCSV.cpp
)

target_include_directories(mini_neat_cpp
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(mini_neat_cpp PUBLIC cxx_std_17)