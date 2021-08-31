#include <iostream>
using namespace std;

int main(){
    int userInput;
    cout<<"Please , Input Your Expected Value ";
    cin>>userInput;

    for(int i = 1; i<= 20; i++){
        cout<< userInput <<" X "<<i << " = " << userInput*i<<endl;
    }


return 0;
}

