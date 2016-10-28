/*
 * Author: Colby Bates
 * File: stampstream.h
 */

#ifndef STAMPSTREAM_H
#define STAMPSTREAM_H

#include <ostream>
#include "stampbuf.h"

using namespace std;

class stampstream : public ostream
{
  public:
    stampstream(int col, int row);
    ~stampstream();

  private:
  
};

ostream& endrow(ostream& os);

class row 
{
  friend ostream& operator<<(ostream& os, const row& ro);
  
  public:
    row(int r);
    int get_row() const;
  private: 
    int m_row;
};

#endif 
