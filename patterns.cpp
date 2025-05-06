// #include<iostream>

// using namespace std;

// int main (){

//     int m;
//     cout<<"enter no of rows";
//     cin>>m;

//     int n;
//     cout<<"enter columns ";
//     cin>>n;

// for (int i=1;i<=m ;i++){
//     for (int j=1;j<=n;j++){

//       cout<<"* ";
//     }

// cout<<endl;

// }

// }







// question 2
// patteern printing

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << " enter no of rows :";
    cin >> n;

    int m;
    cout << "enter no of columns :"; 
    cin >> m;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n + i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
