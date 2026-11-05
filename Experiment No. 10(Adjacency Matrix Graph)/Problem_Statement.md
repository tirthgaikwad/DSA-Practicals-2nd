# Experiment No. 10 — Flight Routes Using Graph (Adjacency Matrix)

## Problem Statement
There are flight paths between cities. If there is a flight between city A and city B, then there is an edge between the cities. The cost of the edge can represent the time taken by the flight or the amount of fuel used for the journey. Represent this information as a graph, where nodes represent airport names or city names. Use the adjacency matrix representation of the graph and check whether the graph is connected or not.

## Aim
To represent flight routes between cities using an adjacency matrix and check whether the graph is connected.

## Objectives
1. Understand the concept of graphs and their applications.
2. Represent cities as vertices and flight routes as edges.
3. Store flight costs using an adjacency matrix.
4. Display the adjacency matrix.
5. Check whether the graph is connected using graph traversal.

## Theory

A **Graph** is a non-linear data structure consisting of vertices (nodes) and edges (connections).

In this practical:
- **Vertex:** Represents a city or airport.
- **Edge:** Represents a flight route between two cities.
- **Edge Weight:** Represents flight time or fuel consumption.
- **Adjacency Matrix:** A two-dimensional array used to represent connections between vertices.

### Adjacency Matrix
An adjacency matrix is a 2D array in which:
- `0` represents no direct connection.
- A non-zero value represents an edge and its cost.

### Connected Graph
A graph is called connected if every vertex can be reached from every other vertex.

### DFS (Depth First Search)
DFS is a graph traversal technique that visits a vertex and explores its connected vertices before backtracking. It is used to check graph connectivity.

## Algorithm
1. Start the program.
2. Accept the number of cities.
3. Enter the names of all cities.
4. Create an adjacency matrix.
5. Enter the flight cost between connected cities.
6. Display the adjacency matrix.
7. Apply DFS traversal starting from the first city.
8. Check whether all cities are visited.
9. If all cities are visited, display that the graph is connected; otherwise, display that it is not connected.
10. Stop the program.

## Time Complexity
- Adjacency Matrix Creation: O(V²)
- DFS Traversal: O(V²)
- Connectivity Check: O(V)

Here, V represents the number of vertices (cities).

## Conclusion
This practical demonstrates how to represent flight routes between cities using a weighted adjacency matrix. DFS is used to check whether all cities are connected through flight routes.
