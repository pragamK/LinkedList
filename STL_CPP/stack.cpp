#include <bits/stdc++.h>
using namespace std;

stack <int> s;

void traverse(){
    cout<<"Elements of stack are:\n";
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){
    cout<<"Enter 1 to push, 2 to pop, 3 to empty and traverse, 4 to see the topmost element.....";
    while(1){
        int ch;
        cout<<"\nEnter the choice:";
        cin>>ch;
        switch(ch){
            case 1: int el;
                    cout<<"Enter the element to push:";
                    cin>>el;
                    s.push(el);
                    break;

            case 2: s.pop();
                    break;

            case 3: traverse();
                    break;

            case 4: if(s.empty()){cout<<"Stack is empty";}
                    else{
                        cout<<"Topmost element is: "<<s.top();
                    }   
                    break;

            default: exit(0);
        }
    }
}