#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10, 1, 7, 6, 14, 9};
    int n = v.size();
    // bubble sort -> ith largest element at its right position
    // also called Sinking sort
    for (int round = 0; round < n - 1; round++)
    {
        bool swapped = 0; //0 -> false
        //int swapCount = 0;
        for (int j = 0; j < n - round - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swapped = 1; // 1 -> true
                swap(v[j], v[j + 1]);
                // swapCount++;
            }
        }
        if(swapped == 0) // if(swapCount == 0)
        {
            break;
            //sort is completed, no need to check further rounds
        }
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}