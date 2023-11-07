#include<iostream>
using namespace std;
int selection_sort(int arr[] , int n){
    // selection sort --> select minimum ele -> swap with begin ele
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int bubble_sort(int arr[], int n){
    // bubble sort-> repeatedly swap 2 nos if in wrong order
    
    int counter=1;
    while(counter<n){
        for(int i=0; i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
        } 
    }
    counter++;
}
}

int insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(current<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
int print_arr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr, n);
    print_arr(arr,n);
    bubble_sort(arr, n);
    print_arr(arr,n);
    insertion_sort(arr, n);
    print_arr(arr,n);
}