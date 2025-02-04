#include "SLinkedList.h"
#include <iostream>
#include <string>

int main() {
    // Create a linked list for integers directly on the stack
    SLinkedList<int> nums;
    nums.addFront(12);
    nums.addFront(10);

    std::cout << "List of nums: ";
    nums.print();

    // Create a linked list for strings directly on the stack
    SLinkedList<std::string> names1;
    names1.addFront("Regina");
    names1.addFront("Gretchen");
    names1.addFront("Karen");

    std::cout << "List of names1: ";
    names1.print();

    std::cout << "Size of names1: ";
    std::cout << names1.getSize() << std::endl;

    // Create another linked list for strings on the stack
    SLinkedList<std::string> names2;
    names2.addFront("Cady");
    names2.addFront("Janis");

    // Append names2 to names1
    names1.appendAfter(&names2);

    std::cout << "List of names1 after appending names2: ";
    names1.print();

    std::cout << "Size of names1: ";
    std::cout << names1.getSize() << std::endl;

    return 0;
}

// #include "SLinkedList.h"
// #include <iostream>
// #include <string>

// int main() {

//   SLinkedList<int> *nums = new SLinkedList<int>;
//   nums->addFront(12);
//   nums->addFront(10);

//   std::cout << "List of nums: ";
//   nums->print();

// SLinkedList<std::string> names1;
// names1.addFront("Regina");
// names1.addFront("Gretchen");
// names1.addFront("Karen");


//   std::cout << "List of names1: ";
//   names1.print();

//   std::cout << "Size of names1: ";
//   std::cout << names1->getSize() << std::endl;

//   SLinkedList<std::string> *names2 = new SLinkedList<std::string>;
//   names2->addFront("Cady");
//   names2->addFront("Janis");

//   names1->appendAfter(names2);

//   std::cout << "List of names1: ";
//   names1->print();

//   std::cout << "Size of names1: ";
//   std::cout << names1->getSize() << std::endl;

//   return 0;
// }
