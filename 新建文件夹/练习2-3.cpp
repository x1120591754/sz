#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
string a = {"hello,world!!!  fesfhhilj"};
if(a.empty());
for (auto it = a.begin();it != a.end() && !isspace(*it) && !a.empty();++it)
{
  (*it)= toupper(*it);
}
  cout<<a<<endl;
}
