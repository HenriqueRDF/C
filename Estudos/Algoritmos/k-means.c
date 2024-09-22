#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ITER 100  // M�ximo de itera��es
#define K 3  // N�mero de clusters
#define N 10  // N�mero de pontos

// Estrutura para representar um ponto (n-dimensional)
typedef struct {
    double x, y;
} Point;

// Fun��o para calcular a dist�ncia euclidiana entre dois pontos
double euclideanDistance(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

// Fun��o para inicializar aleatoriamente os centroides
void initializeCentroids(Point centroids[], Point points[]) {
    for (int i = 0; i < K; i++) {
        centroids[i] = points[rand() % N];
    }
}

// Fun��o para atribuir pontos ao centroide mais pr�ximo
void assignPointsToClusters(Point points[], Point centroids[], int clusterAssignment[]) {
    for (int i = 0; i < N; i++) {
        double minDist = euclideanDistance(points[i], centroids[0]);
        clusterAssignment[i] = 0;

        for (int j = 1; j < K; j++) {
            double dist = euclideanDistance(points[i], centroids[j]);
            if (dist < minDist) {
                minDist = dist;
                clusterAssignment[i] = j;
            }
        }
    }
}

// Fun��o para recalcular os centroides
void updateCentroids(Point points[], Point centroids[], int clusterAssignment[]) {
    Point newCentroids[K] = {0};
    int clusterSizes[K] = {0};

    // Somar os pontos dentro de cada cluster
    for (int i = 0; i < N; i++) {
        int cluster = clusterAssignment[i];
        newCentroids[cluster].x += points[i].x;
        newCentroids[cluster].y += points[i].y;
        clusterSizes[cluster]++;
    }

    // Recalcular a posi��o dos centroides
    for (int j = 0; j < K; j++) {
        if (clusterSizes[j] > 0) {
            centroids[j].x = newCentroids[j].x / clusterSizes[j];
            centroids[j].y = newCentroids[j].y / clusterSizes[j];
        }
    }
}

// Fun��o principal para rodar o K-means
void kmeans(Point points[]) {
    Point centroids[K];
    int clusterAssignment[N] = {0};

    // Inicializar os centroides
    initializeCentroids(centroids, points);

    // Loop de itera��es
    for (int iter = 0; iter < MAX_ITER; iter++) {
        // Atribuir pontos aos clusters
        assignPointsToClusters(points, centroids, clusterAssignment);

        // Recalcular os centroides
        updateCentroids(points, centroids, clusterAssignment);
    }

    // Imprimir os resultados
    printf("Final clusters:\n");
    for (int i = 0; i < N; i++) {
        printf("Ponto (%.2f, %.2f) pertence ao cluster %d\n", points[i].x, points[i].y, clusterAssignment[i]);
    }
}

int main() {
    // Exemplo de pontos bidimensionais
    Point points[N] = {
        {1.0, 1.0}, {2.0, 1.0}, {4.0, 3.0}, {5.0, 4.0},
        {10.0, 10.0}, {10.0, 12.0}, {25.0, 30.0}, {24.0, 25.0},
        {30.0, 35.0}, {26.0, 32.0}
    };

    // Rodar o algoritmo K-means
    kmeans(points);

    return 0;
}
