#include <iostream>
using namespace std;
int binarySearch(int arr[] , int size, int key){
  int start = 0;
  int end = size-1;
// int mid = (start+end)/2; -> start ka aur end ka value agar 2^31-1 raha ya is range mai raha to dikkat hoga so better approach is needed
  int mid = start + (end-start)/2;
  while(start<=end){
    if(key==arr[mid]){
      return mid;
    }
    else if(key > arr[mid]){
      start = mid+1;
    }
    else {
      end=mid-1;
    }
    mid = start + (end-start)/2;
  }
  return -1; //returns negative index if the value is not found in array
}
int main() {
  cout << "Hello World!\n";
  int even[10]={2,4,6,8,10};
  int odd[10]={1,3,5,6,7,9,11};
  int evenIndex = binarySearch(even, 5, 10);
  int oddIndex = binarySearch(odd, 7, 11);
  cout << "Index value of 10 in even array is :" << evenIndex << endl;
  cout << "Index value of 11 in odd array is :" << oddIndex << endl;
}