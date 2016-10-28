/*
 * Author: Colby Bates
 * File: stampbuf.h
 */

#ifndef STAMPBUF_H
#define STAMPBUF_H

#include <iostream>
#include "stamp.h"


using namespace std;
using namespace stamping_press;


class Stampbuf: public streambuf
{
  public:
  Stampbuf(int col, int row);
  ~Stampbuf();
  virtual int sync();
  virtual int overflow(int c);
  void reset_column();
  void change_row(int row);
  void increment_row();

  private:
  char* cp;
  int cur_col;
  int cur_row;
  int max_col;
  int max_row;
};

#endif
