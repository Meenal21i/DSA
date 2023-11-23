#include<iostream>
#include<bits./stdc++.h>
using namespace std;

int bs(int arr[],int start, int end, int key){
    int mid;
    while(start<=end){
        mid= start + (end-start)/2;
        if(arr[mid]== key) return mid;
        else if(arr[mid]> key){ end = mid-1;}
        else{ start = mid+1;}
    }
    return mid;
}

int expSrch(int arr[], int n, int x){
    
    if(arr[0] == x) return 0;
    int i=1;
    while(i<n && arr[i] <= x){
        i = i*2;
    }
    return bs(arr, i/2, min(i, n-1), x);
}

// int unbounded_srch(int arr[], int n, int x){  // brute force
//     while(){
//         int i=0; //start
//         int ans;
//         if(arr[i]<x){ break;}
//         if(arr[i]==x){ans=i; i++;}
//     }
// }

int main()
{
    int arr[] = {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(arr) / sizeof(int);
    int x = 13;
    int ans = expSrch(arr,n, x);
    cout<<"index of "<<x<<" is: "<< ans;
}