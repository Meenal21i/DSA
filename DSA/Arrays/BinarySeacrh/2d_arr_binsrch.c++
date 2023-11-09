#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool binarySrch(int arr[][4], int rows, int cols, int target)
{
    int s = 0, total_size = rows * cols, e = total_size - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        int row_index = mid / cols;
        int col_index = mid % cols;
        if (arr[row_index][col_index] == target)
        {
            cout << "found at " << row_index << " and " << col_index << endl;
            return true;
        }
        else if (arr[row_index][col_index] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return false;
}

int main()
{
    int arr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int rows = 5, cols = 4;
    int target;
    cout << "enter target: ";
    cin >> target;

    bool ans = binarySrch(arr, rows, cols, target);
    if (ans)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}