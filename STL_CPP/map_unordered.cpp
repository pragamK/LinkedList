/* differences between ordered and unordered maps:
1) ordered maps are inbuilt using rb trees but unordered are built using hash tables i.e. hash value is implemented
2) time complexity in case of ordered is o(logn) for insertion, access etc. but in case of unordered it is o(1)
3) ordered map stores elements lexicographically i.e. sorted way but unordered stores randomly 
4) keys can be f any type in ordered but in case of unordered it can be only those whose hash values can be calculated i.e. pairs, vectors etc.
can not be used for keys....
*/

// q: take inputs of n strings and store frequency of each frequency and print frequency of string input by user

#include <bits/stdc++.h>
using namespace std;

// traversing a map
void traverse(unordered_map <string,int> m){
    cout<<"Size of map: "<<m.size()<<endl;
    for(auto i:m){
        cout<<"Key: "<<i.first<<" Value: "<<i.second<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter the number of strings: ";
    cin>>n;
    string s;
    unordered_map <string,int> m;
    for(int i=0;i<n;i++){
        cout<<"\nEnter the string: ";
        cin>>s;
        m[s]++;
    }

    traverse(m);
    
    cout<<"Enter the string to find its frequency: ";
    cin>>s;
    cout<<"Frequency of "<<s<<": "<<m[s]<<endl;

}