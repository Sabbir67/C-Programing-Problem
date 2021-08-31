#include<iostream>
using namespace std;

int main(){
    // n = 6
    // 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/n =

    float n ;
    float sum = 0;
    cout<<"Please Input a Number : ";
    cin>> n;

    for(float i = 1;  i <= n; i++){
        sum = sum + 1/i;

        if(i == 1){
            cout<<i<<" + ";
        }
        else if(i == n ){
           cout<<"1/"<<i<<" = ";
        }else{
            cout<<"1/"<<i<<" + ";
        }
    }

    cout << sum;




return 0;
}
