#include "Queue.h"

Queue::Queue()
{
}


Queue::~Queue()
{
}

void Queue::addItem(char *pData)
{
  // dynamically create and init a new QueueItem object
  QueueItem *pItem = new QueueItem(pData, ++_itemCounter);

  if (0 == _pHead)  // check for empty queue
    _pHead = _pTail = pItem;
  else
  {
    // link new item onto tail of list using _pTail pointer
    _pTail = pItem;
  }
}

void Queue::removeItem(){

}
void Queue::print(){
  cout << "it printed.." << endl;
}