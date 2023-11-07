#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int> > v{{1,2,3},{4,5,6},{7,8,9}};
    int row = v.size();
    int col = v[0].size();
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            if(i!=j){
                swap(v[i][j], v[j][i]);
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
            cout << v[j][i] << " ";
    cout<<endl;
    }
    return 0;
}