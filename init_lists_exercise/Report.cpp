#include "Report.h"


// constructor to create a report
Report::Report(int day, int month, int year, int hour, int min, std::string desc) : rep_date(day, month, year), rep_time(hour, min), rep_desc(desc)
{
}

void Report::display() const
{
  rep_date.display();
  rep_time.display();
  std::cout << rep_desc;
 }
// write a display function
