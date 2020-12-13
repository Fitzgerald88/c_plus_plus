#include<iostream>
#include<cstdlib>
using namespace std;

// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
void fillArray(int [], int [], int [], int);
void showArray(int[], int[], int[], int);
bool isMagicSquare(int[], int[], int[], int);
bool checkRange(int[], int[], int[], int, int, int);
bool checkUnique(int[], int[], int[], int);
bool checkRowSum(int[], int[], int[], int);
bool checkColumnSum(int[], int[], int[], int);
bool checkDiagSum(int[], int[], int[], int);

int main()
{
	char tryAgain='y';
	/* Define a Lo Shu Magic Square using 3 parallel arrays correspondingto each row of the grid */
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
	// Your code goes here
	while (tryAgain != 'n')
	{
		fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
		showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
		bool magicSquare = isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

		if (magicSquare == true)
			cout << "This is a lo shu magic square\n";
		else
			cout << "This is not a lo shu magic square.\n";

		cout << "do you want to try again?";
		cin >> tryAgain;
		cout << endl;
	}
	cout<<"Programmer: James Fitzgerald\nProject 5\n Due Date 12/1/20\n";

	return 0;
}
x
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	arrayRow1[size];
	arrayRow2[size];
	arrayRow3[size];
	int columnCounter;
	for (columnCounter = 0; columnCounter < size; columnCounter++)
	{
		cout << "Enter the number for row 1 and column " << columnCounter + 1 << "\t";
		cin >> arrayRow1[columnCounter];
	}
	for (columnCounter = 0; columnCounter < size; columnCounter++)
	{
		cout << "Enter the number for row 2 and column " << columnCounter + 1 << "\t";
		cin >> arrayRow2[columnCounter];
	}
	for (columnCounter = 0; columnCounter < size; columnCounter++)
	{
		cout << "Enter the number for row 3 and column " << columnCounter + 1 << "\t";
		cin >> arrayRow3[columnCounter];
	}

}
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	cout << arrayRow1[0] << " " << arrayRow1[1] << " " << arrayRow1[2] << endl;
	cout << arrayRow2[0] << " " << arrayRow2[1] << " " << arrayRow2[2] << endl;
	cout << arrayRow3[0] << " " << arrayRow3[1] << " " << arrayRow3[2] << endl;
}
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, const int min, const int max)
{
	bool rangeCheck;
	int counter;
	for (counter = 0; counter < size; counter++)
	{
		if (arrayRow1[counter] >= min && arrayRow1[counter] <= max)
		{
			rangeCheck = true;
		}
		else
		{
			return rangeCheck = false;
			exit(rangeCheck);
		}
		if (arrayRow2[counter] >= min && arrayRow2[counter] <= max)
		{
			rangeCheck = true;
		}
		else
		{
			return rangeCheck = false;
			exit(rangeCheck);
		}
		if (arrayRow3[counter] >= min && arrayRow3[counter] <= max)
		{
			rangeCheck = true;
		}
		else
		{
			return rangeCheck = false;
			exit(rangeCheck);
		}
	}
	return rangeCheck;
}

bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	int counter;
	int nestedCounter;

	for (counter = 0; counter < size; counter++)
	{
		for (nestedCounter = 0; nestedCounter < size; nestedCounter++)
		{
			if (arrayRow1[counter] == arrayRow2[nestedCounter] || arrayRow2[counter] == arrayRow3[nestedCounter] || arrayRow1[counter] == arrayRow3[nestedCounter]) //this long line compares different values to different rows.
			{
				return false;
				exit;
			}
		}
	}

	if (arrayRow1[0] == arrayRow1[1] || arrayRow1[1] == arrayRow1[2] || arrayRow1[0] == arrayRow1[2])
	{
		return false;
		exit;
	}
	if (arrayRow2[0] == arrayRow2[1] || arrayRow2[1] == arrayRow2[2] || arrayRow2[0] == arrayRow2[2])
	{
		return false;
		exit;
	}
	if (arrayRow3[0] == arrayRow3[1] || arrayRow3[1] == arrayRow3[2] || arrayRow3[0] == arrayRow3[2]) //These 3 sets of if statements compare values within the same rows
	{
		return false;
		exit;
	}
	return true;
}

bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	int row1Sum= arrayRow1[0] + arrayRow1[1] + arrayRow1[2];
	int row2Sum= arrayRow2[0] + arrayRow2[1] + arrayRow2[2];
	int row3Sum= arrayRow3[0] + arrayRow3[1] + arrayRow3[2];




	if (row1Sum == row2Sum && row1Sum == row3Sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool checkColumnSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	int col1Sum = arrayRow1[0] + arrayRow2[0] + arrayRow3[0];
	int col2Sum = arrayRow1[1] + arrayRow2[1] + arrayRow3[1];
	int col3Sum = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];

	if (col1Sum == col2Sum && col1Sum == col3Sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	int diagUpSum= arrayrow3[0] + arrayrow2[1] + arrayrow1[2];
	int diagDownSum = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];



	if (diagDownSum == diagUpSum)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isMagicSquare(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	bool range = checkRange(arrayrow1, arrayrow2, arrayrow3, size, MIN, MAX);
	bool unique = checkUnique(arrayrow1, arrayrow2, arrayrow3, size);
	bool rowSum = checkRowSum(arrayrow1, arrayrow2, arrayrow3, size);
	bool columnSum = checkColumnSum(arrayrow1, arrayrow2, arrayrow3, size);
	bool diagSum = checkDiagSum(arrayrow1, arrayrow2, arrayrow3, size);

	if (range == true && range == unique && unique == rowSum && rowSum == columnSum && columnSum == diagSum) // This line ensures that every bool value has returned true.
	{
		return true;
	}
	else
	{
		return false;
	}
}
