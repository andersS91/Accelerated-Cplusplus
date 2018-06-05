#include "Student_info.h"

bool compare(const Student_info& x, const Student_info& y){
	return x.name < y.name;
}

std::istream& read(std::istream& is, Student_info& s){
	std::string name;
	double midterm;
	double final;
	std::vector<double> homework;
	// read and store the student's name and midterm and final exam grade
	is >> name >> midterm >> final;
	read_hw(is, homework); // read and store all the student's homework grades
	s.name = name;
	s.grade = grade(midterm, final, homework);

	return is;
}

std::istream& read_hw(std::istream& in, std::vector<double>& hw){
	if (in){
		//get rid of previous content
		hw.clear();

		//read homework grades
		double x;
		while (in >> x){
			hw.push_back(x);
		}

		//clear the stream sothat input will work for the next student
		in.clear();
	}
	return in;
}
