#include <iostream>

using namespace std;

int main()
{
    //incryption:
    string p,c;
    p="perfect";
    char key='k',ch;
    c="";
    for(int i=0;i<(int)p.length();i++)
    {
       ch=p[i]-97+key-97;
       if(ch>25)
         ch-=26;
       ch+=65;
       c+=ch;
    }
    cout<<c<<endl;

    //decryption:
    c="AXBXI";
    p="";
    key='p';
    for(int i=0;i<(int)c.length();i++)
    {
       ch=c[i]-65-key+97;
       if(ch<0)
         ch+=26;
       ch+=97;
       p+=ch;
    }
    cout<<p<<endl;

    return 0;
}
