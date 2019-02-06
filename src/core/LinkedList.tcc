using namespace std;

#define NULLPTR 0

template<class T>
LinkedList<T>::LinkedList(){
	head = NULLPTR;
  cur = NULLPTR;
}
template<class T>
LinkedList<T>::~LinkedList(){
  Node* current = head;
  Node* temp;
  while(current != NULLPTR){
    temp = current->next;
    delete current;
    current = temp;
  }
}

/*
	Function:	add
	in:		pointer to a object
	out:		void
	Purpose:	to add a object at the end of the list
*/
template<class T>
void LinkedList<T>::add(T* obj){
  Node* current = head;
  if (current == NULLPTR) {
    head = new Node(obj);
    return;
  }else{
    while(current->next != NULLPTR){
        current = current->next;
    }

    current->next = new Node(obj);
  }
}

/*
	Function:	get
	in:		index of object to get
	out:		object pointer at index (null pointer if no such index)
	Purpose:	To return the object pointer located at the specified index
*/
template<class T>
T* LinkedList<T>::get(int index) const {
  Node* current = head;
  for(int i = 0; i < index; i++){
    if (current == NULLPTR) return NULLPTR;
    current = current->next;
  }
  if (current == NULLPTR) return NULLPTR;
  return current->object;
}

/*
	Function:	remove
	in:		index
	out:		pointer to an object
	Purpose:	remove an object form the list
*/
template<class T>
T* LinkedList<T>::remove(int index){
  Node* current = head;

  for(int i = 0; i < index - 1; i++){
			if (current == NULLPTR) {
		    return NULLPTR;
			}
			current = current->next;
		}
		if(current = NULLPTR || current->next == NULLPTR){
			return NULLPTR;
		}
		Node* removed = current.next;
		current.next = current->next.next;
		T* returnObj = removed->obj;
		delete removed;
		return returnObj;
}


/*
	Function:	count
	in:		nothing
	out:		size of the list/number of nodes
	Purpose:	to get the size of the linked list
*/
template<class T>
int LinkedList<T>::count() const {
  Node* current = head;
  int count = 0;
  while(current != NULLPTR){
      count++;
      current = current->next;
  }
  return count;
}
