/**
 * @file FPR.cc
 * @author Jorge González Delgado (alu0101330105@ull.edu.es)
 * @brief Primitive Recursive Functions
 * @version 0.1
 * @date 2023-10-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

class FPR {

  private:
    int functionCalls;

  public:
  

  FPR() {
    functionCalls = 0;
  }
  ~FPR() {}

  int p(int i, int* x) {
    functionCalls++;
    return x[i];
  }

  int z(int x) {
    functionCalls++;
    return 0;
  }

  int s(int x) {
    functionCalls++;
    return x + 1;
  }

  int uno(int x) {
    functionCalls++;
    return s(z(x));
  }

  int suma(int x, int y) {
    functionCalls++;
    if (y == z(y)) {
      return x;
    } else {
      int args[] = {x, y, suma(x, y - 1)};
      return s(p(2, args));
    }
  }

  int mult(int x, int y) {
    functionCalls++;
    if (y == z(y)) {
      return z(y);
    } else {
      int args[] = {x, y, mult(x, y - 1)};
      return suma(p(0, args), p(2, args));
    }
  }

  int pow(int x, int y) {
    functionCalls++;
    if (y == z(y)) {
      return uno(x);
    } else {
      int args[] = {x, y, pow(x, y - 1)};
      return mult(p(0, args), p(2, args));
    }
  }

  int cPow(int x, int y) {
    functionCalls++;
    if (y == z(y)) {
      return uno(x);
    } else {
      return x * cPow(x, y - 1);
    }
  }

  int getFunctionCalls() {
    return functionCalls;
  }

  void reset(){
    functionCalls = 0;
  }
};