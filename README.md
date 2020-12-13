* Pseudocode or Algorithm for the program:
	(be sure to indent items with control structure)
	(need to match flow chart submitted in documentation)
  1.Declare global variables:

\\const int ROWS = 3;
const int COLS = 3;
const int MIN = 1;  
const int MAX = 9; 

2. declare local variable
	char char tryAgain='y';
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];

3. execute Fill array 
	Declare arrayRow1[size];
			arrayRow2[size];
			arrayRow3[size];
			int columnCounter;
	ask for the value in Column 1 Row 1
	ask for the value in Column 2 Row 1
	ask for the value in column 3 Row 1

	repeat for every row
4. execute show Array
	Print values for every column in every row

5. execute isMagicSquare
	execute check Range

	a. check the first column of values to see if they are between 0-9
	b. If they are not, return false and stop the function.
		If they are, repeat step a for the other 2 rows
	c. return true

	execute check Unique
		a. int counter;
		b. int nestedCounter;
		c. compare the values in different rows to each other
			If a repeated value is found, return false and end the sequence
			If no repeated value is found, continue.
		d. compare the values in row 1 to each other,
			If any two are equal return false and exit the program
			if not, repeat for the other 2 rows.
		e. return true

	execute check RowSum

		a. declare rowSum1, Row Sum2, Row sum3

		b. set rowSum1 to the sum of every value in Row 1
		c. set rowSum2 to the sum of every value in Row 2
		c. set rowSum3 to the sum of every value in Row 3

		e. Compare the 3 sums to each other.
			If they are not all the same, return false
			if they are the same, return true.

		execute check columnSum
		
		a. set columnSum1 to the sum of every value in column 1
		b. set columnSum2 to the sum of every value in column 2
		c. set colomnSum3 to the sum of every value in column 3

		d. Compare the 3 sums to each other.
			If they are not all the same, return false
			if they are the same, return true.

		execute check Diag Sum

		a. declare DiagSum up, diagsumdown

		b diag Sum up = arrayrow1[2]+arrayrow2[1]+array row 3[0];
		c diag sum down =arrayrow1[0]+arrayrow2[1]+array row 3[2];

		Compare the sums
			If the sums are the same, return true. 
			If the sums differ, return false.

	Compare th returned values of each returned function.
	If they are all equal to each other and they are true, return true
	If one value returns false, return false

	3. 	If the returned value from magic square is true, say this is a magic suqre
		If the value is false, say it is not a magic square.

	Ask if they would like to try again,
	If yes, start over from 1
	If no, tell them the programmer name and stop.
*/
