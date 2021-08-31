#include <iostream>
using namespace std;

int main(){
    int userInput;
    cout<<"Please input a Number : ";
    cin>>userInput;

    for(int i = 1; i <= userInput; i++ ){

        if(i % 7 == 0){
            cout<<"7 The Number is : "<<i<<endl;
        }



    }


return 0;
}

