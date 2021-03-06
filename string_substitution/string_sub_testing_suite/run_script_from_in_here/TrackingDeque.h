
/*
 * Author: Colby Bates
 * File: stampstream.h
 */

#ifndef TRACKING_DEQUE_H
#define TRACKING_DEQUE_H

#include<iostream>
#include<deque>

using namespace::std;

using std::cout;
using std::deque;

template<typename T>
class TrackingDeque : public deque<T>
{
  public:
    TrackingDeque();
    ~TrackingDeque();
    void push_front(T);
    void push_back(T);
    T front();
    void pop_front();

  private:
    int size;
};

template <typename T>
TrackingDeque<T>::TrackingDeque() : deque<T>()
{
  size = 0;
}

template <typename T>
TrackingDeque<T>::~TrackingDeque()
{
  cout << "Size: " << size << "\n";
}

template <typename T>
void TrackingDeque<T>::push_front(T element)
{
  deque<T>::push_front(element);
  size++;
}

template <typename T>
void TrackingDeque<T>::push_back(T element)
{
  deque<T>::push_back(element);
  size++;
}

template<typename T>
T TrackingDeque<T>::front()
{
  return (deque<T>::front());
}

template<typename T>
void TrackingDeque<T>::pop_front()
{
  deque<T>::pop_front();
}

#endif 
