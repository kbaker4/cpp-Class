//Kevin Baker
//Summer 2015, C++ Programming
//22 June 2015

#define _CRT_SECURE_NO_WARNINGS
#include "QueueItem.h"

QueueItem::QueueItem()
  : _itemId(0),
  _data()
{
}

QueueItem::QueueItem(char *pData, int id)
  : _itemId(id),
  _pNext(0)
  {
    //int len = strlen(pData);
   // for (int i = 0; i < len; i++){
   //   _data[i] = *(pData + i);
   // }
    strncpy(_data, pData, sizeof(_data));
  }
