#include "Queue.h"

Queue::Queue()
{
  _pHead = _pTail = NULL; // empty QueueItem that is the new head and tail (null)
  _itemCounter = 0; // start the QueueItem ID at 0
}


Queue::~Queue()
{
}

void Queue::addItem(char *pData)
{
  // dynamically create and init a new QueueItem object
  QueueItem *pItem = new QueueItem(pData, ++_itemCounter);
  
  if (NULL == _pHead)  // check for empty queue
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
  int id = _pHead->getId;
  cout << "first: " << id << endl;
}