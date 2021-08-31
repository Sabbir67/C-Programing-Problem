#include <iostream>
using namespace std;

int main(){
    // 122 15 20
    int a , b , c ;

    cout<<"First Number : ";
    cin>>a;
    cout<<"Second Number : ";
    cin>>b;
    cout<<"Third Number : ";
    cin>>c;

    if(a < b){
        if(a < c){
            cout<<" a is smaller";
        }else{
            cout<<" c is smaller";
        }
    }else{

        if(b < c){
            cout<<"b is smaller";
        }else{
            cout<<"c is smaller";
        }
    }




return 0;
}
