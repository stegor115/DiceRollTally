//This is based on a project given to a Java class at GCC
//Objective: Create a program that rolls 2 d-6 dice, totals the sums and tallies the outcomes in an array. Print out the array to view the tallies.
// Roll the dice an obscene number of times for funsies.

#include <iostream>;
#include <cstdlib>;
#include <ctime>;
#include <stdlib.h>

using namespace std;

int main()
{
	//Declarations
	int tallies[11] = {0,0,0,0,0,0,0,0,0,0,0}; //Seems kinda dumb, must be a better way to accomplish this
	int result;
	int dieOne;
	int dieTwo;
	int totalRolls = 40000000;
	srand(time(0)); //srand is the seed of rand(), by using time(0), fetch's system's time in seconds since 1970.

	cout << "Rolling the dice " << totalRolls << " times, please be patient...";

	for (int i = 0; i < totalRolls; i++) {
		dieOne = 1 + (rand() % 6); // 1+rand()%6, this forces the rand() to pick a number from 0-5, thus we add one in order to get results from 1-6.
		dieTwo = 1 + (rand() % 6);
		result = dieOne + dieTwo;

		tallies[result - 2]++; //subtracts two to fit inside array
	} //end for

	system("cls"); //Clears console

	for (int i = 0; i <= 10; i++) {
		cout << "Total " << i + 2 << " | " << tallies[i] << endl;
	}
} //end main