#include<iostream>
#include <bits/stdc++.h> 
#include<string>
using namespace std;
int main()
{
  	string line;
  	getline(cin,line);
  	vector <string> tokens; 
    stringstream check1(line); 
    string intermediate; 
    while(getline(check1, intermediate, ' ')) 
    { 
        tokens.push_back(intermediate); 
    } 
    for(int i = 0; i < tokens.size(); i++) {
        if(tokens[i]!="the")
          cout<<tokens[i]<<" ";}
}
