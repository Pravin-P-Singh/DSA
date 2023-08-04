#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";

  // Fibonacci series
  // int n, nextSum, a=0,b=1;
  // cin >> n;
  // cout << a << " " << b << " ";
  // for(int i=1;i<n;i++){
  //   nextSum = a+b;
  //   a = b;
  //   b=nextSum;
  //   cout << nextSum << " ";
  // }

  // Print sum from 1 to N
  // int sum=0,flag;
  // cout << endl;
  // cin >> flag;
  // for(int i=1;i<=flag;i++){
  //   sum+=i;
  // }
  // cout << sum;

  // Print if prime
  // int num,isPrime=1;
  // cout << "Enter number :\n";
  // cin >> num;
  // for(int i=2;i<num;i++){
  //   if(num%i==0){
  //     isPrime=0;
  //     break;
  //   }
  // }
  // cout << isPrime;

  // Subtract product and sum
  // int product=1,sum=0,n,mod,div;
  // cout << "Enter a number" << endl;
  // cin >> n;
  // while(n!=0){
  //   mod=n%10;
  //   product*=mod;
  //   sum+=mod;
  //   n=n/10;
  // }
  // cout << endl;
  // cout << "The product is " << product << " and the sum is " << sum << endl;
  // cout << "The difference is " << product - sum << endl;

  // Count the number of 1 bits
  // int number,count=0;
  // cin >> number;
  // while(number!=0){
  //   if(number&1){
  //     count++;
  //   }
  //   // number/=2; -> not better instead use right shift
  //   number>>=2; //number>>=2 is same as number = number >> 2
  // }
  // cout << "The total number of set bits are " << count << endl;
}