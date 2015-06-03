// Homework2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Queue.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
  /*
  Create a Queue
  Call Remove. Should do nothing since the Queue is empty.
  Add 4 elements.
  Print out the list, both the number and data.
  Remove 2 elements.
  Add 4 elements.
  Print out the list, both the number and data.
  Remove 4 elements
  Print out the list, both the number and data.
  Erase the queue.
  Add  3 elements.
  Print out the list, both the number and data.
  Erase the queue.
  Print out the list.
  */
  Queue myQueue;

  myQueue.removeItem();
  myQueue.addItem("red");
  myQueue.addItem("green");
  myQueue.addItem("blue");
  myQueue.addItem("orange");
  myQueue.print();  // print contents of queue (item ID and data)

  myQueue.removeItem();

  std::cout << "hi" << std::endl;

	return 0;
}

