#include "Vertex.h"

Vertex::Vertex(int num, char cID)
{
	id = num;
	charID = cID;
	connectedSearchFound = false;
}

Vertex::Vertex(Edge* edge, int num, char cID)
{
	id = num;
	charID = cID;
	connectedSearchFound = false;
	connectedEdges.push_back(edge);
}

void Vertex::addEdge(Edge* edge)
{
	connectedEdges.push_back(edge);
}

std::vector<Edge*> Vertex::getEdges()
{
	return connectedEdges;
}

void Vertex::setConnected(bool t)
{
	connectedSearchFound = t;
}

bool Vertex::getConnected()
{
	return connectedSearchFound;
}

int Vertex::getID()
{
	return id;
}

char Vertex::getCharID()
{
	return charID;
}
