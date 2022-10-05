// vector is a array of elements whose size can be changed accordingly
// dynamic array whose size is changed when we push an element

// functions:
// v.push_back(21): appends 21 at last of vector.
// v.pop_back(): deletes last element
// v.size(): gives the size of vector

// declarations:
// vector <int> v;
// vector <int> v(10); ----> vector of length 10 with all elements 0
// vector <int> v(10,3); -----> vector of length 10 with all elements 3

// copying a vector to other:
// vector <int> v2=v; -----> copies the element....i.e. reference is not copied

// always pass v by reference if u need change in actual vector rather than making a copy of it!!

#include <bits/stdc++.h>
using namespace std;

void print_vector(vector <int> &v){
    cout<<"Elements are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    vector <int> v1;
    int n,i,el,ch;
    cout<<"------Enter 1 to input, 2 to pop, 3 to print size, 4 to print vector, anything to exit------";
    while(1){
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch){
            case 1: cout<<"Enter the element:";
                    cin>>el;
                    v1.push_back(el);
                    break;

            case 2: v1.pop_back();
                    break;

            case 3: cout<<"Size: "<<v1.size();
                    break;

            case 4: print_vector(v1);
                    break;

            default:
                    exit(0);
        }
    }

}