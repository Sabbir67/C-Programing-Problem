#include<iostream>
using namespace std;

int main (){
     // break


     for( int i = 1; i <= 100; i++){

        if( i%5 == 0 ){
            cout<<"This is divisible by 5 "<<endl;
            continue;
        }
        cout<<i<<endl;
     }



return 0;
}
