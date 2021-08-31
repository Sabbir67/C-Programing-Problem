#include <iostream>
using namespace std;

int main()
{
    int num , rev;

    // User Input
    cout<<"Please input a number ";
    cin>>num; // num = 1234

    // Find reverse Loop
    for(rev = 0 ; num > 0 ; num = num/10 ){
        rev = rev*10; // 0 ,40, 430 ,4320
        rev = rev + num%10; // 4 ,43 , 432 ,4321
    } // num = 123 , 12,1 ,

    cout<<"Reverse Number is : "<<rev;



return 0;
}
