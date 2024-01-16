#include <iostream>
#include "queue.h"

using namespace std;

int main () {
  queue fila1;
  int opcao;
  TypeItem item;

  cout << "Queue Generator:\n";

  do {
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Print\n";
    cout << "4. Exit\n";

    cin >> opcao;
    if (opcao == 1) {
      cout << "Item: ";
      cin >> item;
      fila1.push(item);
    }
    else if (opcao == 2) {
      item = fila1.pop();
    }
    else if (opcao == 3) {
      fila1.print();
    }
  } while (opcao != 4);

  return 0;
}