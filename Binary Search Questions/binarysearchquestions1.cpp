#include <iostream>
using namespace std;
int firstOcc(int arr[],int n, int key){
  int s=0,e=n-1,ans=-1;
  int mid = s+(e-s)/2;
  while(s<=e){
    if(arr[mid]==key){
      ans = mid;
      e=mid-1;
    }
    else if(arr[mid]<key){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid = s+(e-s)/2;
  }
  return ans;
}
int lastOcc(int arr[],int n, int key){
  int s=0,e=n-1,ans=-1;
  int mid = s+(e-s)/2;
  while(s<=e){
    if(arr[mid]==key){
      ans = mid;
      s=mid+1;
    }
    else if(arr[mid]<key){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid = s+(e-s)/2;
  }
  return ans;
}
int main() {
  int even[11] = {1,2,3,3,3,3,3,4,5,6,7};
  int f=firstOcc(even, 11, 3);
  int l=lastOcc(even, 11, 3);
  cout << "First occurence of 3 is at Index " << f << endl;
  cout << "Last occurence of 3 is at Index " << l << endl;
  cout << "Total number of 3's are : " << l-f+1 << endl;
}


//*****************Coding Ninja Question for above****************
// #include <bits/stdc++.h> 
// int firstOcc(vector<int>& arr,int n, int key){
//   int s=0,e=n-1,ans=-1;
//   int mid = s+(e-s)/2;
//   while(s<=e){
//     if(arr[mid]==key){
//       ans = mid;
//       e=mid-1;
//     }
//     else if(arr[mid]<key){
//       s=mid+1;
//     }
//     else{
//       e=mid-1;
//     }
//     mid = s+(e-s)/2;
//   }
//   return ans;
// }
// int lastOcc(vector<int>& arr,int n, int key){
//   int s=0,e=n-1,ans=-1;
//   int mid = s+(e-s)/2;
//   while(s<=e){
//     if(arr[mid]==key){
//       ans = mid;
//       s=mid+1;
//     }
//     else if(arr[mid]<key){
//       s=mid+1;
//     }
//     else{
//       e=mid-1;
//     }
//     mid = s+(e-s)/2;
//   }
//   return ans;
// }
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     // Write your code here
//     pair<int, int> p;
//     p.first = firstOcc(arr,n,k);
//     p.second = lastOcc(arr,n,k);

//     return p;
// }

// Peak element in mountain array
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s = 0;
//         int e = arr.size()-1;
//         int mid = s+(e-s)/2;
//         while(s<e){
//             if(arr[mid]<arr[mid+1]){
//                 s=mid+1;
//             }
//             else{
//                 e=mid;
//             }
//             mid = s+(e-s)/2;
//         }
//         return s;
//     }
// };