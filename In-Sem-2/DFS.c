#include <stdio.h>
#include <stdlib.h>

int graph[10][10], visited[10], vertices;

void DFS(int source) {
    printf("\n%d", source);
    visited[source] = 1;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i] && graph[source][i])
            DFS(i);
    }
}

int main(){

    int source;
    printf("Enter the no of vertices: ");
    scanf("%d", &vertices);

    // Read the Adjecency matrix
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) 
            scanf("%d", &graph[i][j]);
    }

    // Initialise the visited array with 0
    for (int i = 0; i < vertices; i++) 
        visited[i] = 0;

    printf("Enter the source: ");
    scanf("%d", &source);

    DFS(source);

    return 0;
}