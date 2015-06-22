//Kevin Baker
//Summer 2015, C++ Programming
//22 June 2015

#include "Queue.h"
#include <iomanip>

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
    _pTail->setNext(pItem);
    _pTail = pItem;
  }
}

void Queue::removeItem(){
  // Remove the "head" of the list
  if (_pHead == NULL)
    return;
  else{
    QueueItem *pItem = _pHead;
    _pHead = pItem->getNext();
    pItem = NULL;
    delete pItem;
  }
}
void Queue::print(){
  // Print all items in the list, or a message stating the list is empty

  if (_pHead == NULL){
    cout << endl;
    cout << "The list is empty!" << endl;
  }
  else{
    cout.width(10);
    cout << endl;
    cout << left << "Data" << "Item Number" << endl;
    cout << endl;
    QueueItem *pItem = _pHead;
    while (pItem != NULL){
      cout.width(12);
      cout << left << pItem->getData() << " " << pItem->getId() << endl;
      pItem = pItem->getNext();
    }
  }
} 

void Queue::erase(){
  // Remove all items from the list
  QueueItem *pItem = _pHead;
  while (_pHead != NULL)
    removeItem();
}
