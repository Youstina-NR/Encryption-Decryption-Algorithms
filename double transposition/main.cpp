#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
   //encryption

    string s="it is true that we dont know what we have got until we lose it";

    string s2="";
    int n=8,m=6;
    int p1[]={2,6,3,7,8,1,5,4};
    int p2[]={3,4,2,1,6,5};
    char plain[n][m],c1[n][m],c2[n][m];

    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        if(s[k]==' ')
          k++;
        plain[i][j]=s[k++];
        }
    }

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
          c1[i][j]=plain[p1[i]-1][j];
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
           c2[j][i]=c1[j][p2[i]-1];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cout<<c2[i][j]<<" ";
           s2+=(c2[i][j]-32);
        }
          cout<<endl;
    }

     cout<<endl<<s2<<endl;

    return 0;
}
