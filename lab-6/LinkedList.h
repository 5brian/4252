// Header file for linked list class

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstddef>
#include <iostream>
#include <string>

template <class Type> class LinkedList {
public:
  // Constructors and Destructors
  /* Generally every class should have at least two construtors, a
   * default constructor and a copy constructor that creates a copy
   * of the given object*/
  LinkedList();                      // default construtor
  LinkedList(const LinkedList &lst); // copy constructor
  /* Every class should have a destructor, which is responsible for
   * cleaning  up any dynamic memory allocation performed by the class.
   * Note the special syntax for the destructor */
  ~LinkedList(); // destructor

  // A new node containing the given data is inserted at the front of the list
  // data is the data to be stored
  void add(Type data);

  // A new node containing the given data is inserted at the given position in
  // the list pos specifies the (index) position to insert the new node data is
  // the data to be stored
  void insertAt(int pos, Type data);

  // The first incidence of the given data found from the list.
  // Returns true if data is found, false otherwise
  // data specifies the data to be found from the list
  bool findVal(Type data);

  // Empties the list, freeing up dynaically allocated memory
  void removeAll();

  // Prints the contents of the list to the screen, in order
  void printList();

private:
  /* A struct contains data variable (which are accessed using dot
   * notation in the same way that object methods or attributes are
   * accessed).  Structs cannot have methods.*/
  // List node
  struct Node {
    Type data;  // list data
    Node *next; // pointer to next item in the list
  };

  Node *head; // Pointer to the first node in the list
  int size;   // Records the number of nodes in the list
};

template <class Type> LinkedList<Type>::LinkedList() {
  head = NULL;
  size = 0;
}

template <class Type>
LinkedList<Type>::LinkedList(const LinkedList<Type> &lst) {
  if (lst.head == NULL) {
    head = NULL;
    size = 0;
  } else {
    head = new Node;
    head->data = lst.head->data;

    Node *pNewNode = head;
    Node *pOldNode = lst.head->next;

    while (pOldNode != NULL) {
      pNewNode->next = new Node;
      pNewNode = pNewNode->next;
      pNewNode->data = pOldNode->data;
      pOldNode = pOldNode->next;
    }
    pNewNode->next = NULL;
    size = lst.size;
  }
}

template <class Type> LinkedList<Type>::~LinkedList() { removeAll(); }

template <class Type> void LinkedList<Type>::add(Type x) {
  Node *newNode = new Node;
  newNode->data = x;
  newNode->next = head;
  head = newNode;
  size++;
}

template <class Type> void LinkedList<Type>::insertAt(int pos, Type x) {
  if (pos < 0 || pos > size) {
    return;
  }
  if (pos == 0) {
    add(x);
    return;
  }

  Node *current = head;
  for (int i = 0; i < pos - 1; i++) {
    current = current->next;
  }

  Node *newNode = new Node;
  newNode->data = x;
  newNode->next = current->next;
  current->next = newNode;
  size++;
}

template <class Type> bool LinkedList<Type>::findVal(Type x) {
  Node *current = head;
  while (current != NULL) {
    if (current->data == x) {
      return true;
    }
    current = current->next;
  }
  return false;
}

template <class Type> void LinkedList<Type>::removeAll() {
  Node *p = head;
  while (p != NULL) {
    head = head->next;
    delete p;
    p = head;
  }
  head = NULL;
  size = 0;
}

template <class Type> void LinkedList<Type>::printList() {
  Node *p = head;
  std::cout << "[";
  while (p != NULL) {
    std::cout << p->data;
    p = p->next;
    if (p != NULL) {
      std::cout << ",";
    }
  }
  std::cout << "]";
}

#endif
