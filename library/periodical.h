/*
 * Author: Colby Bates
 * File: periodical.h
 */

#ifndef PERIODICAL_H
#define PERIODICAL_H

#include "media.h"

using namespace std;
using std::cout;

class Periodical: public Media
{
  public: 
    Periodical(string call, string title, string subject, string author, string description, string publisher, string publishing_history, string series, string notes, string related_titles, string other_title, string govt_doc_num);
    ~Periodical();
    void display() const;
    int checkOther(const string& keyword) const;
  
  private:
    string m_author;
    string m_description;
    string m_publisher;
    string m_publishing_history;
    string m_series;
    string m_notes;
    string m_related_titles;
    string m_other_titles;
    string m_govt_doc_num;
};
#endif
