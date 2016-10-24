/*
 *  Author: Colby Bates
 *  file: function_pointers_exercise.cpp
 *
 */
#include <iostream>


using namespace std;

using std::cout;


float add(float a, float b);

float subtract(float a, float b);

float divide(float a, float b);

float multiply(float a, float b);

void 3dimen(int x, int y, int z);

void 3dimenclean();

int main()
{

  
/*
  typedef float (*FP)(float, float);
 
  FP ps[4] = {&add, &subtract, &divide, &multiply};
  

  float (*p1)(float, float);
  
 // p1 = &add;

 // float result = p1(4.8, 5.2);
  
 // cout << "Result: " << result << "\n";

  for(int i=0; i<4; i++)
  {
    float result = ps[i](4.8, 5.2);
    cout << "Result: " << result << "\n";
  }
 */
  return 0;
  
}


float add(float a, float b)
{
  return a+b;
}

float subtract(float a, float b)
{
  return a-b;
}

float divide(float a, float b)
{
  return a/b;
}

float multiply(float a, float b)
{
  return a*b;
}

void 3dimen(int x, int y, int z)
{
  float ***p3darray;
  p3darray = new float**[x];
  for(int i=0; i < x; i++)
  {
    p3darray[i] = new double*[y];
    for(int j=0; j < y; j++)
    {
      p3darray[x][y] = new double[z];
    }
  }
}

void 3dimenclean()
{
  for(int i=0; i < )
}
