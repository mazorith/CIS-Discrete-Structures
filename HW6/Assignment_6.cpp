#include <iostream>
#include <regex>
#include <chrono>
using namespace std;
typedef std::chrono::high_resolution_clock Clock;

int findGCD(int n1, int n2);

int main()
{
	Clock::time_point t1;
	Clock::time_point t2;
	int input1 = 0;
	int input2 = 0;
	int gcd = 0;
	int time = 0;
	int loopVar = 0;

	while (loopVar != -1)
	{
		cout << "Enter Two Positive Integers and get the GCD\n\n";
		do
		{
			cout << "Integer 1: ";
			cin >> input1;
		} while (input1 < 0);
		do
		{
			cout << "Integer 2: ";
			cin >> input2;
		} while (input2 < 0);

		t1 = Clock::now();
		gcd = findGCD(input1, input2);
		t2 = Clock::now();

		time = chrono::duration_cast<chrono::nanoseconds>(t2 - t1).count();

		cout << "\nGCD of " << input1 << " and " << input2 << " is " << gcd << endl;
		cout << "Found in: " << time << " nanoseconds" << endl;
		cout << "Continue? (-1 to quit): " << endl;
		cin >> loopVar;

	} 
	return 0;

}

int findGCD(int n1, int n2)
{
	if (n1 == 0)
	{
		return n2;
	}

	return findGCD(n2 % n1, n1);
}
