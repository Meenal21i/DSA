#include<iostream>
#include<vector>
using namespace std;
int peak_ele(vector<int> &v){
    int s=0, e=v.size()-1, mid=s+(e-s)/2;
    while(s<=e){
        if (v[mid] < v[mid + 1] && v[mid] > v[mid + 1]){
            cout<<v[mid]<<endl;
        }
            else if (v[mid] < v[mid + 1])
            {
                s = mid + 1;
            }
        else if(v[mid] > v[mid + 1])
        {
            e = mid;
        }
    }
    return mid+1;
}
int main(){
    vector<int> v(5);
    int a;
    for(int i=0;i<v.size(); i++){
        cin>>a;
        v.push_back(a);
    }
    cout<<peak_ele(v);
    
    return 0;
}