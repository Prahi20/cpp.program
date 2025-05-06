#include <iostream>
using namespace std;
int main()
{

    int n = 6;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 != 0) // for odd number of row print number
        {

            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }
        }
        else      // for even print alphabets
        {
            char ch = 'A';
            for (int j = 1; j <= i; j++)
            {
                cout << ch++;
            }
        }

        cout << endl;
    }
}
