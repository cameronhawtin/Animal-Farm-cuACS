#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#define NULLPTR 0


template<class T>
class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
        void add(T*);
	T* remove(int);
        T* get(int) const ;
        int count() const ;

    private:

      class Node{
        public:
          Node(T* obj){
            object = obj;
            next = NULLPTR;
          }
          Node* next;
          T* object;
      };
      Node* head;
      Node* cur;

};
#include "LinkedList.tcc"
#endif
