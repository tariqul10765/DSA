#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int n, int s){

    for(int i=0;i<n;i++){
        if(arr[i]==s) return i;
    }

    return -1;
}
int main(){
    int n,s;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>s;

    int index = linear_search(arr, n, s);

    if(index == -1) cout<<"This key is not found"<<endl;
    else cout<<s <<" is found in index "<<index<<endl;

}