/*
 * Author: Colby Bates
 * File: media.cpp
 */


#include "media.h"

using namespace std;

Media::Media(string call, string title, string subject, string notes)
{
  m_call = call;
  m_title = title;
  m_subject = subject;
  m_notes = notes;
}
Media::~Media()
{

}
void Media::display() const
{
}
int Media::checkTitle(const string& keyword) const 
{
  if(m_title.find(keyword) != string::npos)
  {
    return 1;
  }
  else
  {
    return 0;
  }  
}
int Media::checkCall(const string& keyword) const
{
  if(m_call.find(keyword) != string::npos)
  {
    return 1;
  }
  else
  {
    return 0;
  }  
}
int Media::checkSubject(const string& keyword) const 
{
  if(m_subject.find(keyword) != string::npos)
  {
    return 1;
  }
  else
  {
    return 0;
  }  
}
