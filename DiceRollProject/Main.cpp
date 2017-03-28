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
	srand(time(0)); //srand is the seed of rand(), by using time(0), it's a constantly changing number based on number of seconds since 1970.

	cout << "Rolling the dice " << totalRolls << " times, please be patient...";

	for (int i = 0; i < totalRolls; i++) {
		dieOne = 1 + (rand() % 6); // 1+rand()%6, this forces the rand() to pick a number from 0-5, thus we add one in order to get results from 1-6.
		dieTwo = 1 + (rand() % 6);
		result = dieOne + dieTwo;
		switch (result) {
		case 2:
			tallies[0]++;
			break;
		case 3:
			tallies[1]++;
			break;
		case 4:
			tallies[2]++;
			break;
		case 5:
			tallies[3]++;
			break;
		case 6:
			tallies[4]++;
			break;
		case 7:
			tallies[5]++;
			break;
		case 8:
			tallies[6]++;
			break;
		case 9:
			tallies[7]++;
			break;
		case 10:
			tallies[8]++;
			break;
		case 11:
			tallies[9]++;
			break;
		case 12:
			tallies[10]++;
			break;
		} //end switch
	} //end for

	system("cls"); //Clears console

	for (int i = 0; i <= 10; i++) {
		cout << "Total " << i + 2 << " | " << tallies[i] << endl;
	}
} //end main