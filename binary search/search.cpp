#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int s){
    int left, right, mid;

    left = 0;
    right = n-1;

    while(left<=right){
        mid = (left+right)/2;

        if(arr[mid] == s) return mid;
        if(arr[mid] < s) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s;
    cin>>s;


    int index = binary_search(arr, n, s);

    if(index == -1) cout<< "This key cannot found"<<endl;
    else cout<<s<<" is found in index "<<index<<endl;
}