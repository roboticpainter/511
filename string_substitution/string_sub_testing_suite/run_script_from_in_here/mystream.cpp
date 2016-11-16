
/*
 * Author: Colby Bates
 * File: mystream.cpp
 */

#include"mystream.h"

Mystream::Mystream(const char* filename, string search, string replace) : m_filename(filename), m_search(search), m_replace(replace), m_stream(filename, fstream::in|fstream::out), m_getpos(m_stream.tellg()), m_putpos(m_stream.tellp()) 
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
  char ch;
  m_stream.seekg(m_getpos);
  if(!mydeque.empty())
  {
    ch = mydeque.front();
    mydeque.pop_front();
  }
  else
  {
    m_stream.get(ch);
  }
  m_getpos+=1;
  return ch;
}

void Mystream::put(char ch)
{
  char pch;
  if(m_getpos == m_putpos)
  {
    pch = m_stream.get();
    mydeque.push_back(pch);
  }
  if(ch == m_search.at(0))
  {
    for(unsigned int i=0; i < m_search.size(); i++)
    {
      if(ch == m_search.at(i))
      {
        ch = get();
        if(i == (m_search.size()-1))
        {
          for(unsigned int i=0; i < m_replace.size(); i++)
          {
            m_stream.seekp(m_putpos);
            m_stream.put(m_replace.at(i));
            m_putpos+=1;
          }
        }
      }
    }
  }
  else
  {
    m_stream.seekp(m_putpos);
    m_stream.put(ch);
    m_putpos+=1;
  }
}

int Mystream::getput()
{
  return m_putpos;
}





