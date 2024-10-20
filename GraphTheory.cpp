// ﷽
// GraphTheory.cpp (filename)
// Source: https://github.com/Jauoad
// Copyright (c) 2024 Jauoad

#include <iostream>
#include <vector>

using namespace std;

// Structure to represent a graph
class Graph {
private:
    int V; // Number of vertices
    vector<vector<int>> adjacencyMatrix;

public:
    Graph(int vertices) : V(vertices) {
        adjacencyMatrix.resize(V, vector<int>(V, 0));
    }

    void addEdge(int u, int v) {
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1; // For undirected graph
    }

    void displayAdjacencyMatrix() {
        cout << "Adjacency Matrix:\n";
        for (const auto& row : adjacencyMatrix) {
            for (int value : row) {
                cout << value << " ";
            }
            cout << endl;
        }
    }

    int degree(int vertex) {
        int deg = 0;
        for (int j = 0; j < V; j++) {
            deg += adjacencyMatrix[vertex][j];
        }
        return deg;
    }

    void eulerFormula() {
        int E = 0, F = 0;
        // Count edges
        for (int i = 0; i < V; i++) {
            for (int j = i + 1; j < V; j++) {
                if (adjacencyMatrix[i][j] == 1) {
                    E++;
                }
            }
        }
        // Faces in a planar graph can be calculated using Euler's formula
        F = E - V + 2; // Rearranging Euler's formula V - E + F = 2
        cout << "Using Euler's Formula: V - E + F = 2\n";
        cout << "V (vertices) = " << V << ", E (edges) = " << E << ", F (faces) = " << F << endl;
    }
};

/*
1. Euler's Formula for Planar Graphs:
   Formula: V - E + F = 2

   Concept:
   This formula relates the number of vertices (V), edges (E), and faces (F) in a connected planar graph.

   A simple planar graph example:
   V = 4, E = 6, F = 2 -> 4 - 6 + 2 = 0 (which is incorrect)
   Must have V - E + F = 2 for a connected graph.

2. Degree of a Vertex:
   Formula: degree(v) = sum of connections to vertex v

   Concept:
   The degree of a vertex is the number of edges connected to it.
*/

int main() {
    Graph g(5); // Create a graph with 5 vertices

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    
    g.displayAdjacencyMatrix();

    for (int i = 0; i < 5; i++) {
        cout << "Degree of vertex " << i << ": " << g.degree(i) << endl;
    }

    g.eulerFormula(); // Calculate using Euler's formula

    return 0;
}


