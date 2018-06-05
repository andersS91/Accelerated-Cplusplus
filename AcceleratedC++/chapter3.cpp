#include "chapter3.h"
#include <ios>
#include <iomanip>

void threePlayground(){
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	// ask for and read the midterm and final grades
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;

	//ask for homework grades
	cout << "Enter all your homework grades, followed by end-of-file: ";

	// the number and sum of grades read so far
	int count = 0;
	double sum = 0;

	// a variable into which to read
	double x;

	//invariant
	// we have read count grades so far, and sum 
	// is the sum of the first count grades
	while (cin >> x){
		++count;
		sum += x;
	}

	// write the result
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
		<< setprecision(prec) << endl;

	return;
}

int threeZero(){
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "Enter all your homework grades, "
		"followed by end-of-file: ";
	
	vector<double> homework;
	double x;
	while (cin >> x){
		homework.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0){
		cout << endl << "You must enter your grades.  "
			"Please try again." << endl;
		return 1;
	}

	sort(homework.begin(), homework.end());

	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];

	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;

	return 0;
}

void threeOne(){
	return;
}

//Write a program to compute and print the quartiles 
//(that is, the quarter of the numbers with the 
//largest values, the next highest quarter, and so on) 
//of a set of integers
void threeTwo(){
	double input[20] = { 5.0, 100.0, 153.0, 249.0, 2004.0, 20139.0,
					914.0, 1.0, 134.0, 3452.0, 292.0, 2039.0,
					203.0, 202.0, 1353.0, 13423.0, 12314.0, 2.0,
					8.0, 12.0 };
	vector<double> homework;
	for (int i = 0; i < 20; ++i){
		homework.push_back(input[i]);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	sort(homework.begin(), homework.end());

	vec_sz lower = size / 4;
	double lowerQuantile;
	lowerQuantile = size % 2 == 0 ? (homework[lower] + homework[lower - 1]) / 2 : homework[lower];

	vec_sz upper = size - size / 4;
	double upperQuantile;
	upperQuantile = size % 2 == 0 ? (homework[upper] + homework[upper - 1]) / 2 : homework[upper];

	streamsize prec = cout.precision();
	cout << "Lower quartile: " << setprecision(3) << lowerQuantile << endl;
	cout << "Upper quartile: " << setprecision(5) << upperQuantile << setprecision(prec) << endl;

	return;
}

//Write a program to count how many times each distinct word
//appears in its input
void threeThree(){
	vector<string> inputs;
	inputs.push_back("three");
	inputs.push_back("one");
	inputs.push_back("two");
	inputs.push_back("three");
	inputs.push_back("two");
	inputs.push_back("three");

	typedef vector<string>::size_type vec_sz;
	vec_sz size = inputs.size();

	sort(inputs.begin(), inputs.end());
	vector<string> words;
	vector<int> count;
	words.push_back(inputs[0]);
	count.push_back(0);
	for (int i = 0, j = 0; i < size; ++i){
		if (i > 0 && inputs[i] != inputs[i - 1]){
			count.push_back(1);
			words.push_back(inputs[i]);
			++j;
		}
		else {
			count[j] = count[j] + 1;
		}
	}

	vec_sz countSize = count.size();
	for (int i = 0; i < countSize; ++i){
		cout << words[i] << ": " << count[i] << endl;
	}

	return;
}

//Write a program that reports back the shortest
//and longest string in its input
void threeFour(){
	vector<string> inputs;
	inputs.push_back("three");
	inputs.push_back("panda");
	inputs.push_back("fantastic");
	inputs.push_back("in");
	inputs.push_back("two");
	inputs.push_back("three");

	int shortest, longest, length, shortestIndex, longestIndex;
	shortest = 100000;
	longest = -1;
	length = 0;
	string newString = "";
	typedef vector<string>::size_type vec_sz;
	vec_sz size = inputs.size();

	for (int i = 0; i < size; ++i){
		newString = inputs[i];
		length = newString.length();
		if (length < shortest){
			shortest = length;
			shortestIndex = i;
		}

		if (length > longest){
			longest = length;
			longestIndex = i;
		}
	}

	cout << "Longest input was: " << inputs[longestIndex] << endl;
	cout << "Shortest input was: " << inputs[shortestIndex] << endl;


	return;
}


//Write a program that will keep track of grades for several students
//at once. The program could keep two vectors in sync: The first should 
//hold the student's names, and the second the final grades that can be
//computed as input is read. For now, you should assume a fixed number
//of homework grades. 
void threeFive(){
	vector<string> names;
	names.push_back("Anders");
	names.push_back("Mark");
	names.push_back("Johnny");
	names.push_back("Obel");

	vector<double> finalGrades;
	double x;

	typedef vector<string>::size_type vec_str_sz;
	vec_str_sz namesSize = names.size();
	double midterm, final;

	for (int i = 0; i < namesSize; ++i){
		vector<double> grades;
		cout << "Please enter " << names[i] << "'s midterm and final exam grades: " << endl;
		
		cin >> midterm >> final;

		cout << "Enter all of " << names[i] << "'s homework grades, "
			"followed by -1." << endl;

		while (cin >> x){
			if (x < 0) break;
			grades.push_back(x);
		}

		typedef vector<double>::size_type vec_sz;
		vec_sz size = grades.size();
		if (size == 0){
			cout << endl << "You must enter your grades.  "
				"Please try again." << endl;
			return;
		}

		vec_sz mid = size / 2;
		double median;
		median = size % 2 == 0 ? (grades[mid] + grades[mid - 1]) / 2 : grades[mid];

		finalGrades.push_back(0.2f * midterm + 0.4f * final + 0.4f * median);
		cout << endl;
	}

	for (int i = 0; i < namesSize; ++i){
		cout << names[i] << "'s final grade was: " << finalGrades[i] << endl;
	}

	return;
}


//The average-grade computation might divide by zero if the student
//didn't enter any grades. Division by zero is undefined in C++,
//which means that the implementation is permitted to do anything
//it likes. What does your C++ implementation do in this case?
//Rewrite the program so that its behavior does not depend on how
//the implementation treats division by zero.
void threeSix(){
	vector<string> names;
	names.push_back("Anders");
	names.push_back("Mark");
	names.push_back("Johnny");
	names.push_back("Obel");

	vector<double> finalGrades;
	double x;

	typedef vector<string>::size_type vec_str_sz;
	vec_str_sz namesSize = names.size();
	double midterm, final;

	for (int i = 0; i < namesSize; ++i){
		vector<double> grades;
		cout << "Please enter " << names[i] << "'s midterm and final exam grades: " << endl;

		cin >> midterm >> final;

		cout << "Enter all of " << names[i] << "'s homework grades, "
			"followed by -1." << endl;

		while (cin >> x){
			if (x < 0) break;
			grades.push_back(x);
		}

		typedef vector<double>::size_type vec_sz;
		vec_sz size = grades.size();
		if (size == 0){
			cout << endl << "You must enter your grades.  "
				"Please try again." << endl;
			return;
		}

		vec_sz mid = size / 2;
		double median;
		median = size % 2 == 0 ? (grades[mid] + grades[mid - 1]) / 2 : grades[mid];

		finalGrades.push_back(0.2f * midterm + 0.4f * final + 0.4f * median);
		cout << endl;
	}

	for (int i = 0; i < namesSize; ++i){
		cout << names[i] << "'s final grade was: " << finalGrades[i] << endl;
	}

	return;
}

void threeSeven(){
	return;
}

void threeEight(){
	return;
}

void threeNine(){
	return;
}