// sets are same as maps but store only single values i.e. keys
// they also store unique values
// values are not sorted here
// for unordered sets complexity is o(1) for insertion, deletion and access as they are inbuilt using hash values
// for access: use s.find() or just use a loop

#include <bits/stdc++.h>
using namespace std;

void print(unordered_set <int> s){
    cout<<"Set is: \n";
    for(auto i:s){
        cout<<i<<endl;
    }
}

int main(){
    unordered_set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(9);
    s.insert(10);
    s.insert(9);
    s.insert(5);

    print(s);

    int el;
    cout<<"Enter element to search: ";
    cin>>el;
    auto it = s.find(el);
    
    // if it is present then
    if(it!=s.end()){
        cout<<*(it)<<" is present!!\n";
        s.erase(el);
        cout<<"Erased the element!!\n";
        print(s);
    }else{
        cout<<"Not found!!\n";
    }
}