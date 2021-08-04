// C++ program to demonstrate an integer varable stores the error status in its bits.
// every bit represent an error status. Display the error status at any bit.
//question from Harman interview
//convert integer to decimal store it in an array in reverse order and print the 
//required bit.
 
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
void printErrorStatus(int bit)
{
    cout << binaryNum[bit];
}
 
// Driver program to test above function
int main()
{
    int n = 0x7F; // stroing hexadecimal value
    int bit =8;
    decToBinary(n);
    cout << endl;
    printErrorStatus(bit);
    return 0;
}
