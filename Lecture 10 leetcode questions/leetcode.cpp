#include <iostream>
using namespace std;

// Swapping alternate elements in array
void SwapAlternate(int arr[], int size) {
  for (int i = 0; i < size; i += 2) {
    // swap(arr[i], arr[i + 1]); alternative option for (i<size-2 in above loop)
    if (i + 1 < size) {
      swap(arr[i], arr[i + 1]);
    }
  }
}
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  SwapAlternate(arr, 5);
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
}

// Find unique element in array
// bhai sun
/* 0 ^ anything = anything
   1 ^ anything = 1
   samething ^ samething = 0
*/

int findUnique(int *arr, int size) {
  // Write your code here
  int ans = 0;
  for (int i = 0; i < size; i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}

//***************Homework Q1 pending***************

// Duplicate in an array
// [1,2,2,3,4]
// [1,2,3,4]
// upar ke do arrays ko xor(^) karke duplicate mil jayega

// ****************Homework Q2**********************
// needs a lot of practice and also revisit logic again and again
// class Solution {
// public:
//   vector<int> findDuplicates(vector<int> &nums) {
//     vector<int> ans;
//     for (int i = 0; i < nums.size(); i++) {
//       if (nums[abs(nums[i]) - 1] < 0) {
//         ans.push_back(abs(nums[i]));
//       } else {
//         nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
//       }
//     }
//     return ans;
//   }
// };

// Intersection of two sorted arrays
// Need to work on again
#include <bits/stdc++.h>
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2,
                                  int m) {
  // Write your code here.
  vector<int> ans;
  int i = 0, j = 0;
  while (i < arr1.size() && j < arr2.size()) {
    if (arr1[i] > arr2[j]) {
      j++;
    } else if (arr1[i] < arr2[j]) {
      i++;
    } else {
      ans.push_back(arr1[i]);
      j++;
      i++;
    }
  }
  return ans;
}

// Pair Sum
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s) {
  // Write your code here.
  vector<vector<int>> ans;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[i] + arr[j] == s) {
        vector<int> temp;
        temp.push_back(min(arr[i], arr[j]));
        temp.push_back(max(arr[i], arr[j]));
        ans.push_back(temp);
      }
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}