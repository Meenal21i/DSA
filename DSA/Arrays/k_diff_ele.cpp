#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bs(vector<int> &nums, int start, int key)
{
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == key)
        {
            return mid;
        }
        else if (nums[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int findPairs(vector<int> &nums, int k)
{

    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    //-> 2 pointer approach
    // int i=0, j=1;
    // int n=nums.size();

    // while(j<n){
    //     int val =nums[j]-nums[i];
    //     if(val == k){
    //         ans.insert({nums[i],nums[j]});
    //         // cout<<nums[i]<<" "<<nums[j]<<endl;
    //         ++i; ++j;
    //     }
    //     else if(val > k){
    //         i++;
    //     }
    //     else{
    //         j++;}
    //     if(i == j)
    //        { j++;}

    // }

    //-> binary search
    for (int i = 0; i < nums.size(); i++)
    {
        if (bs(nums, i + 1, nums[i] + k) != -1) // pair found
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }

    return ans.size();
}

int main(){
    // how to take user input in a vector
     vector<int> nums;
     for (int i=0; i<100; i++){
        cin>>nums[i];
     }
     int k;
     cin>>k;

     int totalUniquePair = findPairs(nums, k);
    return 0;
}