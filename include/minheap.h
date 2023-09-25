#pragma once
#include "heapnode.h"
using namespace std;

class MinHeap{
  private:
  int size;
  HeapNode* root;
  
  public:
  MinHeap();
  ~MinHeap();

  void push_heap(int num);
  int get_min();
  void pop();
};