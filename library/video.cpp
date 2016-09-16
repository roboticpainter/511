/*
 * Author: Colby Bates
 * File: video.cpp
 */

#include "video.h"


Video::Video(string call, string title, string subject, string description, string distributor, string notes, string series, string label) : Media(call, title, subject, notes), m_description(description), m_distributor(distributor), m_series(series), m_label(label)
{
}
Video::~Video()
{

}
void Video::display() const
{
  cout << "-----------------Video---------------\n";
  cout << "Call Number: " << m_call << "\n";
  cout << "Title: " << m_title << "\n";
  cout << "Subject: " << m_subject << "\n";
  cout << "Description: " << m_description << "\n";
  cout << "Distributor: " << m_distributor << "\n";
  cout << "Notes: " << m_notes << "\n";
  cout << "Series: " << m_series << "\n";
  cout << "Label: " << m_label << "\n\n";
}
int Video::checkOther(const string& keyword) const
{
  if(m_description.find(keyword) != string::npos || m_notes.find(keyword) != string::npos || m_distributor.find(keyword) != string::npos)
  {
    return 1;
  }
  else
  {
    return 0;
  }  
}
