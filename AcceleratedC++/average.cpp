#include "average.h"

double average(std::vector<double> vec){
	typedef std::vector<double>::size_type vec_sz;
	vec_sz size = vec.size();

	if (size == 0) throw std::domain_error("Cannot take the average of an empty vector");
	double result = 0.0;

	for (int i = 0; i < size; ++i){
		result += vec[i];
	}

	result /= size;
	
	return result;
}