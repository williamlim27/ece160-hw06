#include <stdio.h>
#include "Student.h"

Student::Student(std::string fn, std::string ln, int y, Major m)
  : _first_name(fn), _last_name(ln), _grad_year(y), _major(m) {}

Student::~Student() {}

float Student::getGpa() {
  // TODO Fill in real implementation
  return 0.0;
}

void Student::addGrade(float grade) {
  // TODO Fill in real implementation
}

const std::string& Student::getLastName() {
  // TODO Fill in real implementation
  return std::string();
}

void Student::printInfo() {
  // TODO Fill in real implementation
  printf("Student::printInfo() not implemented\n");
}
