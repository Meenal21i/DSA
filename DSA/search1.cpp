#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int total_occur(vector<int> v, int key){
    vector<int>::iterator low = lower_bound(v.begin(), v.end(), key);
    vector<int>::iterator high = upper_bound(v.begin(), v.end(), key);

    int ans=high-low+1;
    return ans;
}

int missingele(vector<int> v){
    //  through linear search 
    sort(v.begin(), v.end());
    int n=v.size();
    if (n==0)
    return 0;
    else{
        for (int i=0;i<n-1;++i){
            if (v[i]!=i+1){
                cout<<"Missing element is "<<i+1<<endl;
                break;
                }
                }
                }
                return 0;
                }

int findmissing(vector<int> v){
    int s=0, e=v.size()-1;
    int mid;
    while (s <= e)
    {
                mid = s + ((e - s) / 2);
                if (v[mid] == mid + 1)
                {
                // left elements are present
                s = mid + 1;
                }
                else if (v[e] - v[mid] + 1 == e - mid + 1)
                {
                // right ele are present
                e = mid - 1;
                }
    }
    return mid+1;
}

int main()
{
    vector<int> v{1,2,3,4,4,4,4,4,4,4,5,6,7};
    int key=4;
    int final = total_occur (v, key);
    cout<<final<<endl;

    vector<int> v1{1,2,3,4,5,6,7,8};
    cout<< missingele(v1)<<endl;
    cout<<findmissing(v1)<<endl;
    return 0;
}