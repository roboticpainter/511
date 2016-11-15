
/*
 * Author: Colby Bates
 * File: mystream.h
 */

#ifndef MYSTREAM_H
#define MYSTREAM_H

#include<fstream>
#include<iostream>
#include"TrackingDeque.h"

using namespace::std;

using std::cout;
using std::deque;

class Mystream : public fstream
{
  public:
    Mystream(const char* filename);
    ~Mystream();
    void printpos();
    bool eof();
    char get();

  private:
    string m_filename;
    fstream m_stream;
    streampos m_getpos;
    streampos m_putpos;
    TrackingDeque<char> mydeque;

};

#endif 
