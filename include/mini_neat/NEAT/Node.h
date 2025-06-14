#pragma once
#include <vector>
#include <string>

#include <mini_neat/NEAT/NodeType.h>
#include <cstdint>

namespace mini_neat::neat
{
    enum class ActivationFunctionType : uint8_t;
    class Connection;

struct NodeGene
{
    int node_id;
    NodeType node_type;

    NodeGene(int node_id, NodeType node_type);

    std::string toString() const;
};

class Node
{
public:
    int node_id;
    NodeType node_type;
    ActivationFunctionType activation = NONE;
    std::vector<Connection> connections_in;
    std::vector<double> outputs;

    Node(NodeGene& node_gene);

    // double calculateNodeOutput(const std::vector<double>& input_vector);

    void storeOutputs(std::vector<double> outputs);

    std::vector<double> applyActivation(const std::vector<double> &pre_activation_outputs);

    void setActivation(ActivationFunctionType activation);
};

}