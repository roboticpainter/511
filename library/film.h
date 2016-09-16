/*
 * Author: Colby Bates
 * File: film.h
 */

#ifndef FILM_H
#define FILM_H

#include "media.h"

using namespace std;
using std::cout;

class Film: public Media
{
  public: 
    Film(string call, string title, string subject, string director, string notes, string year);
    ~Film();
    void display() const;
    int checkOther(const string& keyword) const;
  
  private:
    string m_director;
    string m_year;
};
#endif
