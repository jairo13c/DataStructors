//
//  Graph.hpp
//  Data Structures
//
//  Created by Cortez, Jairo on 3/20/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool adjecencyMatrix [MAXIMUM] [MAXIMUM];
    int weightCostMatrix [MAXIMUM] [MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVerttices[]);
public:
    Graph();
    //Graph Operations
    
    void addVertex(const Type& Value);
    
    //connect vertices
    void addEdge(int source, int target);
    void addEdgeUndirected(int source,int target);
    void addEdgeCost(int source,int target);
    
    //Disconect verices
    void removeEdge(int source, int target);
    void removeEdgeUnidirected(int source,int target);
    void removeEdgeCcost(int source, int target);
    
    //Accessors
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int  size() const;
    
    //Check connection
    bool hasUndirectedConnection(int source,int target) const;
    bool areConnected(int source, int target) const;
    std::set<int> neighbors(int vertex) const;
    
    //Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversal(Graph<Type> & graph, int  vertex);
    
};

template <class Type>
const int Graph<Type> :: MAXIMUM;

template <class Type>
Graph<Type> :: Graph()
{
    this->vertexCount = 0;
}
/*
 Since we cannot "Remove" from an  array in c++,
 we only implement adding to a graph.
 java allows for all objects to be set to null but c++
 does not.
 */

//left side operator (referance of value)
template<class Type>
int Graph<Type> :: size() const
{
    return vertexCount;
}
template  <class Type>
Type& Graph<Type> :: operator[](int vertex)
{
    asssert(vertex < vertexCount);
    return graphData[vertex];
}
//Right hand  side operator (copy of value.)
template <class Type>
Type Graph<Type> :: operator[](int vertex) const
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

template <class Type>
void Graph<Type> :: addVertex(const Type& value)
{
    assert(vertexCount = MAXIMUM);
    int newVertexNumber = vertexCount;
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
    {
        adjecencyMatrix[otherVertexNumber] [otherVertexNumber] = false;
        adjecencyMatrix[otherVertexNumber] [otherVertexNumber] = false;
    }
    graphData[newVertexNumber] = value;
}

template <class Type>
void Graph<Type> :: addEdge(int source, int target)
{
    assert(source >= 0 &&  source < vertexCount && target >= 0 && target >= 0 && target < vertexCount);
    adjecencyMatrix[source][target] = false;
}

template<class Type>
void Graph<Type> :: addEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjecencyMatrix[source][target] = false;
    adjecencyMatrix[source][target] = false;
}
template <class Type>
void Graph<Type> :: removeEdgeCost(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = 0;
    weightCostMatrix[target][source] = 0;
}
template <class Type>
void  Graph<Type> addEdge(int source,int target)
{
    assert(source >= 0 && source <vertexCount && target >= 0 && target < vertexCont);
    adjacencyCostMatrix[source][target] = true
}
template <class Type>
void Graph<Type> :: addEdgeCost(int source, int target, int cost)
{
    assert(source >=  0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = cost;
    weightCostMatrix[target][source] = cost;
}

template <class Type>
bool Graph<Type> :: hasUdirectedConnection(int source, int target) const
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    
    bool isAnEdge = false;
    isAnEdge = adjecencyMatrix[source][target] || adjecencyMatrix[target][source];
    
    return isAnEdge;
}
template <class Type>
bool Graph<Type> :: areConnected(int source, int target) const
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    
    bool isAnEdge = false;
    isAnEdge = adjecencyMatrix[source][target];
    
    return isAnEdge;
}
template <class Type>
std::set<int> Graph<Type> :: neighbors(int vertex) const
{
    assert(vertex < vertexCount);
    std::set<int> vertexNeighbors;
    
    for(int index = 0; index < vertexCount; index++)
    {
        if(adjacencyMatrix[vertex][index])
        {
            vertexNeighbors.insert(index);
        }
    }
    return Neighbors;
}
template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex)
{  
    bool vistedVerticies[MAXINUM];
    assert(vertex < currentGraph.size());
    std::fill_n(vistedVertices, currentGraph.size(), false);
    depthFirstTraversal(currentGraph, vertex, vistedVertices);
}
template <class Type>
void Graph<Type> :: depthFirstTranversal(Graph<Type> & currentGraph, int vertex, bool * visted)
{
    std::set<int> connections = currentGraph.neighbors(vertex);
    std::set<int>::iterator setIterator;
    
    visted[vertex] = true;
    cout << currentGraph[vertex] << ", " << endl;
    
    for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
    {
        if(!visted[*setIterator])
        {
            depthFirstTTraversal(currentGraph, *setIterator, visted);
        }
    }
}
template <class Type>
int Graph<Type> :: costTranversal(Graph<Type> & currentGraph, int vertex)
{
    assert(vertex < currentGraph.size());
    int cost = 0;
    bool visted[MAXINUM];
    std::set<int> connections;
    std::set<int>::iterator set iterator;
    std::queue<int> vertexQueue;
    
    std::fill_n(visted,currentGraph.size(), false);
    visted[vertex] = true;
    
    vertexQueue.push(vertex);
    while(!vertexQueue.empty())
    {
        connections = currentGraph.neighbors(vertexQueue.front());
        vertexQueue.pop();
        
        for(!visited[*setIterator])
        {
            cost += weightCostMatrix[vertex][*setIterator];
            visited[*setIterator] = true;
            vertexQueue.push(*setIterator);
        }
    }
}
template <class Type>
void Graph<Type> :: breadthFirstTraversal(Graph<Type> & currentGraph, int vertex)
{
    assert(vertex < currentGraph.size());
    bool visited[MAXINUM];
    std::set<int> connections;
    std::set<int>::iterator set iterator;
    std::queue<int> vertexQueue;
    
    std::fill_n(visted,currentGraph.size(), false);
    visted[vertex] = true;
    cout << currentGraph[vertex] << endl;
    vertexQueue.push(vertex);
    while (!vertexQueue.empty())
    {
        connections = currentGraph.neighhbors(vertexQueue.front());
        vertexQueue.pop();
        
        for(setIterator = connection.begin(); setiterator != connections.end(); setiterator++)
        {
            if(!visited[*setIterator])
            {
                visited[*setIterator] = true;
                cout << currentGraph[*aetIterator] << edl;
                vertexQueue.push(*setIterator);
            }
        }
    }
}
template <class Type>
int Graph<Type> :: costTraversal(Graph<Type> & currentGraph, int start)
{
    assert(start >= 0 && start < vertexCount);
    int cost = 0;
    bool visited[MAXIMUM];
    std::set<int> connections;
    std::set<int>::iterator setIterator;
    std::Queue<int> vertexQueue;
    
    std::fill_n(visited,currentGraph.size(),false);
    visited[start] = true;
    
    vertexQueue.push(start);
    while (!vertexQueue.empty())
    {
        int currentIndex = vertexQueue.front();
        connections =  currentGraph.neighbors(currentIndex);
        vertexQueue.pop();
        
        for(setIterator = connection.begin(); setIterator != connections.end(; setIterator++)
        {
            if(!visited[*setIterator])
            {
                cost += weighCostMatrix[currentIindex][*setIterator];
                visted[*setIterator] = true;
                vertexQueue.push(*setIterator);
            }
        }
    }
    
    return cost;
}

#endif /* Graph_hpp */
