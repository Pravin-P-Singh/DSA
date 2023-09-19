#include <iostream>
using namespace std;
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j < n - i ; j++){
            if(arr[j] > arr[j+1] ){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

int main() {
  cout << "Hello World!\n";
}