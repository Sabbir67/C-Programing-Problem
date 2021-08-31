#include<iostream>
using namespace std;

int main(){
    // 2 4 6 8 10  Even
    // 1 3 5 7 9

    int i = 0 ;
    int number;
    cout<<"Please Input a Number ";
    cin>> number;

    while( i <= number ){
        if( i % 2 == 0 ){
            cout << i << " is Even "<<endl;
        }

        i++;
    }



return 0;
}
