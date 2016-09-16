/*
 * Author: Colby Bates
 * File: periodical.cpp
 */

#include "periodical.h"


Periodical::Periodical(string call, string title, string subject, string author, string description, string publisher, string publishing_history, string series, string notes, string related_titles, string other_titles, string govt_doc_num) : Media(call, title, subject, notes), m_author(author), m_description(description), m_publisher(publisher), m_publishing_history(publishing_history), m_series(series), m_notes(notes), m_related_titles(related_titles), m_other_titles(other_titles), m_govt_doc_num(govt_doc_num)
{
}
Periodical::~Periodical()
{

}
void Periodical::display() const
{
  cout << "-----------------Periodical---------------\n";
  cout << "Call Number: " << m_call << "\n";
  cout << "Title: " << m_title << "\n";
  cout << "Subject: " << m_subject << "\n";
  cout << "Author: " << m_author << "\n";
  cout << "Description: " << m_description << "\n";
  cout << "Publisher: " << m_publisher << "\n";
  cout << "Publishing_history: " << m_publishing_history << "\n";
  cout << "Series: " << m_series << "\n";
  cout << "Notes: " << m_notes << "\n";
  cout << "Related Titles: " << m_related_titles << "\n";
  cout << "Other Titles: " << m_other_titles << "\n";
  cout << "Govt Doc Number: " << m_govt_doc_num << "\n\n";
}
int Periodical::checkOther(const string& keyword) const
{
  if(m_description.find(keyword) != string::npos || m_notes.find(keyword) != string::npos || m_series.find(keyword) != string::npos || m_related_titles.find(keyword) != string::npos)
  {
    return 1;
  }
  else
  {
    return 0;
  }  
}
