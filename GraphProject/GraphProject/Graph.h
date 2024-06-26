#ifndef _GRAPH_
#define _GRAPH_

#include <vector>
#include <string>

struct Edge
{
    int start;
    int end;
};


class Graph
{
private:
    std::vector<std::string> vertices;
    std::vector<std::vector<Edge>> edges;
public:
    Graph(std::string vertices[], int numVertices, int edges[][2], int numEdges);
    std::vector<int> getNeighbors(int index);
    std::string getVertex(int index);
    int getSize();
    void addVertex(std::string vertex);
    void addEdge(int start, int end);
};

#endif