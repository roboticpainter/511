/*
 * Author: Colby Bates
 * File: video.h
 */

#ifndef VIDEO_H
#define VIDEO_H

#include "media.h"

using namespace std;
using std::cout;

class Video: public Media
{
  public: 
    Video(string call, string title, string subject, string description, string distributor, string notes, string series, string label);
    ~Video();
    void display() const;
    int checkOther(const string& keyword) const;
  
  private:
    string m_description;
    string m_distributor;
    string m_series;
    string m_label;
};
#endif
