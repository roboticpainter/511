#ifndef REPORT_H
#define REPORT_H
#include "Time.h"
#include "Date.h"
#include <string>
#include <iostream>
class Report {
  private:
    Date rep_date;
    Time rep_time;
    std::string rep_desc;
  public:
    Report(int day, int month, int year, int hour, int min, std::string desc);
    void display() const; //you write the definition
};
#endif
