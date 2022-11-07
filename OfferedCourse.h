#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course 
{
  private:

    string instructorName, term, classTime;  
  public:

    void SetInstructorName(string name);
    void SetTerm(string term);
    void SetClassTime(string time);

    string GetInstructorName();
    string GetTerm();
    string GetClassTime();
};

#endif