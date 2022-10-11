//Maximum subarray sum
//Method -1 (Brute force):Forming all subarrays and finding maximum sum(tc:O(n^3))

//Method-2(optimal approach)
//Kadane's algorithm

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(sum,maxi);//if sum is negative the change it into 0 bcz
        if(sum<0){          //it is not good to carry negative number to get maximum sum subarray
            sum=0;
        }
    }
    cout<<maxi;
}
