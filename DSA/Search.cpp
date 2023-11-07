#include<iostream>
#include<vector>
using namespace std;
int firstOccur(vector<int> v, int key){
    int s=0, e=v.size()-1;
    int mid =(s+e)/2;
    int ans =-1;

    while(s<=e){
        if(v[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>v[mid]){
            s=mid+1;
        }
        else if(key<v[mid]){
            e=mid-1; 
        }mid=(s+e)/2;
    }return ans;
}
int binarySearch(int arr[], int n, int key){
    int s=0, e=n-1;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid] > key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }    
    // int key;
    // cin>>key;
    // cout<<binarySearch(arr,n,key)<<endl;

    //first occurence
    vector<int> v{1,3,3,3,3,3,4,4,4,4,6,8};
    int target =7;
    cout<<firstOccur(v, target)<<endl;
    return 0;
}