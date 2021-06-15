#include<bits/stdc++.h>
using namespace std;
int* selection_sort(int arr[], int n){
    int min_index = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[min_index]>arr[j]) min_index = j;
        }

        swap(arr[min_index], arr[i]);
    }
    return arr;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int* final_arr = selection_sort(arr, n);

    cout<<final_arr[0]<<endl;
}