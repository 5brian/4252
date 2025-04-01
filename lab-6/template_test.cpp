#include "LinkedList.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Lab 6 test" << endl;

  cout << "\nTesting LinkedList<int>:" << endl;
  LinkedList<int> intList;

  intList.add(10);
  intList.add(20);
  intList.add(30);
  cout << "After adding 10, 20, 30: ";
  intList.printList();
  cout << endl;

  intList.insertAt(1, 25);
  cout << "After inserting 25 at position 1: ";
  intList.printList();
  cout << endl;

  cout << "Finding 25: " << (intList.findVal(25) ? "Found" : "Not found")
       << endl;
  cout << "Finding 40: " << (intList.findVal(40) ? "Found" : "Not found")
       << endl;

  cout << "\nTesting LinkedList<string>:" << endl;
  LinkedList<string> stringList;

  stringList.add("apple");
  stringList.add("banana");
  stringList.add("cherry");
  cout << "After adding apple, banana, cherry: ";
  stringList.printList();
  cout << endl;

  stringList.insertAt(2, "date");
  cout << "After inserting date at position 2: ";
  stringList.printList();
  cout << endl;

  cout << "Finding banana: "
       << (stringList.findVal("banana") ? "Found" : "Not found") << endl;
  cout << "Finding grape: "
       << (stringList.findVal("grape") ? "Found" : "Not found") << endl;

  LinkedList<string> copiedList(stringList);
  cout << "\nCopied string list: ";
  copiedList.printList();
  cout << endl;

  cout << "\nAfter removing all from copied list: ";
  copiedList.removeAll();
  copiedList.printList();
  cout << endl;

  return 0;
}
