#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int v[n];
    int s=0, e=n-1;
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    int ans=-1;
    int target; cin>>target;
    while(s<=e){
    int mid = s + (e - s) / 2;
        if(v[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if (v[mid] < target) {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}