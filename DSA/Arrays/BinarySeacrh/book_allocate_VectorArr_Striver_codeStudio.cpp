#include<iostream>
using namespace std;


// ## VECTOR --> STRIVER --> CODESTUDIO
#include <bits/stdc++.h>
int countStudents(vector<int> &arr, int pages)
{
    int students = 1;
    long long pageStudent = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (pageStudent + arr[i] <= pages)
        {
            pageStudent += arr[i];
        }
        else
        {
            students += 1;
            pageStudent = arr[i];
        }
    }
    return students;
}

int findPages(vector<int> &arr, int n, int m)
{
    // Write your code here.
    if (m > n)
        return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int students = countStudents(arr, mid);
        if (students > m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}

