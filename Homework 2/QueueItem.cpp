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
  : _itemId(id),
  _pNext(0)
  //char _data[30];    // data value (null terminated character string)
  //const int _itemId; // unique id for item in queue
  {
    int len = strlen(pData);
    for (int i = 0; i < len; i++){
      _data[i] = *(pData + i);
    }
  }


int QueueItem::getId() const {
  return _itemId;
}