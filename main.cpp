#include <iostream>
using namespace std;
 
int main() { 
 
   // Init
   int a, b;
   cin >> a;
   cin >> b;



   int onesDigit = b % 10;
   int tensDigit = (b / 10) % 10;
   int hundredsDIgit = (b / 100) % 10;

   int firstNumber = a * onesDigit;
   int secondNumber = a * tensDigit;
   int thirdNumber = a * hundredsDIgit;
 
   int total = firstNumber + secondNumber * 10 + thirdNumber * 100;

   cout << firstNumber << endl;
   cout << secondNumber << endl;
   cout << thirdNumber << endl;

   cout << total;

   
   return 0;
}
