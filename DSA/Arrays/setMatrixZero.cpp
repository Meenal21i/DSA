#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// ---------------------------------------- BRUTE FORCE APPROACH ------------------------------------------

void markRow(vector<vector<int>> &arr, int row, int col, int i){
    // marking rows containing 0 as -1
    for (int j = 0; j < col; j++){
        if (arr[i][j] != 0){
            arr[i][j] = -1;
        }
    }
}
    // marking columns containing 0 as -1
void markCol(vector<vector<int>> &arr, int row, int col, int j) {
    for (int i = 0; i < row; i++){
        if (arr[i][j] != 0){
            arr[i][j] = -1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &arr, int row, int col) {

    // Set -1 for rows and cols
    // that contains 0. Don't mark any 0 as -1:
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (arr[i][j] == 0){
                markRow(arr, row, col, i);
                markCol(arr, row, col, j);
            }
        }
    }

    //mark all -1 as 0
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }

    return arr;
}

    int main()
{
    vector<vector<int>> arr = {{2,4,3},{1,0,0}};
    int row = arr.size();
    int col = arr[0].size();

    // printing original matrix
    cout << "initial matrix:" << endl;
    for (auto x : arr){
        for (auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }

    vector<vector<int>> ans = zeroMatrix(arr, row, col);

    
    cout << "after setting zero matrix:" << endl;
    for (auto x : ans){
        for (auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
}