#include "stampstream.h"

stampstream::stampstream(int col, int row) : ostream(new Stampbuf(col, row))
{

}

stampstream::~stampstream()
{
  delete rdbuf();
}

ostream& endrow(ostream& os)
{
  Stampbuf* sbp=dynamic_cast<Stampbuf*>(os.rdbuf());
  sbp->pubsync();
  sbp->reset_column();
  sbp->increment_row(); 
  return os;
}

row::row(int r) : m_row(r)
{
}

int row::get_row() const
{
  return m_row;
}

ostream& operator<<(ostream& os, const row& ro)
{
  Stampbuf* sbp = static_cast<Stampbuf*>(os.rdbuf());
  sbp->pubsync();
  sbp->change_row(ro.get_row());
  return os;
}
