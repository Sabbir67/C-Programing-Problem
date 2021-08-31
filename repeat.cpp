#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,e,f,g,tc;
    int r[130];
    vector<int>v;
    string t;
    while(cin>>t){
        for(int i=65;i<=122;i++){
            r[i]=0;
        }
        set<int>s;

        for(int i=0;i<t.size();i++){
            b=t[i];
            c=s.size();
            s.insert(b);
            d=s.size();
            if(d>c){
                v.push_back(b);
            }
            r[b]++;
        }

        for(c=0;c<v.size();c++){
            char cc=(char)v[c];
            cout<<cc;
            cout<<r[v[c]];
        }
        cout<<endl;
        s.clear();
        v.clear();

    }
    return 0;
}
