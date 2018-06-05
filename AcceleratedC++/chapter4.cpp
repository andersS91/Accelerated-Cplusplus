#include "chapter4.h"

void fourPlayground(){
	return;
}

//Compile, execute, and test the programs in this chapter
int fourZero(){
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;

	// read and store all the records, and find the length of the longest name
	while (read(cin, record)){
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);
	}

	// alphabetize the records
	sort(students.begin(), students.end(), compare);

	for (vector<Student_info>::size_type i = 0; i != students.size(); ++i){
		// write the name, padded on the right to maxlen + 1 characters
		cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');

		// compute and write the grade
		try{
			double final_grade = grade(students[i]);
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade << setprecision(prec);
		}
		catch (domain_error e) {
			cout << e.what();
		}
		cout << endl;
	}
	return 0;
}

//We noted in 4.2.3/65 that it is essential that the argument types in 
// a call to max match exactly. Will the following code work?
//If there is a problem, how would you fix it?
//
//int maxlen;
//Student_info s;
//max(s.name.size(), maxlen);
void fourOne(){
	
	//max requires two matching variable types
	//it does not have the overloaded function
	//max(size_t, int)
	//therefore the function does not exist

	return;
}

//Write a program to calculate the squares of int values up to 100.
//The program should write two columns: The first lists the value;
//the second contains the square of that value. Use setw (described above)
//to manage the output so that the values line up in columns
void fourTwo(){
	cout << "Int:";
	cout << std::setw(20);
	cout << "Square:";
	cout << std::setw(0);
	cout << endl;
	for (int i = 0; i < 100; ++i){
		cout << i;
		cout << std::setw(20);
		cout << i*i;
		cout << std::setw(0);
		cout << endl;
	}
	cout << "Done!" << endl;
	string f;
	cin >> f;
	return;
}

//What happens if we rewrite the previous program to allow values
//up to but not including 1000, but neglect to change the arguments
//to setw? Rewrite the program to be more robust in the face of changes
//that allow i to grow without adjusting the setw arguments.
void fourThree(){
	const int n = 1000;
	const int w = max(n / 150, 20);

	cout << "Int:";
	cout << std::setw(w);
	cout << "Square:";
	cout << std::setw(0);
	cout << endl;

	for (int i = 0; i < n; ++i){
		cout << i;
		cout << std::setw(w);
		cout << i*i;
		cout << std::setw(0);
		cout << endl;
	}
	cout << "Done!" << endl;
	string f;
	cin >> f;
	return;
}


//Now change your squares program to use double values instead of ints.
//Use manipulators to manage the output so that the values line up in
//columns.
void fourFour(){
	const int n = 1000;
	const int w = max(n / 150, 20);

	cout << "Int:";
	cout << std::setw(w);
	cout << "Square:";
	cout << std::setw(0);
	cout << endl;
	streamsize prec = cout.precision();

	double num;
	for (int i = 0; i < n; ++i){
		num = 1.0*i;
		cout << setprecision(10);
		cout << num;
		cout << std::setw(w);
		cout << num*num;
		cout << std::setw(0);
		cout << endl;
	}
	cout << setprecision(prec);

	cout << "Done!" << endl;
	string f;
	cin >> f;

	return;
}

//Write a function that reads words from an input stream and stores them
//in a vector. Use that function both to write programs that count 
//the number of words in the input, and to count how many times
//each word occurred.
void fourFive(){
	vector<string> words;
	string word;

	// read and store all the records, and find the length of the longest name
	//while (cin >> word){
	//	words.push_back(word);
	//}
	words.push_back("one");
	words.push_back("two");
	words.push_back("three");
	words.push_back("three");
	words.push_back("four");
	words.push_back("four");
	words.push_back("two");
	words.push_back("four");
	words.push_back("four");
	words.push_back("three");

	// this should have been a dict/map, but I'm trying to only use what has
	// been introduced so far
	typedef std::vector<Word_count>::size_type vec_sz;
	vec_sz size = words.size();
	vector<Word_count> unique_words;
	vec_sz unique_words_size;
	bool found = false;

	for (int i = 0; i < size; ++i){
		unique_words_size = unique_words.size();
		word = words[i];
		found = false;

		for (int j = 0; j < unique_words_size; ++j){
			if (word == unique_words[j].word){
				unique_words[j].count = unique_words[j].count + 1;
				found = true;
				break;
			}
		}
		if (found == false){
			Word_count new_unique;
			new_unique.word = word;
			new_unique.count = 1;
			unique_words.push_back(new_unique);
		}

	}

	Word_count elem;
	cout << "Your input had: " << endl;
	for (int i = 0; i < unique_words_size; ++i){
		elem = unique_words[i];
		cout << "Word: " << elem.word << " appeared " << elem.count << " times." << endl;
	}

	cout << "Done!" << endl;
	string f;
	cin >> f;

	return;
}

//Rewrite the Student_info structure to calculate the grades immediately
//and only store the final grade
void fourSix(){
	//done
	return;
}

//Write a program to calculate the average of the numbers stored in 
//a vector<double>
void fourSeven(){
	static const double arr[] = { 16.0, 2.0, 77.2, 29.3 };
	vector<double> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
	cout << "Average of the vector equals: "
		<< average(vec) << endl;
	return;
}

//If the following code is legal, what can we infer about the 
//return type of f?
//
//double d = f()[n]
void fourEight(){
	//if it compiles f()'s return type must be double.
	return;
}

void fourNine(){
	return;
}

vector<double> emptyvec(){
	vector<double> v;
	return v;
}