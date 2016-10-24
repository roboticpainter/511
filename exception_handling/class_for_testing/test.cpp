#include<iostream>
#include<stdexcept>
#include "Nausea.h"
#include "Stack.h"

int main()
{

  Nausea::type=Nausea::copy_ctor;
  Nausea::trigger=3;


  Stack<Nausea> snot;
  snot.push(Nausea());
  snot.push(Nausea());
  
  snot.status();
  try 
  {
    snot.pop();
  }
  catch(...)
  {
  }
  snot.status();
 
 /* Stack<Nausea> puke(snot);
 
  puke.push(Nausea());
  puke.push(Nausea());
  puke.push(Nausea());
  puke.push(Nausea());
  puke.push(Nausea());
  puke.push(Nausea());

  snot.status();
  try
  {
    snot=puke;
  }
  catch(...)
  {
  }
  snot.status();
  puke.status();
*/
  return 0;
}
