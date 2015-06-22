//Kevin Baker
//Summer 2015, C++ Programming
//22 June 2015

#pragma once
#include "QueueItem.h"
#include <iostream>

using namespace std;

class Queue
{
  public:
    Queue();    // ctor inits a new empty Queue
    ~Queue();   // dtor erases any remaining QueueItems
    void addItem(char *pData);
    void removeItem();
    void print();
    void erase();
  private:
    QueueItem *_pHead; // always points to first QueueItem in the list
    QueueItem *_pTail; // always points to the last QueueItem in the list
    int _itemCounter;  // always increasing for a unique id to assign to each new QueueItem
  };


