#ifndef APPQUEUE_H
#define APPQUEUE_H

#include <string>
#include "Application.h"

class ApplicationQueue
{
  friend class ApplicationIO;
  class Node
  {
    friend class ApplicationQueue;
    friend class ApplicationIO;
    private:
      Application* data;
      Node*    next;
  };

  public:
    ApplicationQueue();
    ApplicationQueue(ApplicationQueue&);
    ~ApplicationQueue();

    void pushBack(Application *);
    bool popFront();
    Application* front();
    bool empty();
    void clearData();
    Node *getHead();

    int setQueueIntoArray(Application ***);
    
  private:
    Node *head;

};
#endif


