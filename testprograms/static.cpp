#include <iostream>
using namespace std;

void mySum(int, int);

int main() {
  int num1, num2;

  num1 = 100;
  num2 = 200;
  mySum(num1, num2);

  num1 = 10;
  num2 = 20;
  mySum(num1, num2);
}

void mySum(int n1, int n2) {
  static int sum;
  sum = sum + n1 + n2;
  cout << sum << endl;
}
