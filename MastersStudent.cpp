#include "MastersStudent.h"

// Constructor Implementations
MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln,
    int ugy, int msy, Major m):
    Student(fn, ln, ugy, m), _ms_grad_year(msy) {}

// New methods specific to MastersStudent
float MastersStudent::getMsGpa() {
  // TODO Implement this 
  return 0.0;
}

void MastersStudent::addMsGrade(float grade) {
  // TODO Implement this 
}

// Override Student's printInfo to include new fields
void MastersStudent::printInfo() {
  Student::printInfo();
  // TODO Print additional MastersStudent fields
}
