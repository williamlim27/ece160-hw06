#include "Student.h"
#include <map> // stdlib header

class StudentDatabase {
private:
  // A map that has last name as the key 
  // and a pointer to a Student object as a value
  // You may assume last names are unique
  std::map<std::string, Student*> _students;

public:
  // Insert a student into _students map
  void addStudent(Student *s);

  // Find the student with the matching last_name
  // and call printInfo on that student, or
  // print "<last_name> not found" if the student is not found.
  void printStudent(std::string last_name);
};
