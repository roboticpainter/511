#include <iostream>

using namespace std;
using std::cerr;

template <typename T>
class Stack
{
  public:
    void status();
    Stack();
    Stack(const Stack<T>&);
    ~Stack();
    Stack& operator=(const Stack<T>&);
    int size();
    void push(T);
    T pop();
  private:
    static const int chunk_size;
    unsigned maximum_size;
    int current_size;
    T* base;
};

template <typename T>
const int Stack<T>::chunk_size=10;


//Used to test error handling
template <typename T>
void Stack<T>::status()
{
    cerr << "\nMaximum Size: " << maximum_size << "\n";
    cerr << "Current_size: " << current_size << "\n";
    cerr << "Base pointer: " << base << "\n";
}



//NO error handling neccesary here
template <typename T>
Stack<T>::Stack()
:current_size(-1),maximum_size(chunk_size),base(new T[chunk_size])
{
  if(base==0)
    throw "No more memory!";
}

//Fixed!?
template <typename T>
Stack<T>::Stack(const Stack<T>& s)
:maximum_size(s.maximum_size), base(new T[s.maximum_size])
{
  if(base==0)
    throw "No more memory!";
  if(s.current_size>-1)
  {
    for(current_size=0; current_size<=s.current_size; current_size++)
      try
      {
        base[current_size]=s.base[current_size];
      }
      catch(...)
      {
        delete [] base;
        throw;
      }
    current_size--;
  }
}


//NO error handling neccessary here
template <typename T>
Stack<T>::~Stack()
{
  delete [] base;
}

//Fixed!?
template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& s)
{
  delete [] base;
  base=new T[s.maximum_size];
  if(base==0)
    throw "No more memory!";
  if(s.current_size>-1)
  {
    for(int x=0; x<=s.current_size; x++)
      try
      {
        base[x]=s.base[x];
      }
      catch(...)
      {
        delete [] base;
        throw;
      }
  }
  maximum_size=s.maximum_size;
  current_size=s.current_size;
  return *this;
}

//Fixed!?
template <typename T>
void Stack<T>::push(T element)
{
  //current_size++;
  if(current_size+1==maximum_size-1)
  {
    //maximum_size+=chunk_size;
    T* new_buffer = new T[maximum_size+chunk_size];
    if(new_buffer==0)
      throw "No more memory!";
    for(int x=0; x<current_size+1; x++)
      try
      {
        new_buffer[x]=base[x];
      }
      catch(...)
      {
        delete [] new_buffer;
        throw;
      }
    delete [] base;
    base=new_buffer;
  }
  base[current_size+1]=element;
  current_size++;
  maximum_size+=chunk_size;
}

//Fixed!?
template <typename T>
T Stack<T>::pop()
{
  if(current_size<0)
    throw "Nothing to pop!";
  try
  {
    return base[current_size--];
  }
  catch(...)
  {
    current_size++;
    throw;
  }
  return base[current_size--];
}

//No error Handling neccessary here
template <typename T>
int Stack<T>::size()
{
  return current_size+1;
}

