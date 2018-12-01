#ifndef EDGE_H
#define EDGE_H
#include "Vertex.h"

class Vertex;
class Edge
{
	private:
		Vertex* v1;
		Vertex* v2;
		int id;

	public:
		Edge(Vertex*, Vertex*, int);
		Vertex* getv1();
		Vertex* getv2();
		int getID();
};

#endif
