#include <iostream>
using namespace std;

int main(){

    // Arithmetic Operators
    // + - * / % ++ --

    int number1 ;
    int number2 ;
    int sum; // +
    int sub; // -
    int mult; // *
    int div; // /
    int mod;

    cout << "Please Input First Number : " ;
    cin>>number1; // 6

    cout << "Please Input Second Number : " ;
    cin>>number2; // 4

    sum = number1 + number2 ;  // sum = 6+4 = 10
    sub = number1 - number2 ;
    mult = number1 * number2 ;
    div = number1/number2;
    mod = number1 % number2;

    cout<< "The Sum is : " << sum << endl ;  // The Sum is : 10
    cout<< "The Sub is : " << sub << endl;
    cout<< "The Mult is : " << mult << endl;
    cout<< "The Div is : " << div << endl;
    cout<< "The Mod is : " << mod;



return 0;
}
