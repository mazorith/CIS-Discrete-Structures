//Ian Harshbarger
//CIS-7 Final
#include <iostream>
#include "Edge.h"
#include "Vertex.h"
using namespace std;

void displayGraph(vector<Vertex*>, vector<Edge*>);
void addtoGraph(vector<Vertex*>&, vector<Edge*>&, int);
void vertexOfHighestDegree(vector<Vertex*>);
void isolatedVertices(vector<Vertex*>);
void loopCheck(vector<Edge*>);
bool connectedCheck(vector<Vertex*>, int, int&);
bool completeCheck(vector<Vertex*>);

int main() 
{
	//graph variables
	vector<Vertex*> vertices;
	vector<Edge*> allTheEdges;
	int selection = 0;

	//graph status variables
	int connectedCheckInt = 0;
	bool isConnected = false;
	bool isComplete = false;

	cout << "\n\nHello and welcome to the graph theory program!"
		 <<"\n(more menu options will apear when stuff is in your graph!)\n";
	do 
	{
		//selection screen options will only appear once graph is populated
		connectedCheckInt = 0;
		displayGraph(vertices, allTheEdges);
		cout << "\n\twhat would you like to do?\n"
			 << "\n\t[0] add a vertex";
		if (vertices.size() > 0)
		{
			cout << "\n\t[1] add an edge"
				 << "\n\t[2] list of Isolated vertices";
		}
		if (allTheEdges.size() > 0) 
		{
			cout << "\n\t[3] Vertex with the Highest Degree" 
				 << "\n\t[4] check number of loops"
				 << "\n\t[5] check if graph is connected"
				 << "\n\t[6] check if graph is complete";
		}

		cout << "\n\n\t[-1 to quit]\n\n"
			 << "\t--:";
		cin >> selection;

		system("CLS");
		switch (selection)
		{
			case 0: addtoGraph(vertices, allTheEdges, selection);
				break;

			if (vertices.size() > 0)
			{
				case 1: addtoGraph(vertices, allTheEdges, selection);
					break;
				case 2: isolatedVertices(vertices);
				break;
			}

			if (allTheEdges.size() > 0)
			{
				case 3: vertexOfHighestDegree(vertices);
					break;
				case 4: loopCheck(allTheEdges);
					break;
				case 5: isConnected = connectedCheck(vertices, 0, connectedCheckInt);

					if (isConnected)
						cout << "\n\nGraph is connected!\n";
					else
						cout << "\n\nGraph is not connected.\n";

					for (Vertex* vertex : vertices)
					{
						vertex->setConnected(false);
					}
					break;
				case 6: isComplete = completeCheck(vertices);

					if (isComplete)
						cout << "\n\nGraph is complete!\n";
					else
						cout << "\n\nGraph is not complete.\n";
					break;
			}
		}
	} while (selection != -1);

	return 0;
}

//===================================================================================
//Displays graph in list format
//===================================================================================
void displayGraph(vector<Vertex*> vVec, vector<Edge*> eVec) 
{
	cout << "\n\nVertices: ";
	for (Vertex* vertex: vVec) 
	{
		cout << "(" << vertex->getCharID() <<") ";
	}

	cout << "\nEdges:    ";
	for (Edge* edge : eVec)
	{
		cout << "(" << edge->getID() + 1 << ") - {" << edge->getv1()->getCharID() << ", " << edge->getv2()->getCharID() << "}, ";
	}
	cout << "\n\n";
}

//===================================================================================
//adds either a vertex or edge to graph depending on input selector
//===================================================================================
void addtoGraph(vector<Vertex*> &vVec, vector<Edge*> &eVec, int selector)
{
	//create new vertex
	if (selector == 0) 
	{
		char vertexName;
		cout << "\n\nPlease enter a letter for your vertex: ";
		cin >> vertexName;

		Vertex* v = new Vertex(vVec.size(), vertexName);
		vVec.push_back(v);
	}
	//create new edge
	else if (selector == 1) 
	{
		//can't have an edge without vertices
		if (vVec.size() == 0) 
		{
			cout << "Error: you cannot have an edge without vertices.\n\n";
			return;
		}

		//two vertex id values
		int v1;
		int v2;

		//one vertex character id value
		char name;

		bool foundVertex = false;
		
		//input and confirmation of inputted vertices
		do
		{
			cout << "\n\nPlease enter a starting vertex: ";
			cin >> name;
			for (Vertex* vertex : vVec)
			{
				if (vertex->getCharID() == name) 
				{
					foundVertex = true;
					v1 = vertex->getID();
					break;
				}
			}
		} while (!foundVertex);

		foundVertex = false;
		do
		{
			cout << "Please enter an ending vertex: ";
			cin >> name;
			for (Vertex* vertex : vVec)
			{
				if (vertex->getCharID() == name)
				{
					foundVertex = true;
					v2 = vertex->getID();
					break;
				}
			}
		} while (!foundVertex);

		//parallel edge check
		for (Edge* edge : eVec)
		{
			//if edge is parallel return without creating a new edge
			if ((edge->getv1()->getID() == v1 && edge->getv2()->getID() == v2) || (edge->getv1()->getID() == v2 && edge->getv2()->getID() == v1))
			{
				cout << "\n\nThis edge is parallel to edge " << edge->getID() + 1 << ". As such this edge will not be created.\n\n";
				return;
			}
		}

		//create new edge
		Edge* e = new Edge(vVec[v1], vVec[v2], eVec.size());
		if (v1 == v2) 
		{
			vVec[v1]->addEdge(e);
		}
		else 
		{
			vVec[v1]->addEdge(e);
			vVec[v2]->addEdge(e);
		}
		eVec.push_back(e);
	}
}

//===================================================================================
//Displays vertex of the highest degree
//===================================================================================
void vertexOfHighestDegree(vector<Vertex*> vVec) 
{
	//vertex pointer of highest degree along with vector incase of multiple vertices with highest degree
	vector<Vertex*> highestVertices;
	Vertex* highestVertex = vVec[0];

	//find highest degree vertex
	for (Vertex* vertex : vVec) 
	{
		if (vertex->getEdges().size() >= highestVertex->getEdges().size()) 
			highestVertex = vertex;
	}

	//collect all vertices with highest degree
	for (Vertex* vertex : vVec) 
	{
		if (vertex->getEdges().size() == highestVertex->getEdges().size())
			highestVertices.push_back(vertex);
	}

	//display
	cout << "\n\nVertex(s) of the highest degree: ";
	for (Vertex* vertex : highestVertices) 
	{
		cout << "(" << vertex->getCharID() << ") ";
	}
	cout << endl;
}

//===================================================================================
//Displays isolated vertices
//===================================================================================
void isolatedVertices(vector<Vertex*> vVec) 
{
	bool isolatedVerticesFound = false;
	cout << "Isolated vertices: ";
	for (Vertex* vertex : vVec) 
	{
		if (vertex->getEdges().size() == 0)
		{
			isolatedVerticesFound = true;
			cout << "(" << vertex->getCharID() << ") ";
		}
	}

	if (!isolatedVerticesFound)
		cout << "none";

	cout << endl;
}

//===================================================================================
//Displays the total amount of loops in the program
//===================================================================================
void loopCheck(vector<Edge*> eVec)
{
	int loops = 0;
	for (Edge* edge : eVec) 
	{
		if (edge->getv1()->getCharID() == edge->getv2()->getCharID())
			loops++;
	}

	if (loops == 0) 
	{
		cout << "\n\nThere are no loops in this graph.\n";
	}
	else 
	{
		cout << "\n\nThere are " << loops << " loops in this graph.\n";
	}
}

//===================================================================================
//Checks to see if the graph is connected
//===================================================================================
bool connectedCheck(vector<Vertex*> vVec, int startVertex, int &verticesTraveled)
{
	//check to see if vertex was already visited if not tic bool and add to a counter
	if (vVec[startVertex]->getConnected())
	{
		//Do nothing
	}
	else 
	{
		vVec[startVertex]->setConnected(true);
		verticesTraveled++;
	}

	//recursively follow paths of connected edges
	for (Edge* edge : vVec[startVertex]->getEdges()) 
	{
		if (!edge->getv2()->getConnected())
		{
			connectedCheck(vVec, edge->getv2()->getID(), verticesTraveled);
		}
		//if at any time the amount of vertices travelled equals the amount of vertices, graph is connected
		if (verticesTraveled == vVec.size())
			return true;
	}

	return false;
}

//===================================================================================
//Checks to see if graph is complete
//===================================================================================
bool completeCheck(vector<Vertex*> vVec)
{
	//for single vertex with loop
	if (vVec.size() == 1)
	{
		if (vVec[0]->getEdges().size() == vVec.size())
			return true;
		else
			return false;
	}

	//check each vertex to see if the amount of edges is equal to all vertices - 1
	//check each vertex for a loop, if loop(s) exists subract loop(s) from edge count 
	int loopMod = 0;
	for (Vertex* vertex : vVec) 
	{
		for (Edge* edge : vertex->getEdges()) 
		{
			if (edge->getv1()->getID() == edge->getv2()->getID())
				loopMod++;
		}
		if (vertex->getEdges().size() - loopMod != vVec.size() - 1)
			return false;
		loopMod = 0;
	}

	return true;
}