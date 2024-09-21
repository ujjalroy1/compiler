#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{

      string s;
      string ans="";
      ifstream in;
      int numOfDelete=0;
      in.open("input.txt");
      while(getline(in,s))
      {
           for(int i=0;i<s.size();i++)
           {
               if(s[i]=='\t'||s[i]==' '||s[i]=='\n')
               {
                   numOfDelete++;
               }
               else
               {
                   ans+=s[i];

               }
           }

      }
   in.close();
   cout<<"Number of delete  :"<<numOfDelete<<endl;

    ofstream out;
    out.open("output.txt");
    out<<ans<<endl;
    out.close();

    return 0;
}
