/*
    Restaurant sitting schematic - 5 points
    Diagram of expressions and statements for the restaurant sitting problem - 5 points.  
	^ This is a flow chart of the decision making
    Write the code for the decision making - 20 points
    Which number of the 3 is the bigger number  - 5 points
	 * 
==============================[COMPLETED]========================================
---------Write a code to calculate the cost of insurance depending on the user age. 
	For any driver younger than 25 the yearly insurance cost is $5000/year. 
	After their 25th birthday the insurance drop to $3500.  
	If the record of good driving continues, the driver will get a 2% discount.  
	Between 35 and 50, the insurance will drop to $2,800.  
	After 50, the insurance will stay steady at a cost of $1500 a year. - 20 points
*/
#include <stdio.h>

int main(void)
{
	//The HEAP!!
	int userAge;
	const int firstAgeBracket = 25;
	const int secondAgeBracket = 35;
	const int thirdAgeBracket = 50;
	const int firstCostBracket = 5000;
	int secondCostBracket = 3500;
	const int thirdCostBracket = 2800;
	const int fourthCostBracket = 1500;
	int insuranceCost;
	char drivingRecord;
	
//-------------------user input----------------------
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
		if(drivingRecord == 'b')
		{
			insuranceCost = secondCostBracket;
		}
		else if(drivingRecord == 'g')
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
	printf("Based on your age, and driving record, your cost of insurance is %d\n", insuranceCost);
    return 0;	
}
