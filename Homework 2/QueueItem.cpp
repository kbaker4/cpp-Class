#include "QueueItem.h"

QueueItem::QueueItem()
  : _itemId(0),
  _data()
{
}
  //char _data[30];    // data value (null terminated character string)
  //const int _itemId; // unique id for item in queue
  //QueueItem* _pNext; // next item in queue

QueueItem::QueueItem(char *pData, int id)
  : _data(*pData),
  _itemId(id),
  _pNext(0)
  //char _data[30];    // data value (null terminated character string)
  //const int _itemId; // unique id for item in queue
  {
  }