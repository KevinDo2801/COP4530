#include <iostream>
#include <string>
int main()
{
    std::string name;
    // input / output
    std::cout << "Please type your name: ";
    // std::cin >> name;
    // std::getline(std::cin, name);
    std::cout << "Your name is: " << name << std::endl;
    // pointer
    char ch = 'Q';
    char *p;
    p = &ch;
    std::cout << ch << " " << *p << std::endl;
    // arrays
    int nums[10];
    nums[2] = 3;
    int num1 = nums[2];
    std::cout << num1 << std::endl;
    // array pointers
    char c[] = {'a', 'b', 'c'};
    char *d = c;
    char *e = &c[0];
    std::cout << *d << std::endl;
    e[2] = 'f';
    std::cout << d[2] << std::endl;
    return 0;
}