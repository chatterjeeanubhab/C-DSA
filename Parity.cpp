#include <iostream>
using namespace std;

bool findParity(int n) {
   int count = 0;
   int temp = n;

   while (temp>=2) {
      if(temp & 1)    //when LSb is 1, increase count
         count++;
      temp = temp >> 1;    //right shift number by 1 bit
   }      
   return (count % 2)?true:false;
}

int main() {
   int n;
   cout << "Enter a number: "; cin >>n;
   cout << "Parity of " << n << " is " << (findParity(n)?"Odd":"Even");
}
