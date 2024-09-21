#include<bits/stdc++.h>
using namespace std;
int main()
{

      vector<string>vs= {
        "auto", "break", "case", "char", "const", "continue", "default", "do", "double",
        "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register",
        "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef",
        "union", "unsigned", "void", "volatile", "while", "class", "private", "public",
        "protected", "virtual", "friend", "inline", "namespace", "template", "typename",
        "try", "catch", "throw", "new", "delete", "this", "using"
    };
      cout<<"Enter a word  : ";
      string s;
      cin>>s;
      int ok=0;
      if(find(vs.begin(),vs.end(),s)!=vs.end())
      {
           ok=1;
      }
      if((!(s[0]>='a'&&s[0]<='z'))&&(!(s[0]>='a'&&s[0]<='z'))&&(!(s[0]=='_')))
      {
          ok=1;
      }
      for(int i=1;i<s.size();i++)
      {
          if((!(isalnum(s[i])))&&(!(s[i]=='_')))
          {

               ok=1;
               break;
          }

      }
      if(ok)
      {

          cout<<"Not  identifier\n";
      }
      else
      {
          cout<<"identifier\n";
      }






    return 0;
}
