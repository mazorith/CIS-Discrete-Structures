#ifndef VERTEX_H
#define VERTEX_H
#include "Edge.h"
#include <vector>

class Edge;
class Vertex 
{
	private:
		std::vector<Edge*> connectedEdges;
		bool connectedSearchFound;
		int id;
		char charID;

	public:
		Vertex(int, char);
		Vertex(Edge*, int, char);
		void addEdge(Edge*);
		std::vector<Edge*> getEdges();
		void setConnected(bool);
		bool getConnected();
		int getID();
		char getCharID();
};

#endif
