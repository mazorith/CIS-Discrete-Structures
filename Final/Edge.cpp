#include "Edge.h"

Edge::Edge(Vertex* ver1, Vertex* ver2, int num)
{
	v1 = ver1;
	v2 = ver2;
	id = num;
}

Vertex * Edge::getv1()
{
	return v1;
}

Vertex * Edge::getv2()
{
	return v2;
}

int Edge::getID()
{
	return id;
}