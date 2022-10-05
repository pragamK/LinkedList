// pairs are generally used to declare two variables of similar or different data types
// p.make_pair(x,y) --> makes a pair with x and y as elements

#include <bits/stdc++.h>
using namespace std;

int main(){
    pair <int,string> p1;
    cout<<"Enter the first value:";
    cin>>p1.first;
    cout<<"Enter the second value:";
    cin>>p1.second;
    cout<<p1.first<<" "<<p1.second<<"\n";
    
    pair <int,string> p2;
    p2={1,"Shaan"};
    cout<<p2.first<<" "<<p2.second<<"\n";
}