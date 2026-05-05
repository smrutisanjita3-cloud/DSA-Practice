#include <iostream>
using namespace std;
#define max 5
int queue[max];
int front =-1;
int rear=-1;
void enqueue(int value){
    if(rear==max-1){
        cout<<"queue overflow\n";
    }
    else{
        if(front ==-1)
        front = 0;
        
            rear++;
           queue[rear]=value;

        
    }
}
void dequeue(){
   if(front==-1){
cout<<"queue empty";
   }
    
    else{
        front++;
    }
}
void display(){
  
        for(int i= front;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    
}
int main(){
    enqueue(10);
     enqueue(10);
      enqueue(10);
       enqueue(10);
       display();
       dequeue();
       display();
}