#include <iostream>

using namespace std;

int isPrime(int x){
   int divs = 1;

   for (int i = 1; i < x; i++){
      if (x % i == 0){
         divs++;
      }

      // not a prime number
      if (divs > 2){
         return -1;
      }
   }
return 1;
}

int main() {

   int input;

   cin >> input;

   if (isPrime(input) > 0){
      if (isPrime(input+2) > 0){
         cout << "PRIMO CASADO!";
      } else {
         cout << "PRIMO!";
      }
   } else {
      cout << "NAO PRIMO!";
   }
   return 0;
}
