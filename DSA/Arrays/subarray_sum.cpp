/**
 * This C++ code takes an array of integers and a target sum as input, and finds a subarray whose sum
 * is equal to the target sum.
 *
 * @return The code is returning 0.
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    /* The code is finding a subarray in the given array `a` whose sum is equal to the target sum `s`. */
    while (j < n && sum + a[j] <= s)
    {

        sum += a[j];
        j++;
    }
    /* The code is checking if the current sum is equal to the target sum `s`. If it is, it means that
    the subarray from index `i` to index `j` (inclusive) has a sum equal to `s`. It then prints the
    indices `i+1` and `j` (to adjust for 0-based indexing) and returns 0 to indicate successful
    execution of the program. */
    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }
    /* The code block `while(j<n){ ... }` is a loop that iterates through the array `a` from index `j`
    to `n-1`. */
    while (j < n)
    {
        /* The code `sum+=a[j]; while(sum>s) sum-=a[i]; i++;` is used to adjust the subarray sum `sum`
        when it exceeds the target sum `s`. */
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        /* The code block `if(sum==s){ st=i+1; en=j+1; break;}` is checking if the current sum `sum` is
        equal to the target sum `s`. If it is, it means that the subarray from index `i` to index
        `j` (inclusive) has a sum equal to `s`. It then assigns the values `i+1` and `j+1` to the
        variables `st` and `en` respectively, and breaks out of the loop. This is done to store the
        starting and ending indices of the subarray with the target sum. */
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;

    return 0;
}