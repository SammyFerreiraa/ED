
typedef int TypeItem;
const int max_items = 100;

class stack  {
  private :
  int size;
  TypeItem* structure;


  public:
  stack(); // structure
  ~stack(); // destructive
  bool isFull(); // check if it is full
  bool isEmpty(); // check if its empty
  void push(TypeItem item); // push item in stack
  TypeItem pop(); // remove item in stack
  void print(); // print stack
  int length(); // stack length

};