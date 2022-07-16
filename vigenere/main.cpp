#include <iostream>

using namespace std;

int main()
{
    //incryption:
    string p,c,key;
    char ch;
    int j=0,n;
    p="understand";
    key="run";
    c="";
    n=key.length();
    for(int i=0;i<(int)p.length();i++)
    {
       ch=p[i]-97+key[j]-97;
       if(ch>25)
         ch-=26;
       ch+=65;
       c+=ch;
       j++;
       j%=n;
    }
    cout<<c<<endl;

    //decryption:
    c="IWGRHQYLP";
    p="";
    key="wise";
    j=0;
    n=key.length();;
    for(int i=0;i<(int)c.length();i++)
    {
       ch=c[i]-65-key[j]+97;
       if(ch<0)
         ch+=26;
       ch+=97;
       p+=ch;
       j++;
       j%=n;
    }
    cout<<p<<endl;
    return 0;
}
