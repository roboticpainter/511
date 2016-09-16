/*
 * Author: Colby Bates
 * File: film.cpp
 */

#include "film.h"


Film::Film(string call, string title, string subject, string director, string notes, string year) : Media(call, title, subject, notes), m_director(director), m_year(year)
{
}
Film::~Film()
{

}
void Film::display() const
{
  cout << "-----------------Film---------------\n";
  cout << "Call Number: " << m_call << "\n";
  cout << "Title: " << m_title << "\n";
  cout << "Subject: " << m_subject << "\n";
  cout << "Director: " << m_director << "\n";
  cout << "Notes: " << m_notes << "\n";
  cout << "Year: " << m_year << "\n\n";
}
int Film::checkOther(const string& keyword) const
{
  if(m_notes.find(keyword) != string::npos || m_director.find(keyword) != string::npos || m_year.find(keyword) != string::npos)
  {
    return 1;
  }
  else
  {
    return 0;
  }  
}
