#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter your first name: ";

  std::string name;
  std::cin >> name;

  std::cout << "hello, " << name << "!" << std::endl;
  return 0;
}
