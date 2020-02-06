#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  int a = 10;
  int *p;
  p = &a;

  int &c = a;
  cout << *p << endl;
  p = new int[5];//(int*)malloc(5*sizeof(int)); <- C programming language
  cout << *p << endl;
}