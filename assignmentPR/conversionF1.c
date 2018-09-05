// CS499-Group01-SiteScribe
// Pull Request Assignment
// 4th Sept 2018
// Owner: Colton Nunley
// Contributers: Joseph Remy, Julian Bell, and Tanner Massahos

// Required imports
#include <stdio.h>
#include <stdlib.h>

// Method pre-declarations
int charToInt(char* charArray);
int alphaValidate(char input);
// int characterToInt(char* charArray);
int characteristic(char numString[], int* c);
int mantissa(char numString[], int* numerator, int* denominator);

char number[] = "123.456";
int c, n, d;


/*___________________________________________________________________________*/
//Converts character into an integer
int charToInt(char* charArray)
{
    int finalInt = 0; // The return int

    //Loop through eveey alhpa numeric char in the string and convert
    //into corresponding int.
    for (int i = 0; charArray[i] != '\0'; i++)
    {
        if(alphaValidate(charArray[i]) == 1)
        {
            return -1; // Char is not a integer. 
        }
        finalInt = finalInt*10 + charArray[i] - '0'; // - '0' removes all 0's.
    }
  
    // return the final integer that has been converted from the passed string.
    return finalInt;
}
/*___________________________________________________________________________*/



/*___________________________________________________________________________*/
//Validates that the given char is actually a number
int alphaValidate(char input)
{
    if(input >= '0' && input <= '9')
        {
            return 0;
        }
    return '\0';
}
/*___________________________________________________________________________*/


/*___________________________________________________________________________*/
// Returns the part of a float before the decimal (like a floor function)
int characteristic(char numString[], int* c)
{
	int index, result;
	char tempArray[100];
	for (index = 0; numString[index] != '.' && numString[index] != '\0'; index++)
	{
		tempArray[index] = numString[index];
	}
	
	tempArray[index] = '\0';
	result = charToInt(tempArray);
	return result;
}
/*___________________________________________________________________________*/


/*___________________________________________________________________________*/
// Returns the part of a float after decimal (significand)
int mantissa(char numString[], int* numerator, int* denominator)
{
	int index, index2, result;
	char tempArray[100];
	for (index = 0; numString[index] != '.' && numString[index] != '\0'; index++) {}
	index++;
	for (index2 = 0; numString[index] != '\0'; index++)
	{
		tempArray[index2] = numString[index];
		index2++;
	}

	result = charToInt(tempArray);
	return result;
}
/*___________________________________________________________________________*/

// If the conversion from C string to integers can take place
int main()
{
	if(characteristic(number, &c) && mantissa(number, &n, &d))
	{
	    printf("Characteristic - %d\n", c);
	}
	else
	{
	    //handle the error on input
	}
	return 1;
}
