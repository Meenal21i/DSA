#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{5,4,3,2,1};

    //selection sort
    //outer loop -> (n-1) rounds
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = i;
        //inner loop -> index of minimum element in range i->n
        for(int j=i+1;j<arr.size();j++){
            if(arr[j] < arr[minIndex]){
            //new minimum, then store
            minIndex = j;
            } 
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    return 0;
    }