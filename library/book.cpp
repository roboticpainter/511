/*
 * Author: Colby Bates
 * File: book.cpp
 */

#include "book.h"


Book::Book(string call, string title, string subject, string author, string description, string publisher, string city, string year, string series, string notes) : Media(call, title, subject, notes), m_author(author), m_description(description), m_publisher(publisher), m_city(city), m_year(year), m_series(series)
{
}
Book::~Book()
{

}
void Book::display() const
{
  cout << "-----------------BOOK---------------\n";
  cout << "Call Number: " << m_call << "\n";
  cout << "Title: " << m_title << "\n";
  cout << "Subject: " << m_subject << "\n";
  cout << "Author: " << m_author << "\n";
  cout << "Description: " << m_description << "\n";
  cout << "Publisher: " << m_publisher << "\n";
  cout << "City: " << m_city << "\n";
  cout << "Year: " << m_year << "\n";
  cout << "Series: " << m_series << "\n";
  cout << "Notes: " << m_notes << "\n\n";
}
int Book::checkOther(const string& keyword) const
{
  if(m_description.find(keyword) != string::npos || m_notes.find(keyword) != string::npos || m_year.find(keyword) != string::npos)
  {
    return 1;
  }
  else
  {
    return 0;
  }  
}
