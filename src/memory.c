struct HeapNode {
  uint32_t size;
  uint8_t data;
  HeapNode* prev;
  HeapNode* next;
};
