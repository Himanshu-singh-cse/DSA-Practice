#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,2,9,1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);//sort in ascending order
    cout<<"sorted array: ";
    for(int i=0;i< n;i++){
        cout<<arr[i] <<" ";
    }
    vector<int>vec={5,2,9,1,3};
    sort(vec.begin(),vec.end());
    cout<<endl;
    return 0;


}