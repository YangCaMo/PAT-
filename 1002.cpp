#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int sum;
vector<string> ve;
string a[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{
    string s;
    cin>>s;
    for(size_t i=0;i<s.size();i++)
    sum+=s[i]-'0';
    while(sum)
    {
        ve.push_back(a[sum%10]);
        sum/=10;
    }
    for(int i=ve.size()-1;i>0;i--)
    {
        cout<<ve[i]<<" ";
    }
    cout<<ve[0];
    return 0;
}
