/*
 * Author: Colby Bates
 * File: stampbuf.h
 */

#ifndef STAMPBUF_H
#define STAMPBUF_H

class Stampbuf
{
  public:
  Stampbuf();
  sync();
  overflow(int c);

  private:
  int cur_col;
  int cur_row;
  int max_col;
  int max_row;
};

#endif
