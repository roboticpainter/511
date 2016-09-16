/*
 * Author: Colby Bates
 * File: book.h
 */

#ifndef BOOK_H
#define BOOK_H

#include "media.h"

using namespace std;
using std::cout;

class Book: public Media
{
  public: 
    Book(string call, string title, string subject, string author, string description, string publisher, string city, string year, string series, string notes);
    ~Book();
    void display() const;
    int checkOther(const string& keyword) const;
  
  private:
    string m_author;
    string m_description;
    string m_publisher;
    string m_city;
    string m_year;
    string m_series;
};
#endif
