#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    int arr[10]={2,7,2,3,2,1,5,6,7,3};
    map<int,int> freq;
    for(int i=0;i<10;i++){
        freq[arr[i]]++;
    }
    for(auto it: freq){
        cout<<it.first<<" is present aboved"<<it.second<<endl;
    }  
return 0;
}
