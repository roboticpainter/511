/*
 * Author: Colby Bates
 * file: structures.cpp
 */

#include <iostream>
#include <math.h>

using namespace std;
using std::cout;

union shape_ptr
{
  struct Circle* cir_ptr;
  struct Triangle* tri_ptr;
};

struct Triangle
{
  char color;
  struct VT_Tri* vttri;
  char shade;
  short base;
  short height;
};
 
struct Circle
{
  char color;
  struct VT_Cir* vtcir;
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

void do_poly(union shape_ptr shape);

int main()
{

  union shape_ptr shapes[4];

  struct Circle* cir1 = new Circle;
  struct Circle* cir2 = new Circle;
  struct Triangle* tri1 = new Triangle;
  struct Triangle* tri2 = new Triangle;   

  shapes[0] = *cir1;
  shapes[1] = *cir2;
  shapes[2] = *tri1;
  shapes[3] = *tri2;

  for(int i = 0; i < 4; i++)
  {
    do_poly(shapes[i]);
  }
  
 /*
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
  */
  return 0;
}

void setCircle(struct Circle* x, char col, char sha, short rad)
{
  x->color = col;
  x->vtcir = new VT_Cir;
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
  x->vttri = new VT_Tri;
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

void do_poly(union shape_ptr shape)
{
  shape.tri_ptr->drawT(triangle);
  shape.tri_ptr->areaT(triangle);
}
//pointer to function with same signature as drawCircle
//void (*drawFunc)(stuct Circle*)
