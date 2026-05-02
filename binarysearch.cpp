#include<iostream>
using namespace  std;
int main(){
int a[50]={1,2,3,44,55,67,78,87,94};

int key;

cout<<"enter key";
cin>>key;
int left=0;
int right=8;
while(left<=right){
int mid = (left+right)/2;
if(a[mid]==key){
    cout<<"key found at position"<<mid+1;
    return 0;}
    else if(a[mid]>key){
right=mid-1;
    }
    else{
        left=mid+1;
    }
                                                               
}
cout<<"key not found";
return 0;
}

