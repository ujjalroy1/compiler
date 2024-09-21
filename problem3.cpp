#include<bits/stdc++.h>
#include<fstream>
#include<iostream>
using namespace std;
int main()
{

  int numOfDelete=0;
  ifstream inn;
  inn.open("input.txt");
  string ans="";
  int multiLineComment=0;
  string in;
  while(getline(inn,in))
  {

             int singleLineComment=0;
           for(int i=0;i<in.size()-1;i++)
           {
               if(in[i]=='/'&&in[i+1]=='/')
               {
                    numOfDelete++;
                   singleLineComment=1;
                   break;

               }
               if(in[i]=='/'&&in[i+1]=='*')
               {
                    numOfDelete++;
                   multiLineComment=1;
                   break;

               }
               if(multiLineComment==0)
               ans+=in[i];

           }
           if(multiLineComment==0&&singleLineComment==0)
           {

               ans+=in[in.size()-1];
               ans+='\n';
           }
          for(int i=0;i<in.size()-1;i++)
           {

               if(in[i]=='*'&&in[i+1]=='/')
               {
                    multiLineComment=0;
                    i++;

               }
           }


  }

    inn.close();
    ofstream out;
    out.open("output.txt");
    out<<ans<<endl;
    out.close();


   cout<<"Number of deletion is : "<<numOfDelete<<endl;

}
