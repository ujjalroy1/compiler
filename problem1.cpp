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
    int lineNum=1;
    string s;
    while (getline(in,s))
    {
        cout<<lineNum<<". "<<lineNum<<" "<<s<<endl;
        lineNum++;
    }





    in.close();



    return 0;
}
