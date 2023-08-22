// **************Book Allocation Problem***************


// bool isPossibleSolution(vector<int>& arr, int n, int m, int mid){
//     int StudentCount = 1;
//     int pageSum = 0;
//     for(int i = 0; i < n; i++){
//         if(pageSum + arr[i] <= mid ){
//             pageSum+=arr[i];
//         }
//         else{
//             StudentCount++;
//             if(StudentCount > m || arr[i] > mid ){
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//     }
//     return true;
// }

// int findPages(vector<int>& arr, int n, int m) {
//     // Write your code here.
//     int s = 0,sum = 0, ans=-1;
//     for(int i = 0; i < n ; i++){
//         sum+=arr[i];
//     }
//     int e = sum;
//     int mid = s + (e-s)/2;
//     if(n<m){
//         return -1; // This is a special testcase where the number of books 'n' is less than the number of students 'm'!! 
//     }
//     while(s<=e){
//         if(isPossibleSolution(arr,n,m,mid)){
//             ans = mid;
//             e = mid-1;
//         }
//         else{
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }