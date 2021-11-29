/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Liam Carroll
 */

#include "std_lib_facilities.h";


//The 'const' means that the parameter cannot be altered within the function. This could be used to prevent
//inexperienced coders from reworking the code to edit a parameter that should not be changed. It is not
//done very often because most functions serve the purpose of altering parameters in some way. There are
//not many common cases where a non-reference parameter needs to be preserved.

void firstDigit(const int x)
{
	//A novice programmer might be tempted to remove 'y' and work with 'x' directly.
	int y = x;

	y %= 10;

	cout << "The number " << x << " has a first digit of " << y << ".\n\n";
}

void alterLanguage(const string x)
{
	string y = x;

	//A novice programmer might be tempted to remove 'y' and work with 'x' directly. This should not be done since the original value of
	//'x' is needed for the ending 'cout'.

	for (int i = 0; i < y.length(); i++)
	{
		switch (y[i])
		{
		case 'o':
			y[i] = '0';
			break;
			
		case 'l':
			y[i] = '1';
			break;

		case 's':
			y[i] = '5';
			break;

		case 'e':
			y[i] = '3';
			break;

		case 'g':
			y[i] = '9';
			break;

		case 'i':
			y[i] = '!';
			break;

		case 'c':
			y[i] = '<';
			break;

		case 'n':
			y[i] = '^';
			break;

		case 'd':
			y[i] = '6';
			break;

		case 'm':
			y[i] = '~';
			break;
		}
	}

	cout << "The sentence '" << x << "' becomes:\n" << y << "\n\n";
}

void multiplier(const int x)
{
	int y = x;

	//A novice programmer might be tempted to remove 'y' and work with 'x' directly.

	y = y * 2;

	y = y * y;

	cout << "The value " << x << " has been multiplied to become " << y << ".\n";
}

int main()
{
	firstDigit(47);

	alterLanguage("Howdy there. You can read this? That is a true shocker!");

	multiplier(7);

	return 0;
}