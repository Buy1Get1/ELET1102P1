/*
    Aidan A. && Jesse C.
	"Project 1"  Ver - 3.1
	Nov 23rd, 2020
		 
	 * Restaurant sitting schematic - 5 points
    Diagram of expressions and statements for the restaurant sitting problem - 5 points.  
	^ This is a flow chart of the decision making
    1 person – seat at bar
	2 people – seat at small table
	3 – 4 people – seat at medium table
	5 – 6 people – seat at large table
	7 – 8 people – seat at booth
	More than 8 ask them to wait 45 minutes
	or make a reservation for later on
	 * 
==============================[COMPLETED]========================================
---------Write a code to calculate the cost of insurance depending on the user age. 
	For any driver younger than 25 the yearly insurance cost is $5000/year. 
	After their 25th birthday the insurance drop to $3500.  
	If the record of good driving continues, the driver will get a 2% discount.  
	Between 35 and 50, the insurance will drop to $2,800.  
	After 50, the insurance will stay steady at a cost of $1500 a year. - 20 points
	//Write the code for the decision making - 20 points
    //Which number of the 3 is the bigger number  - 5 points
*/
#include <stdio.h>

int main(void)
{
			//The HEAP!!
	//---------Part 1-------------
	int userParty = 0;
	const int partyOfOne = 1;
	const int partyOfTwo = 2; 
	const int partyOfFive = 5;
	const int partyOfSeven = 7;
	const int partyOfEight = 8;
	//---------Part 2-------------	
	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;
	//---------Part 3-------------
	int userAge = 0;
	const int firstAgeBracket = 25;
	const int secondAgeBracket = 35;
	const int thirdAgeBracket = 50;
	const int firstCostBracket = 5000;
	int secondCostBracket = 3500;
	const int thirdCostBracket = 2800;
	const int fourthCostBracket = 1500;
	int insuranceCost = 0;
	char drivingRecord = 'c';
	char good = 'g';
	char bad = 'b';
	
//-------------------user input----------------------
	printf("//---------------------Part 1----------------------\n\n");
	printf("Hiya, welcome to Andy's Full-Stack, Flapjacks!\n");
	printf("Party for...");
	scanf("%d", &userParty);
	if(userParty == partyOfOne) // 1 person – seat at bar
	{
		printf("We’ve got a seat at the bar open for ya\n\n");
	}
	else if(userParty == partyOfTwo) // 2 people – seat at small table
	{
		printf("We’ve got a small table open for ya\n\n");		
	}
	else if(userParty > partyOfTwo && userParty < partyOfFive) 
	{ // 3 – 4 people – seat at medium table
		printf("We’ve got a medium table open for ya\n\n");
	}
	else if(userParty >= partyOfFive && userParty < partyOfSeven)
	{ // 5 – 6 people – seat at large table
		printf("We’ve got a large table open for ya\n\n");
	}
	else if(userParty >= partyOfSeven && userParty <= partyOfEight)
	{ // 7 – 8 people – seat at booth
		printf("We’ve got a booth open for ya\n\n");
	}
	else if(userParty > partyOfEight)
	{ // More than 8 ask them to wait 45 minutes or make a reservation for later on
		printf("Please wait 45 minutes or make a reservation for later today\n\n");
	}
	printf("//---------------------Part 2----------------------\n\n");
	printf("Hiya, I can pick out the largest number in any three digit group.\n");
	printf("Don't believe me? Check it out...\n");
	printf("Please enter three whole numbers separated by a space: ");
	scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);
	if(firstNumber > secondNumber && firstNumber > thirdNumber)// V--examples of inducing inputs
	{
		printf("%d is the biggest number\n\n", firstNumber);    // 50, 6, 2
	}
	else if(secondNumber > firstNumber && secondNumber > thirdNumber)
	{
		printf("%d is the biggest number\n\n", secondNumber);   // 6, 50, 2
	}
	else if(thirdNumber > firstNumber && thirdNumber > secondNumber)
	{
		printf("%d is the biggest number\n\n", thirdNumber);    // 2, 6, 50
	}
	if(firstNumber == secondNumber && firstNumber > thirdNumber)
	{
		printf("%d is the biggest number\n\n", firstNumber);    // 50, 50, 2
	}
	else if(secondNumber == thirdNumber && secondNumber > firstNumber)
	{
		printf("%d is the biggest number\n\n", secondNumber);   // 2, 50, 50
	}
	else if(thirdNumber == firstNumber && thirdNumber > secondNumber)
	{
		printf("%d is the biggest number\n\n", thirdNumber);    // 50, 2, 50
	}
	else if(thirdNumber == firstNumber && thirdNumber == secondNumber)
	{
		printf("%d is the biggest number\n\n", thirdNumber);    // 50, 50, 50
	}
	printf("//---------------------Part 3----------------------\n\n");
	printf("Please enter your age: ");
	scanf("%d", &userAge);
//------------------- CALCS -------------------------
	
	if(userAge >= thirdAgeBracket) // greater than 50
	{
		insuranceCost = fourthCostBracket;
	}
	else if(userAge >= secondAgeBracket && userAge <= thirdAgeBracket) // 35 to 50
	{
		insuranceCost = thirdCostBracket;  
	}
	else if(userAge >= firstAgeBracket && userAge < secondAgeBracket) // 25 to 35
	{
		printf("How is your driving record? (g/b)");
		scanf(" %c", &drivingRecord); // don't forget & - used a nested decision structure
		if(drivingRecord == bad)
		{
			insuranceCost = secondCostBracket;
		}
		else if(drivingRecord == good)
		{
			insuranceCost = (secondCostBracket - (.02 * (double)secondCostBracket)); 
													// 2% discount for good driving
		}
	}   
	else if(userAge < firstAgeBracket)
	{
		insuranceCost = firstCostBracket; // returns 5000
	}
		
//-------------------programmer output----------------------
	printf("Based on your age, and driving record, your cost of insurance is $%d\n\n", insuranceCost);
    
	return 0;	
}
