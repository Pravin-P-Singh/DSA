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

//*******************************************************
// Find square root using binary search

// long long int binarySearch(int n){
//     int s = 0;
//     int e = n;
//     long long int mid = s + (e-s)/2;
//     long long int ans = -1;
//     while(s<=e){
//         long long int square = mid*mid;
//         if(square == n){
//             return mid;
//         }
//         else if(square < n){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid-1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int floorSqrt(int n)
// {
//     // Write your code here.
//     return binarySearch(n);
// }

// *********************************************
// Same above question with precision

// #include <iostream>

// using namespace std;
// long long int binarySearch(int n){
//     int s = 0;
//     int e = n;
//     long long int mid = s + (e-s)/2;
//     long long int ans = -1;
//     while(s<=e){
//         long long int square = mid*mid;
//         if(square == n){
//             return mid;
//         }
//         else if(square < n){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid-1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// double morePrecision(int tempSol, int precision, int n){
//     double factor = 1, ans = -1;
//     for(int i = 0; i < precision; i++){
//         factor = factor/10;
//         for(double j = tempSol; j*j <= n; j += factor){
//             ans = j;
//         }
//     }
//     return ans;
// }

// double floorSqrt(int n)
// {
//     // Write your code here.
//     double tempSol = binarySearch(n);
//     return morePrecision(tempSol,3,n);
// }

// int main()
// {
//     cout<< floorSqrt(37);

//     return 0;
// }
