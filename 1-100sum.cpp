#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    
    for (int i = 2; i <= 100; i += 2) {
        sum += i;  // Add even numbers to sum
    }

    // Print the result
    cout << "The sum of all even numbers between 1 and 100 is: " << sum << endl;

    return 0;
}
