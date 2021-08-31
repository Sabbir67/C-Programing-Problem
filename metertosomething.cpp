#include <iostream>
using namespace std;

int main(){

    // Meter to Centimeter , 1m = 100Cm
    float meter ;
    int check;

    cout<< " Press 1 = Meter to Centimeter "<<endl;
    cout<< " Press 2 = Meter to Kilometer  "<<endl;
    cout<< " Press 3 = Meter to Milimetre  "<<endl;
    cout<< " Press 4 = Centimeter to Meter "<<endl;

    cin>>check;

    if(check == 1){
        cout<<"Please Input Meter : ";
        cin>> meter;
        cout<<"The Centimeter is : " << meter*100 <<" cm"<<endl;
    }
    else if( check == 2){
        cout<<"Please Input Meter : ";
        cin>> meter;
        cout<< "The Kilometer is : " << meter*0.001 <<" km";
    }
    else if(check == 3){
        cout<<"Please Input Meter : ";
        cin>> meter;
        cout<<"The Milimetre is : "<< meter*1000 <<" mm";
    }
    else if(check == 4){
        cout<<"Please Input Centimetre : ";
        cin>> meter;
        cout<<"The Meter is : "<< meter*0.01 <<" m";
    }















return 0;
}
