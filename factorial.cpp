#include<iostream>
using namespace std;

int main(){

    // 5!
    // 1*2*3*4*5 = 120
    // 0! = 1
    // 1! = 1

    int n , f=1 , i = 1;

    cout<<"Please Input a Number : ";
    cin>> n; //5

    while(i <= n){ // i = 1 , 2 , 3 , 4, 5
        f = f*i ; //  f=  1 , 2 , 6 , 24 ,  120
        i++;
    }

    cout<< "Factorial value is : "<< f;











return 0;
}
