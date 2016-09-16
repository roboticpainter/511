/*
 * Author: Colby Bates
 * File: media.h
 */

#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <string>

using namespace std;
using std::string;

class Media 
{
  public:
    Media(string call, string title, string subject, string notes); 
    virtual void display() const;
    virtual ~Media();
    int checkTitle(const string& keyword) const;
    int checkCall(const string& keyword) const;
    int checkSubject(const string& keyword) const;
    virtual int checkOther(const string& keyword) const = 0; 
  protected:
    string m_call;
    string m_title;
    string m_subject;
    string m_notes;
    
  
};
#endif
