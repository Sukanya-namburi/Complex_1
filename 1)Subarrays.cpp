//Formation of subarrays 
//Time complexity : O(n^3)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>out;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            vector<int>ans;
            for(int k=i;k<=j;k++){
                ans.push_back(arr[k]);
            }
            out.push_back(ans);
        }
    }
    for(auto it:out){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

//Subarray with given sum

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(flag==1){
                break;
            }
            else if(sum==target){
                flag=1;
                for(int t=i;t<=j;t++){
                    ans.push_back(arr[t]);
                }
            }
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}



