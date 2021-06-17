#include<bits/stdc++.h>
using namespace std;
int* insertion_sort(int arr[], int n){
    int i,j,item;

    for(int i=1;i<n;i++){
        item = arr[i];

        j = i-1;

        while(j>=0 && arr[j]>item){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = item;
    }

    return arr;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int* res = insertion_sort(arr, n);

    cout<<res[0]<<endl;
}