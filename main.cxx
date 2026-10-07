/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() { 

  std::cout << "------------- Assignment 1 -------------" << std::endl;

  // Example for as1.0
  homework::printHello();

  // as1.1
  std::cout << "Test as1.1, should give output 2" << std::endl;
  int a{1};
  homework::AddOneRef(a);
  std::cout << a << std::endl;

  // as1.2
  std::cout << "Test as1.2, should give output true (1)" << std::endl;
  float b{7};
  std::cout << homework::isOdd(b) << std::endl;

  // as1.3
  std::cout << "Test as1.3, should give output 1" << std::endl;
  float c{1.7};
  std::cout << homework::floatToInt(c) << std::endl;

  // as1.4
  std::cout << "Test as1.4, should give output 5!" << std::endl;
  int d{5};
  std::cout << homework::factorial(d) << std::endl;

  std::cout << "------------- Assignment 2 -------------" << std::endl;


  return 0;

}

