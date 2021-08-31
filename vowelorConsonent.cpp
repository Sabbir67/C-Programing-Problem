#include <iostream>
using namespace std;

int main(){
     // Vowel =  a A e E i I  o O u U
     // User Input
     char ch;
     cout<<"Please Input an Alphabet : ";
     cin>>ch;
     // Condition Check
     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'  ){
        cout<<ch<<" is a lowercase Vowel";
     }
     else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        cout<<ch<<" is a uppercase Vowel";
     }
     else{
        cout<<ch<<" is a Consonant";
     }








return 0;
}
