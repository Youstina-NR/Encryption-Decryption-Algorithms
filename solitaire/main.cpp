#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int c[15]={1,5,14,6,7,9,15,10,3,2,4,8,11,12,13};
    int c2[15];
    int i,j1,j2;
    for( i=0;i<15;i++)
    {
        if(c[i]==14)
        {
           if(i<14)
           {
             c[i]=c[i+1];
             c[i+1]=14;
             j1=i+1;
             break;
           }
           else
           {
              for(int j=14;j>1;j--)
              {
                  c[j]=c[j-1];
              }
              c[1]=14;
              j1=1;
              break;
           }
        }

    }
    for( i=0;i<15;i++)
    {
        if(c[i]==15)
        {
           if(i<13)
           {
             c[i]=c[i+1];
             c[i+1]=c[i+2];
             c[i+2]=15;
             j2=i+2;
             if(j1==i+1|| j1==i+2)j1--;
             break;
           }
           else if(i==13)
           {
              for(int j=13;j>1;j--)
              {
                  c[j]=c[j-1];
              }
              c[1]=15;
              j2=1;
              if(j1<i)j1++;
              break;
           }
           else
           {
              for(int j=14;j>2;j--)
              {
                  c[j]=c[j-1];
              }
              c[2]=15;
              j2=2;
              if(j1<i)j1++;
              break;
           }
        }

    }
    i=0;
    for(int j=max(j1,j2)+1;j<15;j++)
    {
      c2[i++]=c[j];
    }
    for( int j=min(j1,j2);j<=max(j1,j2);j++)
    {
       c2[i++]=c[j];
    }
    for( int j=0;j<min(j1,j2);j++)
    {
       c2[i++]=c[j];
    }

    for(int j=0;j<15;j++)
      cout<<c[j]<<" ";
    cout<<endl;

    for(int j=0;j<15;j++)
      cout<<c2[j]<<" ";
    cout<<endl;

    return 0;
}
