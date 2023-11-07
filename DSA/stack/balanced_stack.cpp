#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int bracket_count=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='('){ bracket_count++; }
        else{ bracket_count--; }
    }
    if (bracket_count==0){ cout<< "stack is balanced";}
    else{ cout<< "not balanced";}
}