#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int dividend, int divisor)
{
    int s = divisor, e = abs(dividend);

    int ans;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (abs(mid * divisor) <= abs(dividend))
        {
            if (abs(mid * divisor) == abs(dividend)){
                ans= mid;
                break;}
            else
            {
                ans = mid;
                s = mid + 1;
            }
        }
        else
        {
            e = mid - 1;
        }
    }
    if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0)){
        return -ans;
    }
    else{
        return ans;
    }
}

int main()
{
    int dividend = 17, divisor = 0;
    // cout<<"Enter Dividend and divisor: ";
    // cin>>dividend>>divisor;
    int ans = solve(dividend, divisor);
    cout << "Ans is " << ans << endl;
    return 0;
}