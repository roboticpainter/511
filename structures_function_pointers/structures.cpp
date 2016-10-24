/*
 * Author: Colby Bates
 * file: structures.cpp
 */

#include <iostream>
#include <math.h>

using namespace std;
using std::cout;

struct Triangle
{
  char color;
  char shade;
  short base;
  short height;
};
 
struct Circle
{
  char color;
  char shade;
  short radius; 
};

struct VT_Cir
{
  void (*drawC)(struct Circle*);
  float (*areaC)(struct Circle*);
};

struct VT_Tri
{
  void (*drawT)(struct Triangle*);
  float (*areaT)(struct Triangle*);
};

void setCircle(struct Circle* x, char col, char sha, short rad);

void drawCircle(struct Circle* x);

float areaCircle(struct Circle* x);

void setTriangle(struct Triangle* x, char col, char sha, short b, short h);

void drawTriangle(struct Triangle* x);

float areaTriangle(struct Triangle* x);

int main()
{
  
  struct Circle* circle = new Circle; 
  struct Triangle* triangle = new Triangle;

  struct VT_Cir* vtcir = new VT_Cir;
  struct VT_Tri* vttri = new VT_Tri;

  setCircle(circle, 'b', 'l', 3);
  setTriangle(triangle, 'g', 'd', 2, 4);

  vtcir->drawC = &drawCircle;
  vtcir->areaC = &areaCircle;

  vttri->drawT = &drawTriangle;
  vttri->areaT = &areaTriangle;

  vtcir->drawC(circle);
  cout << "Circle Area: " << vtcir->areaC(circle) << "\n";

  vttri->drawT(triangle);
  cout << "Triangle Area: " << vttri->areaT(triangle) << "\n";

  return 0;
}

void setCircle(struct Circle* x, char col, char sha, short rad)
{
  x->color = col;
  x->shade = sha;
  x->radius = rad;
}

void drawCircle(struct Circle* x)
{

  if(x->shade == 'l')
  {
    cout << "light ";
  }
  else
  {
    cout << "dark ";
  }  

  if(x->color == 'r')
  {
    cout << "red circle, radius=" << x->radius << "\n"; 
  }
  else if(x->color == 'g')
  {
    cout << "grenn circle, radius=" << x->radius << "\n";
  }
  else
  {
    cout << "blue circle, radius=" << x->radius << "\n";
  }
}

float areaCircle(struct Circle* x)
{
  return (3.14 * pow(x->radius, 2));
}

void setTriangle(struct Triangle* x, char col, char sha, short b, short h)
{
  x->color = col;
  x->shade = sha;
  x->base = b;
  x->height = h;
}

void drawTriangle(struct Triangle* x)
{

  if(x->shade == 'l')
  {
    cout << "light ";
  }
  else
  {
    cout << "dark ";
  }  

  if(x->color == 'r')
  {
    cout << "red triangle, base=" << x->base << ",height=" <<  x->height << "\n"; 
  }
  else if(x->color == 'g')
  {
    cout << "green triangle, base=" << x->base << ",height=" <<  x->height << "\n";
  }
  else
  {
    cout << "blue triangle, base=" << x->base << ",height=" <<  x->height << "\n";
  }
}

float areaTriangle(struct Triangle* x)
{
  return (x->height * x->base)/2;
}
//pointer to function with same signature as drawCircle
//void (*drawFunc)(stuct Circle*)
