#pragma once
class QueueItem
{
public:
  QueueItem(); // default ctor
  QueueItem(char *pData, int id); // ctor

  void setNext(QueueItem *pItem);

  QueueItem* getNext() const;
  int getId() const;
  const char* getData() const;

private:
  char _data[30];    // data value (null terminated character string)
  const int _itemId; // unique id for item in queue
  QueueItem *_pNext; // next item in queue


};