#include "chapter2.h"

void twoPlayground(){

}

void twoZero(){
	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";
	
	// the number of blanks surrounding the greeting
	const int pad = 1;

	// the number of rows and columns to write
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 3;

	// write a blank line to separate the output from the input
	cout << endl;

	// write rows rows of output
	// invariant: we have written r rows so far
	for (int r = 0; r != rows; ++r){
		string::size_type c = 0;

		//invariant: we have written c characters so far in the current row
		while (c != cols){

			// is it time to write the greeting?
			if (r == pad + 1 && c == pad + 1){
				cout << greeting;
				c += greeting.size();
			}else{

				// are we on the border?
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}
	return;
}

void twoOne(){
	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	// the number of blanks surrounding the greeting
	const int pad = 0;

	// the number of rows and columns to write
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 3;

	// write a blank line to separate the output from the input
	cout << endl;

	// write rows rows of output
	// invariant: we have written r rows so far
	for (int r = 0; r != rows; ++r){
		string::size_type c = 0;

		//invariant: we have written c characters so far in the current row
		while (c != cols){

			// is it time to write the greeting?
			if (r == pad + 1 && c == pad + 1){
				cout << greeting;
				c += greeting.size();
			}
			else{

				// are we on the border?
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}
	return;
}

void twoTwo(){
	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	// the number of blanks surrounding the greeting
	const int pad = 1;
	const int sidePad = 2;
	const int otherPad = 3;

	// the number of rows and columns to write
	const int rows = otherPad * 2 + 3;
	const string::size_type cols = greeting.size() + sidePad * 2 + 3;

	// write a blank line to separate the output from the input
	cout << endl;

	// write rows rows of output
	// invariant: we have written r rows so far
	for (int r = 0; r != rows; ++r){
		string::size_type c = 0;

		//invariant: we have written c characters so far in the current row
		while (c != cols){

			// is it time to write the greeting?
			if (r == otherPad + 1 && c == sidePad + 1){
				cout << greeting;
				c += greeting.size();
			}
			else{

				// are we on the border?
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}
	return;
}


void twoThree(){
	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// ask for the person's name
	cout << "Please enter the amount of side padding: ";

	// read the name
	int tempPad;
	cin >> tempPad;

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	// the number of blanks surrounding the greeting
	const int pad = 1;
	const int sidePad = tempPad;
	const int otherPad = 3;

	// the number of rows and columns to write
	const int rows = otherPad * 2 + 3;
	const string::size_type cols = greeting.size() + sidePad * 2 + 3;

	// write a blank line to separate the output from the input
	cout << endl;

	// write rows rows of output
	// invariant: we have written r rows so far
	for (int r = 0; r != rows; ++r){
		string::size_type c = 0;

		//invariant: we have written c characters so far in the current row
		while (c != cols){

			// is it time to write the greeting?
			if (r == otherPad + 1 && c == sidePad + 1){
				cout << greeting;
				c += greeting.size();
			}
			else{

				// are we on the border?
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}
	return;
}


void twoFour(){
	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// ask for the person's name
	cout << "Please enter the amount of side padding: ";

	// read the name
	int tempPad;
	cin >> tempPad;

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	// the number of blanks surrounding the greeting
	const int pad = 1;
	const int sidePad = tempPad;
	const int otherPad = 3;

	// the number of rows and columns to write
	const int rows = otherPad * 2 + 3;
	const string::size_type cols = greeting.size() + sidePad * 2 + 3;

	// write a blank line to separate the output from the input
	cout << endl;

	// write rows rows of output
	// invariant: we have written r rows so far
	for (int r = 0; r < rows; ++r){
		string::size_type c = 0;

		//invariant: we have written c characters so far in the current row
		while (c < cols){

			// is it time to write the greeting?
			if (r == otherPad + 1 && c == sidePad + 1){
				cout << greeting << ' ';
				c += greeting.size() + 1;
			}
			else{

				// are we on the border?
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1){
					cout << "*";
					++c;
				} else {
					cout << string(sidePad, ' ');
					c += sidePad;
				}
				
			}
		}
		cout << endl;
	}
	return;
}

// Write a set of "*" characters so that they form a square, a rectangle and a triangle
void twoFive(){
	cout << "SQUARE: " << endl;
	const int squareSide = 10;
	for (int r = 0; r < squareSide; ++r){
		cout << string(squareSide, '*') << endl;
	}
	cout << endl << endl;

	cout << "RECTANGLE: " << endl;
	const int rectangleColumn = 10;
	const int rectangleRow = 20;
	for (int r = 0; r < rectangleRow; ++r){
		cout << string(rectangleColumn, '*') << endl;
	}
	cout << endl << endl;

	cout << "CIRCLE: " << endl;
	const int circleRadius = 10;
	const int doubleRadius = 2 * circleRadius;
	for (int r = 0; r < circleRadius; ++r){
		cout << string(circleRadius - r, ' ');
		cout << string(r << 1, '*');
		cout << string(circleRadius - r, ' ');
		cout << endl;
	}
	for (int r = circleRadius-1; r > 0; --r){
		cout << string(circleRadius - r, ' ');
		cout << string(r << 1, '*');
		cout << string(circleRadius - r, ' ');
		cout << endl;
	}
	cout << endl << endl;


	return;
}

// What does the following code do
void twoSix(){
	int i = 0;
	while (i < 10){
		i += 1;
		cout << i << endl;
	}
	//It writes the numbers from 0 to (and including 9)
	return;
}

// Write a program that counts down from 10 to -5
void twoSeven(){
	for (int i = 10; i > -6; --i){
		cout << i << endl;
	}
	return;
}

// Write a program to generate the product of the numbers in the range [1 10)
void twoEight(){
	int sum = 1;
	for (int i = 1; i < 10; ++i){
		sum *= i;
	}
	cout << "The product of the numbers in the range [1 10) is: " << sum << endl;
	return;
}

// Write a program that asks the user to enter two numbers that tells 
// the user which number is larger than the other
void twoNine(){
	cout << "Please enter a number: ";
	int a, b, biggest, smallest;
	cin >> a;

	cout << "Please enter another number: ";
	cin >> b;

	if (a != b){
		biggest = a > b ? a : b;
		smallest = a < b ? a : b;
	}	else {
		cout << "Error! The two numbers are equal.";
		return;
	}

	cout << biggest << " is bigger than " << smallest << endl;
	return;
}


