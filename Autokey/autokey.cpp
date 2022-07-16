#include <iostream>

using namespace std;
string encrypt(string s,string key);
string decrypt(string s,string key);

int main()
{
    string s1,s2,s3,k;
    cin>>s1>>k;
    s2=encrypt(s1,k);
    cout<<s2<<endl;
    cin>>s3>>k;
    cout<<decrypt(s3,k)<<endl;
    return 0;
}
string encrypt(string s,string key)
{
   string s2="";
   char c;
   int i,m;
   for(i=0;i<(int)key.length();i++)
   {
       c=s[i]-97+key[i]-97;
       if(c>25)
           c-=26;
       c+=65;
       s2+=c;
   }
   m=0;
   for(int j=i;j<(int)s.length();j++)
   {
       c=s[j]-97+s[m]-97;
       if(c>25)
           c-=26;
       c+=65;
       s2+=c;
       m++;
   }
   return s2;
}
string decrypt(string s,string key)
{
   string s2="";
   char c;
   int i,m;
   for(i=0;i<(int)key.length();i++)
   {
       c=s[i]-65-key[i]+97;
       if(c<0)
           c+=26;
       c+=97;
       s2+=c;
   }
   m=0;
   for(int j=i;j<(int)s.length();j++)
   {
       c=s[j]-65-s2[m]+97;
       if(c<0)
           c+=26;

       c+=97;
       s2+=c;
       m++;

   }
   return s2;
}
