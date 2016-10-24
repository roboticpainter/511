#include<iostream>
using namespace std;

class repeat {
  friend ostream& operator<<(ostream& os, const repeat& r);
  
  public:
    repeat(char c, int count);

  private:
    char m_character;
    int m_count;

};

repeat::repeat(char c, int count) : m_character(c), m_count(count)
{
}

ostream& operator<<(ostream& os, const repeat& r)
{
  for(int i=0; i<r.m_count; i++)
  {
    os << r.m_character;
  }
  return os;
}

int main()
{
  
  cout << repeat('-', 80) << endl;

  return 0;
}
