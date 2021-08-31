#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[]={-2,12,45,-9,1,5,12,-2,-78,89};
    int b=sizeof(A)/sizeof(A[0]);

     for(int i=0;i<b;i++)
     {
         int e=A[i];
         int f=i;
         for(int d=i+1;d<b;d++)
         {
             if(A[d]<e)
             {
                 e=A[d];
                 f=d;
             }
         }
         swap(A[i],A[f]);
     }
     set<int>ss;
     cout<<"[";
     for(int i=0; i<b; i++)
     {
        int d,e,f;
        d=ss.size();
        e=A[i];
        ss.insert(e);
        f=ss.size();
        if(f>d)
        {
            cout<<A[i]<<",";
        }
     }
     cout<<"]";
     cout<<endl;
    return 0;
}
