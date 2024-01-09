#include <iostream>
#include "stack.h"

using namespace std;

int main () {

  stack stack1;
  TypeItem item;

  int option;
  cout << "Stack Generator:\n";

  do {
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Print\n";
    cout << "4. Exit\n";

    cin >> option;
    if (option == 1) {
      cout << "Item: ";
      cin >> item;
      stack1.push(item);
    } else if (option == 2) {
      item = stack1.pop();
      cout << item << endl;
    } else if (option == 3) {
      stack1.print();
    }
  } while (option != 4);
  
  return 0;
}