#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

int visited[MAX_VERTICES];  // Array to keep track of visited vertices
int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];  // Adjacency matrix representation of the graph

// Function to perform Depth First Traversal
void depthFirstTraversal(int vertex, int vertices) {
    visited[vertex] = 1;  // Mark the current vertex as visited
    printf("%d ", vertex);

    // Visit all adjacent vertices of the current vertex
    for (int i = 0; i < vertices; i++) {
        if (adjacencyMatrix[vertex][i] == 1 && !visited[i]) {
            depthFirstTraversal(i, vertices);  // Recursively visit the adjacent vertices
        }
    }
}

int main() {
    int vertices;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    // Input the adjacency matrix
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &adjacencyMatrix[i][j]);
        }
    }

    // Initialize the visited array
    for (int i = 0; i < vertices; i++) {
        visited[i] = 0;
    }

    // Perform Depth First Traversal starting from the first vertex
    printf("Depth First Traversal starting from vertex 0: ");
    depthFirstTraversal(0, vertices);

    return 0;
}


