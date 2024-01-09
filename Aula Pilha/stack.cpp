#include <iostream>
#include "stack.h"

using namespace std;

  stack::stack() {
    size = 0;
    structure = new TypeItem[max_items];
  } // structure
  stack::~stack() {
    delete [] structure;  // delete
  } // destructive
  bool stack::isFull() {
    return (size == max_items);
  } // check if it is full
  bool stack::isEmpty() {
    return (size == 0);
  } // check if its empty
  void stack::push(TypeItem item) {
    if (!isFull()) {
      structure[size++] = item;
    } else {
      cout << "Stack is full\n" << endl;
      cout << "You can't push more" << endl;
    }
  } // push item in stack
  TypeItem stack::pop() {
    if (!isEmpty()) {
      return structure[--size];
    } else {
      cout << "Stack is empty\n" << endl;
      cout << "Doesn't have elements to remove" << endl;
    }
  } // remove item in stack
  void stack::print() {
    cout << "Stack: [";

    for (int i = 0; i < size; i++) {
      if (i != size - 1) {
        cout << structure[i] << ", ";
      } else {
        cout << structure[i];
      }
    }

    cout << "]" << endl;
  } // print stack
  int stack::length() {
    return size;
  } // stack length