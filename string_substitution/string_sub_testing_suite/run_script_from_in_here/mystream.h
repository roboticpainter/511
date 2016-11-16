
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
    Mystream(const char* filename, string search, string replace);
    ~Mystream();
    void printpos();
    bool eof();
    char get();
    void put(char ch);
    int getput();

  private:
    string m_filename;
    string m_search;
    string m_replace;
    fstream m_stream;
    streampos m_getpos;
    streampos m_putpos;
    TrackingDeque<char> mydeque;

};

#endif 
