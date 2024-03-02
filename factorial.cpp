#include <iostream>
using namespace std;
//factorial using recursion
int factorial(int x) {
   int fact = 1;
   for (int i = 1; i <= x; i++) {
      fact = fact * i;
   }
   return fact;
}
int main() {
   int x = 5;
   int result = factorial(x);
   cout << "The factorial of " << x << " is " << result;
}
