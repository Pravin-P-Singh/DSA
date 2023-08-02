#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!" << endl;
  // int a, b, c;
  // cin >> a;
  // cout << a << endl;

  // To check whether a is positive or not
  /*if (a > 0) {
    cout << "a is positive" << endl;
  } else if (a < 0) {
    cout << "a is negative" << endl;
  } else {
    cout << "a is zero" << endl;
  }*/
  // cin.get() --> doesn't ignores white spaces like tab space or enter
  // cout << "Enter a and b" << endl;
  // cin >> b >> c;
  // cout << b << " " << c << endl;

  // WAP to state lowercase, uppercase and digits from 0-9 program for a given
  // input
  //  char input;
  //  cin >> input;
  //  if(input >='a' && input <='z'){
  //    cout << "Lowercase" << endl;
  //  }
  //  else if(input >='A' && input <='Z'){
  //    cout << "Uppercase" << endl;
  //  }
  //  if(input >='0' && input <='9'){
  //    cout << "Digit" << endl;
  //  }

  // find sum of all even numbers from 1 to n inclusive
  /*int printTill;
  cin >> printTill;
  int i=1,sum=0;
  while(i<=printTill){
    if(i%2==0){
      sum+=i;
    }
    i++;
  }
  cout << sum;
  */

  // fahrenheit to celcius
  /*float fahrenheit,celcius;
  cin >> fahrenheit;
  celcius = 5.0/9.0*(fahrenheit-32);
  cout << celcius << endl;*/

  // Prime or not
  /*int number,n=2;
  cin >> number;
  bool isPrime=1;
  while(n<number){
    if(number%n==0){
      isPrime=0;
      break;
    }
    n++;
  }
  cout << isPrime << endl;
  */

  //********************Few Pattern Questions********************//
  /*
  Pattern 1 ->

  * * * *
  * * * *
  * * * *
  * * * *

  */

  // int n;
  // cin >> n;
  // int i=0;
  // while(i<n){
  //   int j=0;
  //   while(j<n){
  //     cout << "* ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  /*
  Pattern 2->

  1 1 1 1 1
  2 2 2 2 2
  3 3 3 3 3
  4 4 4 4 4
  5 5 5 5 5

  */
  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout << i <<" ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }
}
