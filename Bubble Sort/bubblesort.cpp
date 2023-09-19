#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    bool swapped = false;
    for(int i = 1 ; i < n ; i++){
        // Bahar ka loop chalaya
        for(int j = 0 ; j < n - i ; j++){
            // Andar loop chalaya aur isme j ko j+1 se compare karake swap karaya taki har round mai corresponding largest element uske sahi jagah pe place ho jaye
            if(arr[j] > arr[j+1] ){
                swap(arr[j+1],arr[j]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}


int main() {
  cout << "Hello World!\n";
}