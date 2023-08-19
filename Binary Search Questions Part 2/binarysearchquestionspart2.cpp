// Pivot element in an array

// #include <iostream>
// using namespace std;
int pivot(int arr[], int n) {
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  while (s < e) {
    if (arr[mid] >= arr[0]) {
      s = mid + 1;
    } else {
      // jaise hi sabse small wala pehla element milega vahi apna pivot element
      // hoga
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return s; // s ya e dono se same result ayega
}
// int main() {
//   cout << "Hello World!\n";
//   int arr[10] = {4,5,6,1,2,3};
//   int result = pivot(arr,6);
//   cout << "Index of pivot element is : " << result << endl;

// }

// *****Search in a rotated sorted array******

// pivot wala function
// int getPivot(vector<int>& arr,int n){
//   int s=0;
//   int e=n-1;
//   int mid = s+(e-s)/2;
//   while(s<e){
//     if(arr[mid]>=arr[0]){
//       s=mid+1;
//     }
//     else{
//       e=mid;
//     }
//     mid = s+(e-s)/2;
//   }
//   return s; //s ya e dono se same result ayega
// }

// normal binary search wala function
//  int binarySearch(vector<int>& arr, int start,int end,int key){
//      int s = start;
//      int e = end;
//      int mid =s + (e-s)/2;
//      while(s<=e){
//          if(arr[mid]==key){
//              return mid;
//          }
//          else if(key>arr[mid]){
//              s=mid+1;
//          }
//          else{
//              e=mid-1;
//          }
//          mid = s+(e-s)/2;
//      }
//      return -1;
//  }

// int search(vector<int>& arr, int n, int k)
// {
//     // Write your code here.
//     // Return the position of K in ARR else return -1.
//     int pivot = getPivot(arr, n);
//     if(k>=arr[pivot] && k<= arr[n-1]){
//         return binarySearch(arr, pivot, n-1, k);
//     }
//     else{
//         return binarySearch(arr, 0, pivot-1, k);
//     }
// }
