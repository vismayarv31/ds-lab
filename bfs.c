#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

int visited[MAX_VERTICES];  // Array to keep track of visited vertices
int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];  // Adjacency matrix representation of the graph

// Function to perform Breadth First Search
void breadthFirstSearch(int start, int vertices) {
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;

    // Enqueue the starting vertex and mark it as visited
    queue[rear++] = start;
    visited[start] = 1;

    printf("Breadth First Search starting from vertex %d: ", start);

    while (front < rear) {
        int currentVertex = queue[front++];
        printf("%d ", currentVertex);

        // Visit all adjacent vertices of the current vertex
        for (int i = 0; i < vertices; i++) {
            if (adjacencyMatrix[currentVertex][i] == 1 && !visited[i]) {
                // Enqueue the adjacent vertex and mark it as visited
                queue[rear++] = i;
                visited[i] = 1;
            }
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

    // Perform Breadth First Search starting from the first vertex
    breadthFirstSearch(0, vertices);

    return 0;
}
