#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string c="YWOHAARNWENOLARLBRAFOGEFSTNRIKTDOANWTNSDVRIEENESWAIISYUORNNBGUD";
    int p1[]={9,4,3,1,6,8,2,5,7};
    int p2[]={7,3,2,5,6,1,4};
    int n=7,m=9,k=0,r;
    char c1[n][m],plain[n][m];
    string p="";
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
           c1[i][j]=c[k++];
       }
    }
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
          cout<<c1[i][j]<<" ";
    }cout<<endl;}

    for(int i=0;i<n;i++)
    {
        r=p2[i]-1;
       for(int j=0;j<m;j++)
       {
          plain[r][p1[j]-1]=c1[i][j];
       }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
          cout<<plain[i][j]<<" ";
          p+=plain[i][j]+32;
    }
       cout<<endl;
    }
    cout<<endl<<p<<endl;




    return 0;
}
