#include "TrackingDeque.h"



int main()
{
   TrackingDeque<char> mybuffer;
   mybuffer.push_front('A');
   mybuffer.push_back('B');
   cout << "Front of deque is: " << mybuffer.front() << endl;
   mybuffer.pop_front();
   cout << "Front of deque is: " << mybuffer.front() << endl;
   mybuffer.pop_front();
} 
