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

//************************************************
// Painter Partition Problem
// bool isPossibleSol(vector<int> &boards, int mid ,int k){
//     int PainterCount = 1;
//     int PaintingCheck = 0;
//     for(int i = 0; i<boards.size() ; i++){
//         if(PaintingCheck + boards[i]<=mid){
//             PaintingCheck+=boards[i];
//         }
//         else{
//             PainterCount++; //painter count badha diya kyuki upar limit reach kargaya tha
//             if(PainterCount>k || boards[i]>mid){ //agar paintercount total number of painters se zyada hogaya ya fir next board element mid se bada hai to false return kardo aur boards vector ke right side mai jao s = mid+1 karke
//                 return false;
//             }
//             PaintingCheck = boards[i];
//         }
//     }
//     return true;
// }
// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     //Write your code here.
//     int s = 0,sum = 0, ans = -1;
//     for(int i = 0; i < boards.size();i++){
//         sum+=boards[i];
//     }
//     int e = sum;
//     int mid = s+(e-s)/2;
//     while(s<=e){
//         if(isPossibleSol(boards,mid,k)){
//             ans = mid;
//             e = mid-1;
//         }       
//         else{
//             s = mid+1;
//         }
//         mid = s+ (e-s)/2;
//     }
//     return mid;
// }

//**********************************************************
//Aggressive cows problem
bool isPossible(vector<int> &stalls, int k, int mid){
    int CowCount = 1;
    int lastPos = stalls[0];
    for(int i = 0;i < stalls.size(); i++ ){
        if(stalls[i]-lastPos>=mid){
            CowCount++;
            if(CowCount==k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int s = 0;
    int maxi = -1,ans = -1;
    for(int i = 0; i < stalls.size();i++){
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossible(stalls,k,mid)){
            s = mid + 1;
            ans = mid;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}