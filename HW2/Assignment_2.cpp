//Ian Harshbarger
//Assignment # 1

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	char lastChar = ' ';
	bool ifThen = false;
	bool badWFF = false;
	bool pParameter = false;
	int newInput = -9999;

	while (newInput != -1)
	{
		cout << "Enter a WFF: ";
		if (newInput != -9999) 
		{
			getline(cin, input);
		}
		getline(cin, input);

		lastChar = ' ';
		ifThen = false;
		badWFF = false;

		//check input
		for (int i = 0; i < input.length() && !badWFF; ++i)
		{
			if (!(isalpha(input[i]) || input[i] == '^' || input[i] == '!' || input[i] == '-' || input[i] == '>' || input[i] == '(' || input[i] == ')' || input[i] == ' '))
			{
				badWFF = true;
				cout << "incorrect format\n";
			}
		}

		for (int i = 0; i < input.length() && !badWFF; ++i)
		{
			if (input[i] == ' ' || input[i] == '(' || input[i] == ')' || i == 0)
			{
				//if space chars donothing
				if (input[i] == ' ');
				if (input[i] == '(') 
				{
					pParameter = true;
				}
				if (input[i] == ')') 
				{
					pParameter = false;
				}
			}
			else
			{
				//if ->
				if (lastChar == '-' && input[i] == '>')
				{
					if (ifThen)
					{
						badWFF = true;
					}
					ifThen = true;
				}
				//if 2 chars repeat then WFF is bad
				if (lastChar == input[i])
				{
					badWFF = true;
				}
				//if a statement isnt after a ! then WFF is bad
				if (lastChar == '!' && (!isalpha(input[i]) && input[i] != '(')) 
				{
					badWFF = true;
				}
				//if ! make sure connector is set
				if (input[i] == '!' && (lastChar != '^' || lastChar != 'v' || lastChar != 'V' || lastChar != '>')) 
				{
					badWFF = true;
				}
				//if two statements are next to each other or if a statement is right after a parameter then WFF is bad
				if ((isalpha(lastChar) != 0 && isalpha(input[i]) != 0) || (lastChar == ')' && (input[i] != '^' || input[i] != 'v' || input[i] != 'V' || input[i] != '-')))
				{
					badWFF = true;
				}
				//if two connectors are next to eachother then bad WFF
				if ((lastChar == '^' || lastChar == 'v' || lastChar == 'V' || lastChar == '>') && (input[i] == '^' || input[i] == 'v' || input[i] == 'V' || input[i] == '-' || input[i] == '>')) 
				{
					badWFF = true;
				}
			}
			lastChar = input[i];
		}

		if (badWFF)
			cout << "bad WFF\n";
		else
			cout << "good WFF\n";

		cout << "Enter another? (-1 to quit): ";
		cin >> newInput;
	}
	return 0;
}

