/*
 * Author: Colby Bates
 * File: cardcatalog.h
 */


#ifndef CARDCATALOG_H
#define CARDCATALOG_H

#include <fstream>
#include <vector>
#include "media.h"
#include "book.h"
#include "video.h"
#include "film.h"
#include "periodical.h"

using namespace std;
using std::string;
using std::getline;
using std::vector;

class CardCatalog
{
  public:
    CardCatalog();
    ~CardCatalog();
    void display() const;
    void searchTitle(const string& keyword) const;
    void searchCall(const string& keyword) const;
    void searchSubject(const string& keyword) const;
    void searchOther(const string& keyword) const;
  
  private:
    vector<Media*> cards;
};
#endif
