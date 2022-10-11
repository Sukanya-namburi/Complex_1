//Maximum product subarray(similar to kadane's algorithm)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Logic to find maximum product subarray
    int pro=1;
    int maxi=INT_MIN;
    //traversing from start
    for(int i=0;i<n;i++){
        pro*=arr[i];
        maxi=max(pro,maxi);
        if(pro==0){
            pro=1;
        }
    }
    //traversing from end
    pro=1;
    for(int i=n-1;i>=0;i--){
        pro*=arr[i];
        maxi=max(pro,maxi);
        if(pro==0){
            pro=1;
        }
    }
    cout<<maxi;//maximum product subarray 
}
