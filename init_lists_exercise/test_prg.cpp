#include "Report.h"
void func(Report& r) //copy ctor
{
  r.display();
}


int main()
{
  // Create Report r;
  Report r(1,2,3,4,5,"description\n");
  func(r);
}
