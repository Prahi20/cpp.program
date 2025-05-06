// // WAP to swapping of two numbers

// #include<iostream>
// using namespace std;
// int main(){

//     int x;
//     cout<<"enter x :";
//     cin>> x;

//     int y=15;
//     cout<<"enter y :";
//     cin>>y;


//     cout<< x<<" " <<y<<endl;

//     x=x+y;
//     y=x-y;
//     x=x-y;

//     cout<< x <<" " <<y<<endl;
// }





// wap a program to swap numbers using functions.

#include<iostream>
using namespace std;

void swapnumbers(int &a , int &b){

int temp=a;
a=b;
b=temp;
}

int main (){

    int num1,num2;

    // input from user

    cout<<"enter two numbers :";
    cin>> num1 >> num2;

    cout<<"before swapping : num1= "<<num1<<",num2 = "<<num2<<endl;


    // call the swap function 

    swapnumbers(num1,num2);

    // display the result 

    cout<< "after swapping : num1 ="<<num1<<",num2 = "<<num2<<endl;
}



