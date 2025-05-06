// program 1

// #include<iostream>
// using namespace std;

// int main (){

// for (int i=1;i<=100;i++){
//     cout<<i<<endl;
// }
// }


//program 2
// #include<iostream>
// using namespace std;

// int main (){

    
//     int i=0;
//     int sum=0;

//     while (i<=50){
//      sum =sum +i;
//      i++;
//  }
// cout<<"sum of numbers is :" <<sum <<endl;
// }


// program 3
// #include<iostream>
// using namespace std;

// int main (){

//     int max,min;
//     cout<<"maximum numbers is :";
//     cin>>max;
//     cout<< "minimum numbers is :";
//     cin>>min;

//      for (int i=min;i<=max; i++){
//         if (i%2==0){
//             cout<<i<<" " ;
//         }
       
        
//     }
// }



// program 4 .....

#include<iostream>
using namespace std;

int main (){

    int i,n;
    int isprime=1;

    cout<<"enter the number :";
    cin>>n;

    for (i=2;i<=n/2+1;i++){

        if (n%i==0){
            isprime=0;
            cout<<"not a prime number";
            break;
        }
    }

    if (isprime==1){
        cout<<"prime number";
    }
}
