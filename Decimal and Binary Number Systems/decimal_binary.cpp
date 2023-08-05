#include <iostream>
#include <math.h>
using namespace std;
int main() {
  // Decimal to Binary
  // int number, bit, answer = 0, i = 0;
  // cin >> number;
  // while (number != 0) {
  //   bit = number & 1;                     // Bhul gaya tha
  //   answer = (bit * pow(10, i)) + answer; // bin matlab forloop laga diya tha
  //   i++;
  //   number = number >> 1;
  // }
  // cout << answer;
  // **************************************************************************************
  // long long int n;
  // cout << sizeof(n); --> takes min 8 bytes and depends on compiler and
  // architecture

  // Negative decimal to binary
  // previously i have done that using pdf of codehelp but the solution was
  // wrong so now i did it on my own

  // int num,lastBit=0,ans=0,i=0;
  // cin >> num;
  // num=~(num)+1;
  // while(num!=0){
  //   lastBit=num&1;
  //   if(lastBit){
  //     ans=(lastBit*pow(10,i)) + ans;
  //  }
  //   num=num>>1;
  //   i++;
  // }
  // cout << ans;
  // Proud of you aise hi badhte raho ek din kamyab zarur hoge :

  // **************************************************************************************
  // Binary to decimal
  // int num,lastBit=0,ans=0,i=0;
  // cin >> num;
  // while(num!=0){
  //   lastBit=num%10;
  //   if(lastBit){
  //     ans=ans+pow(2,i);
  //   }
  //   num=num/10;
  //   i++;
  // }
  // cout << ans;
}