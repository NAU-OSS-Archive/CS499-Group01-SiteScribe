// CS499-Group01-SiteScribe
// Pull Request Assignment
// 4th Sept 2018
// Owner: Colton Nunley
// Contributers: Joseph Remy, Julian Bell, and Tanner Massahos

// Required imports
#include <stdio.h>
#include <stdlib.h>

// Method pre-declarations
int characterToInt(char* charArray);
int characteristic(char numString[], int* c);
int mantissa(char numString[], int* numerator, int* denominator);

char number[] = "123.456";
int c, n, d;

// Converts a char to an integer
int characterToInt(char* charArray)
{
  int result = 0;
  for (int index = 0; charArray[index] != '\0'; index++)
  {
    result = (result*10) + (charArray[index] - '0');
  }
  return result;
}

// Returns the part of a float before the decimal (like a floor function)
int characteristic(char numString[], int* c)
{
	int index;
	char tempArray[100];
	for (index = 0; numString[index] != '.' && numString[index] != '\0'; index++)
	{
		tempArray[index] = numString[index];
	}
	
	tempArray[index] = '\0';
	printf("%s\n", tempArray);
	return 1;
}

// Returns the part of a float after decimal (significand)
int mantissa(char numString[], int* numerator, int* denominator)
{
	int index, index2;
	char tempArray[100];
	for (index = 0; numString[index] != '.' && numString[index] != '\0'; index++) {}
	index++;
	for (index2 = 0; numString[index] != '\0'; index++)
	{
		tempArray[index2] = numString[index];
		index2++;
	}
	printf("%s, %d\n", tempArray, index2);
	return 1;
}

// If the conversion from C string to integers can take place
int main()
{
	if(characteristic(number, &c) && mantissa(number, &n, &d))
	{
	    //do some math with c, n, and d
	}
	else
	{
	    //handle the error on input
	}
	return 1;
}
