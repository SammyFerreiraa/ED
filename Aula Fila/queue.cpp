#include <iostream>
#include "queue.h"
using namespace std;
  queue::queue() {
    primeiro = 0;
    ultimo = 0;
    structure = new TypeItem[max_items];
  }

  queue::~queue() {
    delete [] structure;
  }

  bool queue::isEmpty() {
    return (primeiro == ultimo);
  }

  bool queue::isFull() {
    return (ultimo - primeiro == max_items);
  }

  void queue::push(TypeItem item) {
    if (!isFull()) {
      structure[ultimo % max_items] = item;
      ultimo++;
    } else {
      cout << "Queue is full\n" << endl;
      cout << "You can't push more" << endl;
    }
  }

  TypeItem queue::pop() {
    if (!isEmpty()) {
      primeiro++;
      return structure[(primeiro - 1) % max_items];
    } else {
      cout << "Queue is empty\n" << endl;
      cout << "Doesn't have elements to remove" << endl;
    }
  }

  void queue::print() {
    cout << "Queue: [";
    for (int i = primeiro; i < ultimo; i++) {
      if (i != ultimo - 1) {
        cout << structure[i % max_items] << ", ";
      } else {
        cout << structure[i % max_items];
      }
    }
    cout << "]" << endl;  
  }