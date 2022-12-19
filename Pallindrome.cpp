/// Create a program that determines whether a number is a pallindrome or not
#include <iostream>
using namespace std;

int main(){
    int carry;
    int rev = 0;
    unsigned long long n, number;   // allow for long input
    cout << "Enter your number: ";
    cin >> number ;
    n = number;
    do{
        carry = number%10;
        rev = (rev*10)+carry;
        number= number / 10;
    } while (number!=0);

    if(n==rev)
        cout<< n <<" is a pallindrome";
    else
        cout<< n <<" is not a pallindrome";
    return 0;
}