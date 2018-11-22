#include <iostream>
#include <regex>
#include <vector>

using namespace std;

void towerSet(vector<int>&towerA, vector<int>&towerB, vector<int>&towerC, int n, char ft, char tt, char st);
void moveDisk(vector<int>&towerA, vector<int>&towerB, vector<int>&towerC, int n, char tt, char ft);
void print(vector<int>&towerA, vector<int>&towerB, vector<int>&towerC);

int main()
{
	vector <int> towerA, towerB, towerC;
	int n = 0;

	cout << "Low behold! the Tower of Hanoi...\n";

	do {
		cout << "Enter the amount of disks you see on the tower! (3 or more): ";
		cin >> n;
	} while (n < 3);

	for (int i = n; i > 0; i--)
	{
		towerA.push_back(i);
	}

	print(towerA, towerB, towerC);
	towerSet(towerA, towerB, towerC, n, 'A', 'C', 'B');

	return 0;
}

void towerSet(vector<int>&towerA, vector<int>&towerB, vector<int>&towerC, int n, char fromT, char toT, char sideT)
{
	if (n == 1)
	{
		moveDisk(towerA, towerB, towerC, n, toT, fromT);
		print(towerA, towerB, towerC);
		cout << "You see disk " << n << " move to tower " << toT << " on its own... SPOOKY!\n";
		return;
	}

	towerSet(towerA, towerB, towerC, n - 1, fromT, sideT, toT);
	moveDisk(towerA, towerB, towerC, n, toT, fromT);
	print(towerA, towerB, towerC);
	
	cout << "You see disk " << n << " move to tower " << toT << " on its own... SPOOKY!\n";
	towerSet(towerA, towerB, towerC, n - 1, sideT, toT, fromT);
}

void moveDisk(vector<int>&towerA, vector<int>&towerB, vector<int>&towerC, int n, char toT, char fromT)
{
	switch (fromT)
	{
	case 'A': towerA.pop_back(); break;
	case 'B': towerB.pop_back(); break;
	case 'C': towerC.pop_back(); break;
	}

	switch (toT)
	{
	case 'A': towerA.push_back(n); break;
	case 'B': towerB.push_back(n); break;
	case 'C': towerC.push_back(n); break;
	}

}

void print(vector<int>&towerA, vector<int>&towerB, vector<int>&towerC)
{
	cout << "Press enter to continue" << endl;
	cin.get();
	system("CLS");

	cout << "Tower A: ";
	for (int i = 0; i < towerA.size(); i++)
	{
		cout << "[" << towerA.at(i) << "]";
	}

	cout << "\nTower B: ";
	for (int i = 0; i < towerB.size(); i++)
	{
		cout << "[" << towerB.at(i) << "]";
	}

	cout << "\nTower C: ";
	for (int i = 0; i < towerC.size(); i++)
	{
		cout << "[" << towerC.at(i) << "]";
	}
	cout << "\n\n";

}