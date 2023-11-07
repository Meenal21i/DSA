#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int n=25, i=25, cnt=5;ṇ
int main()
{
    int n;
    cout<<"enter num: ";
    cin>>n;
    int cnt=0;
    for(int i=5; n/i >0; i*= 5){
        cnt +=(n/i);
    }
    cout<< "number of zeros in the factorial of "<<n<<" is "<<cnt << endl;
}