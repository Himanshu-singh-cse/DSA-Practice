#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    vector <int> my_vector;
    cout<<"is my vector empty? "<< my_vector.empty()<<endl;
    cout<<"vector current size:"<< my_vector.size()<<endl;
    my_vector.push_back(20);
    my_vector.push_back(30);
    my_vector.push_back(40);
    my_vector.insert(my_vector.begin()+1,25);
    my_vector.erase(my_vector.begin()+1);

    
    cout<<"vectors after pushing"<< my_vector.size();
    cout<<"printing all the numbers";
    for(int i=0;i<=my_vector.size();i++){
        cout<<my_vector[i]<<endl;
    }
    my_vector.clear();



    
    cout<<endl;
    return 0;

}
