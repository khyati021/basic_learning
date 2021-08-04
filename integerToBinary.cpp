// C++ program to convert a decimal number to binary number
 
#include <iostream>
using namespace std;
 
// function to convert decimal to binary
int binaryNum[16] ;
void decToBinary(int n)
{
    int i = 0;
    while (n != 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = 16; j >= 0 ; j--)
        cout << binaryNum[j];
}
 
// Driver program to test above function
int main()
{
    int n = 0x7F; // stroing hexadecimal value
    decToBinary(n);
    return 0;
}
