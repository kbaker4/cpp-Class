//Kevin Baker
//Summer 2015, C++ Programming
//22 June 2015

#pragma once
#include <iostream>

class QueueItem
{
public:
  QueueItem(); // default ctor
  QueueItem(char *pData, int id); // ctor

  void setNext(QueueItem *pItem) { _pNext = pItem; }

  QueueItem* getNext() const { return _pNext; }
  int getId() { return _itemId; }
  const char* getData() const { return _data; }

  private:
    char _data[30];    // data value (null terminated character string)
    const int _itemId; // unique id for item in queue
    QueueItem* _pNext; // next item in queue


};

