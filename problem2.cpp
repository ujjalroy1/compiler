
#include<bits/stdc++.h>
#include<fstream>
#include<iostream>
using namespace std;
int main()
{

    ifstream in;
    in.open("input.txt");
    if(!in.is_open())
    {
        cout<<"Error file\n";
        return 0;
    }
    int lineNum=0;
    string s;
    while (getline(in,s))
    {

        lineNum++;
    }





    in.close();
  cout<<"Total number of line is : "<<lineNum<<endl;


    return 0;
}
