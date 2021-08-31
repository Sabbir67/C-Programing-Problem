#include <iostream>
using namespace std;

int main(){

    // Reverse a 3 digit Number

    int num , temp  , sum = 0;

    cout<<"Please input a Number : ";
    cin>>num; // 123

    temp = num%10; // 3
    sum = sum + temp*100; // 0 + (3*100) = 300

    temp = num/10; // 12
    temp = temp%10; // 2

    sum = sum + temp*10; //  300 +(2 * 10 ) = 320

    temp = num/10; // 12
    temp = temp/10; // 1

    sum = sum + temp;

    cout<<"Reverse is : "<<sum;








return 0;
}


