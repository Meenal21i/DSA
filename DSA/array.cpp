#include<iostream>
using namespace std;
int main(){
    int arr[]={0,4,5,5,3,8,9};
    
    //peak element
    // int mx=arr[0];
    // for(int i=0;i<=6;++i){
    //     if(mx<=arr[i]){
    //         mx=arr[i];
    //         }
    //         cout<<mx<<" ";
    // }
    
    //sum of all subarray
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         sum+=a[j];
    //     }
    //     cout << sum << endl;
    // }

    //longest arithematic subarray
    
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int ans=2;
    int pd=a[1]-a[0];
    int j=2, curr=2;

    while(j<n){
        if(pd == a[j]-a[j-1]){ curr++;}
        else{ pd = a[j]-a[j-1];
            curr=2; }
            ans = max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}