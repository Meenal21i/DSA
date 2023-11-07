#include<iostream>
#include<vector>
using namespace std;

int  find_sqrt(int n){
    int s = 0, e = n/2;
    int target = n;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        
    }
    return ans;

}
int main(){
    int n; cin>>n;
    cout<<"ans is "<<find_sqrt(n);
    

    return 0;
}