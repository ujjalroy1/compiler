#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{

      string s;
      cin>>s;
      int sigleComment=0;
      int mulComment1=0;
      int mulComment2=0;
      for(int i=0;i<s.size()-1;i++)
      {

          if(s[i]=='/'&&s[i+1]=='/')
          {
              sigleComment=1;
               break;
          }
          if(s[i]=='/'&&s[i+1]=='*')
          {
              mulComment1=1;
              i++;

          }
           if(s[i]=='*'&&s[i+1]=='/')
          {
              mulComment2=1;

          }

      }
      if(sigleComment||(mulComment1&&mulComment2))
      {

            cout<<"This line is comment\n";
      }
      else

      {

          cout<<"This line is not comment\n";
      }


    return 0;
}
