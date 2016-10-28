#include "stampbuf.h"

Stampbuf::Stampbuf(int col, int row) : max_col(col), max_row(row)
{
  cp=new char[col/2];
  setp(cp, cp+col/2);
  insert_plate(col, row); 
  cur_col = 0;
  cur_row = 0;

}

Stampbuf::~Stampbuf()
{
  sync();
  eject_plate();
  delete [] pbase();
}

int Stampbuf::sync()
{
  
  for(char* c = pbase(); c != pptr(); c++)
  {
    try
    {
      if(get_die() != *c)
      {
        set_die(*c);
      }
      stamp(cur_col, cur_row);
    }
    catch(...)
    {
    }
    cur_col++;
  }
  setp(cp, cp+max_col/2);
  return 0;
}

int Stampbuf::overflow(int c)
{
  sync();
  try
  {
    set_die(c);
    stamp(cur_col, cur_row);
  }
  catch(...)
  {
  }
  cur_col++;
  return 0;
}

void Stampbuf::reset_column()
{
  cur_col = 0;  
}

void Stampbuf::increment_row()
{
  cur_row++;
}

void Stampbuf::change_row(int row)
{
  cur_row = row;
  cur_col = 0;
}
