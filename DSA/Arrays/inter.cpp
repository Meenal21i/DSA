#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c; cin>>n;
    // if(n & 1 ==0){
    //     if(n==(a^b + b^c + a^c))
    //         cout<<a<<b<<c;
    for (int a = 0; a <= n; a++)
        for (int b = 0; b <= n; b++)
            for (int c = 0; c <= n; c++)
                if ((a ^ b) + (b ^ c) + (a ^ c) == n)
                {
                    cout << "a = " << a << ", b = " << b << ", c = " << c << " satisfy the condition." <<endl;
                    return 0; 
                }

    a = 1;
    b = 0;
    c = n;

    if ((a ^ b) + (b ^ c) + (a ^ c) == n)
    {
        cout << "a = " << a << ", b = " << b << ", c = " << c << " satisfy the condition." << endl;
    }
    else
    {
        cout << "No values of a, b, and c satisfy the condition for n = " << n << "." << endl;
    }
}