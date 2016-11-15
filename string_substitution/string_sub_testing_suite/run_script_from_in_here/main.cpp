/*
 * Author: Colby Bates
 * File: main.cpp
 */

#include <iostream>
#include <fstream>
#include "mystream.h"

using namespace std;
using std::cout;


int main(int argc, char *argv[])
{
  string search = argv[1];
  string replace = argv[2];
  Mystream file(argv[3]);

  //file.printpos();  

  while(!file.eof())
  {
    file.get();
  }  

  return 0;
}
