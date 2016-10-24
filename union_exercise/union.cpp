#include <iostream>

using namespace std;
using std::cout;

union example
{
  int i;
  float f;
  char c;
};

int main()
{
  example e;
  e.i = 1;
  e.f = 1.5;
  e.c = 'a';

  cout << "Example int: " << e.i << "\n";
  cout << "Example float: " << e.f << "\n";
  cout << "Example character: " << e.c << "\n";
}
