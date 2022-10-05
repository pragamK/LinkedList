/* Map is a non continuous data structure  which stores data in key value pairs
Every key is unique and has a value related to it */

// map stores everything in ordered form(i.e. sorted manner)

// everything happens with red black tree actually here

// insertion complexity: logn (if key is string then complexity is o(s.size()*logn))
// access complexity: logn
// so time complexity for accessing n elements in map is nlogn

// to access key: m.first
// to access value: m.second
// to get size(): m.size()
// find a key: ans = m.find(key) ..........returns an iterator.....returns m.end() if key is not present

#include <bits/stdc++.h>
using namespace std;


// traversing a map
void traverse(map <int,string> m){
    cout<<"Size of map: "<<m.size()<<endl;
    for(auto i:m){
        cout<<"Key: "<<i.first<<" Value: "<<i.second<<"\n";
    }
}

int main(){
    map <int,string> m1;
    m1[1] = "Shaan";
    m1[2] = "Garv";
    m1[7] = "Joker";
    m1[4] = "Train";

    traverse(m1);

    // searching in map!!
    int x;
    cout<<"Enter key to search: ";
    cin>>x;
    auto ans = m1.find(x);
    if(ans!=m1.end()){
        cout<<(*ans).first<<" ---> "<<(*ans).second<<endl;
    }else{
        cout<<"Not found!!"<<endl;
    }

    // deleting a particular element!!
    cout<<"Enter element(key) to delete: ";
    cin>>x;
    auto er = m1.find(x);
    if(er!=m1.end()){
        m1.erase(er);
        cout<<"Deleted successfully!!\n";
    }else{
        cout<<"No such key present in the map!!\n";
    }

    traverse(m1);

    // lastly deleting the entire map!!
    m1.clear();
    traverse(m1);

}