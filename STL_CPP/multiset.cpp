// multiset can store duplicate values also.
// rest all is same

#include <bits/stdc++.h>
using namespace std;

void print(multiset <int> s){
    cout<<"Set is: \n";
    for(auto i:s){
        cout<<i<<endl;
    }
}

int main(){
    multiset <int> s;
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