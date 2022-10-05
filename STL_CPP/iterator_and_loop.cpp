#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    int n,el,arr[100];
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter elements:";
    for(auto i=0;i<n;i++){
        cin>>el;
        v.push_back(el);
    }

    // iterating through a datatype
    for(auto j:v){
        cout<<j<<" ";
    }
    cout<<"\n";

}