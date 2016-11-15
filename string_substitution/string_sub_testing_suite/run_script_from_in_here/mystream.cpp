
/*
 * Author: Colby Bates
 * File: mystream.cpp
 */

#include"mystream.h"

Mystream::Mystream(const char* filename) : m_filename(filename), m_stream(filename, fstream::in|fstream::out), m_getpos(m_stream.tellg()), m_putpos(m_stream.tellp()) 
{
}

Mystream::~Mystream()
{
}

void Mystream::printpos()
{
  cout << "Getpos: " << m_getpos << "\n";
  cout << "Putpos: " << m_putpos << "\n";
}

bool Mystream::eof()
{
  return m_stream.eof();
}

char Mystream::get()
{
  if(!mydeque.empty())
  {

  }
}
