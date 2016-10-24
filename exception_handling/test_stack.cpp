#include<iostream>
#include"stack_template.h"
using namespace std;

void func(Stack<int> x)
{
}

int main()
{
  Stack<int> s;
  s.push(8.1);
  s.push(7.3);
  s.push(9.0);
  s.push(2.7);
  //etc.
  s.push(6.3);
  s.push(99.9);
  cout << s.size() << endl;
  cout << "popping=" << s.pop()<< endl;
  cout << s.size() << endl;

  Stack<int> t(s); //runs copy ctor. t is a copy of s
  func(s);// calls copy ctor to initialize function parameter

  float fl=3.14;
  float xyz=99.99;
  fl=xyz;
  Stack<int> q;
  q=s;//invokes q's assignment operator


  Stack<int> *bunch_of_em=new Stack<int>[99];
  Stack<int> *bunch_of_em2=new Stack<int>;


  delete [] bunch_of_em;
  delete bunch_of_em2;



  return 0;
}
