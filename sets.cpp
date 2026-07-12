#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(5);//Duplicate
    for(int x :s){
        cout<<x << " ";
    }
    cout<<"size of the set :"<<s.size() <<endl;
    cout<<"Find 3:"<< (s.find(3) !=s.end()? "found": "not found")<< endl;
    s.erase(3);
    cout<<"size after erasing things:"<<s.size()<<endl;
    
    return 0;
}

