//write a program in cpp to find maximum number between two
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two numbers to find maximum\n";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<"maximum number is: "<<num1;
    }
    if(num2>num1){
        cout<<"maximum number is: "<<num2;
    }
    else{
        cout<<"Both numbers are equal";
    }
}