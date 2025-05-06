//Write a progam in cpp for check number is even or odd by ternery operator

// #include<iostream>
// using namespace std;

// int main (){

// int n;
// cout<<"enter the number ";
// cin>>n;

// (n%2==0)? cout<<"even number " : cout << "odd number"; // ternery operator 
// }




#include<iostream>
using namespace std;

int main(){

int n;
cout << " enter no of rows";
cin>> n;

int m;
cout<< "enter no of columns";
cin>> m;

for(int i=1;i<=n;i++){

for ( int j=1;j<=m;j++){
    cout<< (char)(i+64); //  this line prints the ascii values of chaarcters a,b,c,etc.....
    // when we write i in place of j we receive the output aaaa,bbbb,cccc,dddd
}
   cout<< endl;
}
}