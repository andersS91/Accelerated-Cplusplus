#include "chapter1.h"

void onePlayground(){
	// Ask for the persons name
	cout << "Please enter your first name: ";

	// Read the name
	string name;
	cin >> name;

	const string greeting = "Hello " + name + "!";

	const string spaces(greeting.size(), ' ');
	const string second = "* " + spaces + " *";

	const string first(second.size(), '*');

	cout << endl;
	cout << first << endl;
	cout << second << endl;
	cout << "* " << greeting << " *" << endl;
	cout << second << endl;
	cout << first << endl;

}

void oneFour(){
	{const string s = "a string";
	cout << s << endl;
	{
		const string s = "another string";
		cout << s << endl;
	}
	}
}

void oneSix(){
	cout << "What is your name? ";
	string name;
	cin >> name;
	cout << "Hello, " << name << endl << "And what is yours? ";
	cin >> name;
	cout << "Hello, " << name << "; nice to meet you too!" << endl;
}