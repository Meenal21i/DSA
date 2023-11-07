#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, k;
    cout<<"enter size of array: ";
    cin >> n;
    cout<<"enter k (to find kth largest ele): ";
    cin>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int x;
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++)
        x=v[i];
    cout<<x<<endl;
    return 0;
}