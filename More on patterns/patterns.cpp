#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";

  // Pattern 3 ->
  // 1 2 3 4
  // 1 2 3 4
  // 1 2 3 4
  // 1 2 3 4
  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout << j << " ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 4 ->
  // 4 3 2 1
  // 4 3 2 1
  // 4 3 2 1
  // 4 3 2 1

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=n;
  //   while(j>=1){
  //     cout << j << " ";
  //     j--;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 5 ->
  // 1 2 3
  // 4 5 6
  // 7 8 9

  // int n;
  // cin >> n;
  // int count=1;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout << count << " ";
  //     count++;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 6 ->
  // 9 8 7
  // 6 5 4
  // 3 2 1

  // int n;
  // cin >> n;
  // int count=3*n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout << count << " ";
  //     count--;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 7 ->

  // 16 15 14 13
  // 12 11 10 9
  // 8  7  6  5
  // 4  3  2  1

  // int n;
  // cin >> n;
  // int count=4*n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout << count << "\t";
  //     count--;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 8 ->
  // *
  // * *
  // * * *
  // * * * *

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=i){
  //     cout << "* ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 9 ->
  // 1
  // 2 2
  // 3 3 3
  // 4 4 4 4

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=i){
  //     cout << i <<" ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 10 ->
  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10

  // int n,count=1;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=i){
  //     cout << count <<" ";
  //     count++;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 11 ->
  // 1
  // 2 3
  // 3 4 5
  // 4 5 6 7

  // int n,count;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   count=i;
  //   int j=1;
  //   while(j<=i){
  //     cout << count <<" ";
  //     count++;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 12 ->
  // 1
  // 2 3
  // 3 4 5
  // 4 5 6 7

  // But solve this without using extra variable

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=i){
  //     cout << i+j-1 <<" ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // #proud

  // Pattern 13 ->
  // 1
  // 2 1
  // 3 2 1
  // 4 3 2 1

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=i){
  //     cout << i-j+1 <<" ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 14 ->
  // A A A
  // B B B
  // C C C

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   // we can also user char variable and then increment it after the end of
  //   column of j loop
  //   // I used explicit typecasting
  //   while(j<=n){
  //     cout << char(64+i) <<" ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 15
  // A B C
  // A B C
  // A B C

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout << char(64+j)<<" ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 16 ->
  // A B C
  // D E F
  // G H I

  // int n;
  // cin >> n;
  // int i=1;
  // char ch='A';
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout << ch <<" ";
  //     ch++;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 17 ->
  // A B C
  // B C D
  // C D E

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=n){
  //     cout << char(64+i+j-1) <<" ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // #proud

  // Pattern 18 ->
  // A
  // B B
  // C C C

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=i){
  //     cout << char(64+i) <<" ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 19 ->
  // A
  // B C
  // D E F
  // G H I J

  // int n;
  // cin >> n;
  // char ch='A';
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=i){
  //     cout << ch <<" ";
  //     ch++;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 20 ->
  // A
  // B C
  // C D E
  // D E F G

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   int j=1;
  //   while(j<=i){
  //     cout << char(64+i+j-1) <<" ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 21 ->
  // D
  // C D
  // B C D
  // A B C D

  // int n;
  // cin >> n;
  // int i=1;
  // while(i<=n){
  //   char ch='A'+n-i;
  //   int j=1;
  //   while(j<=i){
  //     cout << ch <<" ";
  //     ch++;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;

  // Pattern 22 ->
  //       *
  //      **
  //     ***
  //    ****

  // int n;
  // cin >> n;
  // int i = 1;
  // while (i <= n) {
  //   int j = 1;
  //   int spaces = n - i;
  //   while (spaces >= 1) {
  //     cout << " ";
  //     spaces--;
  //   }
  //   while (j <= i) {
  //     cout << "*";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 23 ->
  // ****
  // ***
  // **
  // *

  // int n;
  // cin >> n;
  // int i = 1;
  // while (i <= n) {
  //   int j = n;
  //   while (j >=i) {
  //     cout << "* ";
  //     j--;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 24 ->
  // ****
  //  ***
  //   **
  //    *

  // int n;
  // cin >> n;
  // int i = 1;
  // while (i <= n) {
  //   int j = n;
  //   int spaces = i;
  //   while (spaces > 1) {
  //     cout << " ";
  //     spaces--;
  //   }
  //   while (j >=i) {
  //     cout << "*";
  //     j--;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 25 ->
  // 1 1 1 1
  //   2 2 2
  //     3 3
  //       4

  // int n;
  // cin >> n;
  // int i = 1;
  // while (i <= n) {
  //   int j = n;
  //   int spaces = i;
  //   while (spaces > 1) {
  //     cout << " ";
  //     spaces--;
  //   }
  //   while (j >=i) {
  //     cout << i ;
  //     j--;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 26 ->
  //       1
  //     2 2
  //   3 3 3
  // 4 4 4 4

  // int n;
  // cin >> n;
  // int i = 1;
  // while (i <= n) {
  //   int j = 1;
  //   int spaces = n - i;
  //   while (spaces >= 1) {
  //     cout << " ";
  //     spaces--;
  //   }
  //   while (j <= i) {
  //     cout << i;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 27 ->
  //       1
  //     2 3
  //   4 5 6
  // 7 8 9 10

  // int n,count=1;
  // cin >> n;
  // int i = 1;
  // while (i <= n) {
  //   int j = 1;
  //   int spaces = n - i;
  //   while (spaces >= 1) {
  //     cout << "  ";
  //     spaces--;
  //   }
  //   while (j <= i) {
  //     cout << count << " ";
  //     count++;
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 28 ->
  //       1
  //     1 2 1
  //   1 2 3 2 1
  // 1 2 3 4 3 2 1

  // int n;
  // cin >> n;
  // int i = 1;
  // while (i <= n) {
  //   int j = 1;
  //   int spaces = n - i;
  //   while (spaces >= 1) {
  //     cout << "  ";
  //     spaces--;
  //   }
  //   while (j <= i) {
  //     cout << j << " ";
  //     j++;
  //   }
  //   j=i-1;
  //   while(j>=1){
  //     cout << j << " ";
  //     j--;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // Pattern 29 ->
  // TAGDAA HOMEWORK THAA
  // 1 2 3 4 5 5 4 3 2 1
  // 1 2 3 4 * * 4 3 2 1
  // 1 2 3 * * * * 3 2 1
  // 1 2 * * * * * * 2 1
  // 1 * * * * * * * * 1

  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n - i + 1) {
      cout << j << " ";
      j++;
    }

    j = 1;
    while (j <= (i - 1) * 2) {
      cout << "* ";
      j++;
    }

    j = n - i + 1;
    while (j >= 1) {
      cout << j << " ";
      j--;
    }
    cout << endl;
    i++;
  }
}