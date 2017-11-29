#include "StudentDatabase.h"
#include "MastersStudent.h"

int main() {
  StudentDatabase db;
  Student *s = new Student("Peter", "Cooper", 1859, Major::EE);
  for (float g = 3.5f; g <= 4.0f; g += 0.1f) {
    s->addGrade(g);
  }
  db.addStudent(s);

  db.printStudent("Cooper");
  db.printStudent("Astrauckas"); // not found

  MastersStudent *ms = new MastersStudent("Julia", "Astrauckas",
      2013, 2015, Major::EE);
  ms->addGrade(3.0);
  ms->addMsGrade(4.0);
  db.addStudent(ms);

  db.printStudent("Astrauckas"); // now it's there!
  
  return 0;
}
