/*
sundaram.cpp
@author Robert Streetman
@date 2015-04-25
@desc This program demonstrates the sieve of Sundaram in c++
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string input;
	unsigned int limit, check, index, hi_prime, i, j;
	bool* candidates;
	
	cout << "Enter a number to find all primes less than that number, and then return the largest prime.\n";
	getline(cin,input);
	stringstream(input) >> limit;
	
	check = (limit / 2) - 1;
	candidates = new bool[limit + 1]();
	
	for(i = 1; i <= check; i++)
	{
		j = 1;
		while(j + i + (2 * i * j) <= limit)
		{
			candidates[j + i + (2 * i * j)] = true;
			j++;
		}
	}
	
	i = check;
	while(candidates[i] != false)
	{
		i--;
	}
	
	cout << "Largest prime under " << limit << ": " << 2 * i + 1 << ".\n";
}
