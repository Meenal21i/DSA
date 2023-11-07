#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    const int N =max+1;
    int ans=-1;
    int check[N]={0};
    // for(int i=0;i<N;i++){
    //     check[i]=0;
    // }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=1;
        }
    }
    for(int i=0;i<N;i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}