#include "Student_info.h"

bool compare(const Student_info& x, const Student_info& y){
	return x.name < y.name;
}

std::istream& read(std::istream& is, Student_info& s){
	// read and store the student's name and midterm and final exam grade
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework); // read and store all the student's homework grades
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
