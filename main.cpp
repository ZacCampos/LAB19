/*******************************************************************************
 * AUTHOR		: Zac Campos & Justin Blanco
 * STUDENT ID	: 1058476
 * LAB #19		: Repetition - Buddy's Average Sheep Age Calculator
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 3/28/18
 ******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
 * Repetition - Buddy's Average Sheep Age Calculator
 * -----------------------------------------------------------------------------
 * This program will calculate the average age of all of his sheep.
 * -----------------------------------------------------------------------------
 * INPUT:
 *		sheepAge : sheep's age
 *
 * OUTPUT:
 * 		avgAge   : average age of all the sheep
 * 		<Program will additionally output the average age grouping into three
 * 		 categories: YOUNG, MIDDLE-AGED, AGING>
 *
 ******************************************************************************/


int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMERS	: Programmers' Names
	 * CLASS		: Students' Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR FORMATTING INPUT AND OUTPUT
	 * ------------------------------------------------------------------------
	 * TEST_NUM     : the number of times the program will run
	 * TAB_COL      : properly indents the input and output
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CATEGORIZING SHEEP
	 * ------------------------------------------------------------------------
	 * YOUNG_AGE    : the max age of a young sheep
	 * OLD_AGE      : the minimum age of aging sheep
	 **************************************************************************/
	//Output - used for class heading
	const char PROGRAMMER[] = "Zac Campos & Justin Blanco";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8am";
	const int  LAB_NUM		= 19;
	const char LAB_NAME[]	= "Buddy's Average Sheep Age Calculator";
	//Output - used for formatting input and output
	const int  TEST_NUM		= 3;
	const int  TAB_COL		= 4;
	//Output - used for categorizing sheep
	const int  YOUNG_AGE    = 3;
	const int  OLD_AGE      = 7;
	// variable declarations go here
	int testCount;			//CALC       - current test run
	int sheepAge;			//IN & CALC  - user inputed sheep age
	int ageCount;			//CALC       - running total of sheep ages
	int sheepCount;			//CALC       - running total of total sheep
	float avgAge;           //CALC & OUT - average age of the sheep

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMER 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  LAB #"	<< setw(9)	<< LAB_NUM		<< ": "	<< LAB_NAME	<< endl;
	cout << "***************************************************\n\n";
	cout << right;

	//for loop to run the program a specific number of times
	for(testCount = 1; testCount <= TEST_NUM; testCount = testCount + 1)
	{
		//set accumulators to 0
		ageCount   = 0;
		sheepCount = 0;

		//output test # and welcome message
		cout << "Test #" << testCount << ":\n";
		cout << "Welcome to Buddy's Average Sheep Age Calculator!\n\n";

		/**********************************************************************
		 * INPUT - reads in sheep age until user inputs a negative number to
		 * 			exit. (sheepAge)
		 **********************************************************************/
		//prompt with input instructions
		cout << setw(TAB_COL) << " " << "Enter in the sheep ages,"
			 << " input -1 to exit\n";

		//do-while loop to handle an invalid sheep age for first sheep
		do
		{
			//reads in user inputed sheep age
			cout << setw(TAB_COL) << " " << "Sheep Age: ";
			cin  >> sheepAge;
			cin.ignore(1000,'\n');

			//outputs error message
			if(sheepAge > 9)
			{
				cout << "\n*** Invalid sheep age - please input a value less"
				     << " than or equal to 9!\n\n";
			}
		}while(sheepAge > 9);

		//while loop to get sheep age until user inputs a negative age
		while(sheepAge > -1)
		{
			//increment and accumulator
			ageCount   = ageCount + sheepAge;
			sheepCount = sheepCount + 1;
			//do-while loop to handle an invalid sheep age
			do
			{
				//read in user inputed sheep age
				cout << setw(TAB_COL) << " " << "Sheep Age: ";
				cin  >> sheepAge;
				cin.ignore(1000,'\n');

				//outputs error message
				if(sheepAge > 9)
				{
					cout << "\n*** Invalid sheep age - please input a value"
						 << " less than or equal to 9!\n\n";
				}
			}while(sheepAge > 9);
		}
		/**********************************************************************
		 * PROCESSING - Calculates the average age of the group of sheep
		 * 				(avgAge)
		 **********************************************************************/
		avgAge = ageCount / float(sheepCount);
		/**********************************************************************
		 * OUTPUT - outputs the general age category of the group of sheep
		 **********************************************************************/
		//outputs the average age of the group of sheep
		cout << fixed << setprecision(1);
		cout << "\n" << setw(TAB_COL) << " " << "On average your sheep are "
			 << avgAge << " years old!\n";
		cout << setw(TAB_COL) << " " << "In general, your sheep are ";

		//outputs the general age group
		if(avgAge <= YOUNG_AGE)
		{
			cout << "BABIES!";
		}
		else if(avgAge >= OLD_AGE)
		{
			cout << "AGING - time to breed!";
		}
		else
		{
			cout << "MIDDLE-AGED!";
		}
		cout << "\n\n\n" << endl;
	}
	//outputs closing message
	cout << "Thank you for using Buddy's Average Sheep Age Calculator!\n";
	cout << "Have a great day!! :)";
	return 0;
}





