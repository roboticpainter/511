/*
 * Author: Colby Bates
 * File: main.cpp
 */

#include <iostream>
#include <fstream>
#include "mystream.h"
#include <unistd.h>

using namespace std;
using std::cout;


int main(int argc, char *argv[])
{
  char tmp;
  string search = argv[1];
  string replace = argv[2];
  Mystream file(argv[3], search, replace);
  file.seekg(0, file.end);
  int length = file.tellg();
  file.seekg(0, file.beg);

  //file.printpos();  

  while(!file.eof())
  {
    tmp = file.get();
    file.put(tmp);
  }  

  file.close();
  truncate(argv[3], file.getput());

  return 0;
}
