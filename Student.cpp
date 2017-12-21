#include <stdio.h>
#include "Student.h"
#include <numeric>

Student::Student(std::string fn, std::string ln, int y, Major m)
  : _first_name(fn), _last_name(ln), _grad_year(y), _major(m) {}

Student::~Student() {}

float Student::getGpa() {
	if(_grades.size() != 0){
	return accumulate(_grades.begin(), _grades.end(),0.00)/_grades.size(); 
	}
  return 0.0;
}

void Student::addGrade(float grade) {
  _grades.push_back(grade);
}

const std::string& Student::getLastName() {
  return _last_name;
}

std::string Student::majorString(Major m){
	switch(m){
		case Major::EE: return "EE";
		case Major::ME: return "ME";
		case Major::CE: return "CE";
		case Major::CHE: return "CHE";
		case Major::BSE: return "BSE";
		case Major::ART: return "ART";
		case Major::ARCH: return "ARCH";
		default: return "Error";
	}
	return 0;
}


void Student::printInfo() {
printf("%s %s\n",_last_name.c_str(),_first_name.c_str());
printf("%s %s\n", majorString(_major).c_str(),std::to_string(_grad_year).c_str());
printf("GPA: %.2f \n", getGpa());
}
