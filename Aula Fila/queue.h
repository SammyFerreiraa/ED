typedef int TypeItem;
const int max_items = 100;

class queue {
  private:
  int primeiro, ultimo;
  TypeItem* structure;

  public:
  queue();
  ~queue();
  bool isEmpty();
  bool isFull();
  void push(TypeItem item);
  TypeItem pop();
  void print();
};