#include <iostream>
#include <string>
using namespace std;

string encrypt(string p);
string decrypt(string c);
void create(string p, string k);
char s[5][5];
string t;
int main()
{
    string p,k,c;
    cin>>p>>k;
    create(p,k);
    for(int i=0;i<5;i++)
    {
       for(int j=0;j<5;j++)
         { cout<<s[i][j]<<" ";}
          cout<<endl;
    }

    c=encrypt(p);
    cout<<endl<<c<<endl;
    cout<<endl<<decrypt(c)<<endl;
    return 0;
}

void create(string p, string k)
{
    t="";
    string str="abcdefghijklmnopqrstuvwxyz";
    //size_t pos;
    char c;
    int n=0,m=0,i=0,j=0;

         while(i<5)
         {
          if(n<(int)k.length())
          {
             if(t.find(k[n])== string::npos)
             {
                c=k.at(n);
                s[i][j]=c;
                t+=c;
                n++;
                j++;
                if(j==5)
                {
                  i++;
                  j=0;
                }
             }
             else
             {
                n++;
             }
          }
          else
          {
             if(t.find(str[m])== string::npos)
             {
                s[i][j]=str[m];
                t+=str[m];
                m++;
                j++;
                if(j==5)
                {
                  i++;
                  j=0;
                }
             }
             else
             {
                  m++;
             }
          }
          }
}

string encrypt(string p)
{
    string c="";
    if(p.length()&1)p+="x";
    int n=0,p1i,p1j,p2i,p2j;
    char ch;
    while(n<(int)p.length())
    {
       int pos=(int)t.find(p[n]);
       p1i=pos/5;
       p1j=pos%5;
       n++;
       pos=(int)t.find(p[n]);
       p2i=pos/5;
       p2j=pos%5;
       n++;
       if(p1i==p2i)
       {
          p1j++;
          p2j++;
          p1j%=5;
          p2j%=5;
       }
       else if(p1j==p2j)
       {
          p1i++;
          p2i++;
          p1i%=5;
          p2i%=5;
       }
       else
       {
          swap(p1j,p2j);
       }

       ch=s[p1i][p1j];
       c+=ch;
       ch=s[p2i][p2j];
       c+=ch;
    }

    return c;
}

string decrypt(string c)
{
    string p="";
    int n=0,p1i,p1j,p2i,p2j;
    char ch;
    while(n<(int)c.length())
    {
       int pos=(int)t.find(c[n]);
       p1i=pos/5;
       p1j=pos%5;
       n++;
       pos=(int)t.find(c[n]);
       p2i=pos/5;
       p2j=pos%5;
       n++;
       if(p1i==p2i)
       {
          p1j--;
          p2j--;
          p1j%=5;
          p2j%=5;
       }
       else if(p1j==p2j)
       {
          p1i--;
          p2i--;
          p1i%=5;
          p2i%=5;
       }
       else
       {
          swap(p1j,p2j);
       }

       ch=s[p1i][p1j];
       p+=ch;
       ch=s[p2i][p2j];
       p+=ch;
    }
    return p;
}
