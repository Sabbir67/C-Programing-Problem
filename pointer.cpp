#include <iostream>
using namespace std;

int main(){

int a = 23;

int *p ;

p = &a;



cout<<"Value of p : " << p << endl;   // address  of a

cout<<"Value of $a : " << &a << endl; // address of a
cout<<"Value of *p " << *p << endl; // value of a

*p = 56 ;
cout<<"Value of a " << a << endl;



int arr[5];

arr[0] = 1;
cout<<endl <<"Array is : "<<arr[0];


return 0;
}
