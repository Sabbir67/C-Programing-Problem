#include <iostream>
using namespace std;

int main(){

    // A a b T U

    char ch;

    cout<<"Please input a Character : ";
    cin>>ch;

    // Condition

    if((ch >= 'a' && ch <= 'z')||(ch >='A' && ch <= 'Z')){
        cout<<"This is a Alphabet";
    }
    else{
        cout<<"This is not a Alphabet";
    }


return 0;
}

