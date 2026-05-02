#include<iostream>
using namespace std;


int stack[5],top=-1;

void push(int x){
    if(top==5-1){
        cout<<"stack is full";
    }
    else{
        top++;
        stack[top]=x;
    }

}
void pop(){
    if(top==-1)
    cout<<"stack is empty";
    else{
        cout<<"poped element is "<<stack[top]<<endl;
        top--;
    }
}
void display(){
    if(top==-1)
    cout<<"stack is empty";
    else{
    for(int i= top;i>=0;i--){
        cout<<stack[i]<<endl;
    }}
}

int main(){

 push(5);
 push(6);
 display();
 pop();
 }