#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
insertion sort -> shift & insert  
val=1   (Fetch)
1<10    (Compare)
shift->10   (Shifting)
empty space-> val insert    (Copy)
*/

int main(){
    vector<int> v{10,1,7,6,14,9};
    int n = v.size();
    for(int round=1; round<n; round++){
        
        // Step 1: Fetch the value
        int val = v[round];
        int j = round - 1;
        for (; j >= 0; j++)
        {
            // Step 2: compare
            if (val < v[j]){
                // Step 3: Shift elements of arr[0..i-1], that are greater than key, to one position ahead
                v[j+1] = v[j];
            }
            else{
                break;
            }
        }
        // Step 4: Copy
        v[j+1]=val;
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}