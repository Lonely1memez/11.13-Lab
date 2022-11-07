#include "OfferedCourse.h"

void OfferedCourse::SetInstructorName(string name) 
{
  this->instructorName = name;
}

void OfferedCourse::SetTerm(string term) 
{
  this->term = term;
}

void OfferedCourse::SetClassTime(string time) 
{
  this->classTime = time;
}

string OfferedCourse::GetInstructorName() 
{
  return instructorName;
}

string OfferedCourse::GetTerm() 
{
  return term;
}

string OfferedCourse::GetClassTime() 
{
  return classTime;
}