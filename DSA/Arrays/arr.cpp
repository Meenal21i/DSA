#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void fun(int a[]){
    int n, m, x;
    cout<<"enter start index, end index, adding element: "<<endl;
    cin >> n >> m >> x;
    
    if (n < m && n >= 0 && m <= 19)
        {
            int sum = 0;
            for (int i = n; i <= m; i++)
            {
                a[i] += x;
            }
            for (int i = 0; i < 20; i++)
            {
                sum += a[i];
            }
            cout << "sum is: " << sum << endl;
            
            
        }
        else{
                cout << "invalid index" << endl;
        
        }
        fun(a);
}

// vector<int> sum(int arr[],int call){
//     int a, b;
//     cout<<"enter start, end index: "<<endl;
//     cin>>a>>b;
//     int sum=0;
//         for (int i = a; i <= b; i++)
//         {
//                 sum += arr[i];

//         }
//         cout << "sum is: " << sum << endl;
//         vector<int> summ;
//         summ.push_back(sum);
//         return summ;
// }

vector<int> wholesum(int arr[], int size)
{
        int s = 0;
        for (int i = 0; i < size; i++)
        {
                s += arr[i];
        }
        vector<int>ans;
        cout << "sum of entire array is: " << s << endl;
        int call;
        cout<<"how many times you want to give index : ";
        cin>>call;
        // for(int i=0;i<call;i++){
        // ans = sum(arr, call);}
        // return ans;
        while(call--){
            int a,b;
            cin>>a>>b;
            int sum = 0;
            for (int i = a; i <= b; i++)
            {
                sum += arr[i];
            }
            cout<<sum<<endl;
            ans.push_back(sum);
        }
        return ans;
}

string reverse(string str){
    int n=str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i], str[n-i-1]);
    }
    return str;

}
    int main(){
    //     int a[20]={};
    //     fun(a);
    
    int n;
    cout<<"enter n: ";
    cin>>n;
    int v[n];
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    vector<int>ans;
    ans =  wholesum(v,n);
    for(int i = 0; i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
    // string str;
    // cin >> str;
    // cout<<reverse(str);
}
