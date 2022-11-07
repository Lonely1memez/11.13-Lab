#include "Course.h"

void Course::SetCourseNumber(string courseNum) 
{
this->courseNumber = courseNum;
}

void Course::SetCourseTitle(string courseTitle) 
{
this->courseTitle = courseTitle;
}

string Course::GetCourseNumber() 
{
  return courseNumber;
}

string Course::GetCourseTitle() 
{
return courseTitle;
}

void Course::PrintInfo() 
{
  cout << "Course Information: " << endl;
  cout << "  Course Number : " << courseNumber << endl;
  cout << "  Course Title : " << courseTitle << endl;
}