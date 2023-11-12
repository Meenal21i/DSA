#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int> arr){
    int s=0, e=arr.size()-1;
    while(s<=e){
        int mid = s + (e-s)/2;

        if(s == e){ // single element
            return s;
        }
        if(mid <= e && arr[mid] > arr[mid+1]){
            return mid;
        }
        if (mid >= s && arr[mid - 1] > arr[mid])
        {
            return mid-1;
        }
        if(arr[s] > arr[mid]){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        
        }
    }
    return -1;
}

    int main()
{
    vector<int> arr{10,8,6,4,2};
    int ans = findPivot(arr);
    if(ans == -1){
        cout<<"Kuch gadbad hai "<< endl;
    }
    else{
    cout<<"Ans is at index: "<<ans<<endl;
    cout<<"Ans is: "<<arr[ans]<<endl;
    }
    return 0;
}