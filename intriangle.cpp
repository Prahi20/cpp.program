// write a program in cpp to design a pyramid pattern;

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << " enter no of rows";
//     cin >> n;

//     // int m;
//     // cout << "enter no of columns";
//     // cin >> m;

//     for (int i = 4; i >= 1; i--)
//     {
//         for (int j = 4; j >= i; j--)
//         { 
//             cout<<j <<" ";
//         }
//         cout << endl;
//     }
//}

// progrm for pattern 
//4
//43
//432
//4321






// WAP TO print the pattern AAAAA,BBBBB,CCCCC,DDDDD



#include<iostream>

using namespace std;

int main (){

    int m;
    cout<<"enter no of rows";
    cin>>m;

    int n;
    cout<<"enter columns ";
    cin>>n;

for (int i=1;i<=m ;i++){
    for (int j=1;j<=n;j++){

      cout<<(char)(i+96 ); //  do typecastinf for  print this pattern
    }
    cout<<endl;
}
} 