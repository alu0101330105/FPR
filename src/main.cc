#include "../include/FPR.cc"
#include <iostream>
#include <string>

void secretFunction();

int main(void) {
  FPR fpr;
  int a, b;
  std::string input;
  while(true) {
    std::cout << "a? > ";
    std::cin >> input;
    if(input == ":q") break;
    else if (input == ":c") {
      // testing purposes
      secretFunction();
      continue;
    }
    a = std::stoi(input);
    std::cout << "b? > ";
    std::cin >> input;
    if(input == ":q") break;
    b = std::stoi(input);
    std::cout << "pow(" << a << ", " << b << ") = " << fpr.pow(a, b) << "\n";
    std::cout << "functionCalls = " << fpr.getFunctionCalls() << "\n";
    fpr.reset();
  }
}

void secretFunction() {
  FPR fpr;
  int a, b;
  std::string input;

  while(true) {
    std::cout << "c? > ";
    std::cin >> input;
    if(input == ":q") return;
    a = std::stoi(input);
    std::cout << "d? > ";
    std::cin >> input;
    if(input == ":q") return;
    b = std::stoi(input);
    std::cout << "cPow(" << a << ", " << b << ") = " << fpr.cPow(a, b) << "\n";
    std::cout << "functionCalls = " << fpr.getFunctionCalls() << "\n";
    fpr.reset();
  }
}