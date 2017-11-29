#include "Student.h"

class MastersStudent: public Student {
private:
  // New fields specific to MastersStudent
  int _ms_grad_year;
  std::vector<float> _ms_grades;

public:  
  MastersStudent(Student ug, int msy);
  
  MastersStudent(std::string fn, std::string ln,
          int ugy, int msy, Major m);

  // New methods specific to MastersStudent
  virtual float getMsGpa();
  virtual void addMsGrade(float grade);

  // Override Student's printInfo to include new fields
  virtual void printInfo() override;
};
