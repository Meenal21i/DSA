#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int miss(int a[],int size){
    for(int i=0;i<size; i++){
        if(i+1 != a[i]){
            cout<<i+1<<endl;
            break;
        }
    }
}

int sortnum(int a[], int n){
    int zero=0,one=0,twos=0;
    for(int i=0; i<n; i++){
        if(a[i] == 0){zero++;}
        else if (a[i] == 1){ one++;}
        else {twos++;}
    }
    while(zero--){cout<<"0"<<" ";}
    while(one--){cout<<"1"<<" ";}
    while(twos--){cout<<"2"<<" ";}
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
    sortnum(a,n);
    // miss(a,n);
}



