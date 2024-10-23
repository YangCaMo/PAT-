#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int a[100];
const int N=1e4;
vector<int> ans;
//bool b[101];//不满足bool的才打出
bool b[N];
int main()
{
    int n;
    cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       int x=a[i];
       while(x!=1)
       {
           if(x&1)
               x=x*3+1,x/=2;
           else x/=2;
           b[x]=true;
       }
      //(!b[a[i]]) ans.push_back(a[i]);
   }//if (!b[a[i]]) ans.push_back(a[i]); 
    //不能放在第一个 for 循环内，因为在这个循环中，正在修改数组 b，
    //且 b 的状态在每次迭代中可能会改变。具体来说，b[x] 在循环中被设置为 true，
    //这意味着在同一轮循环中检查 b[a[i]] 时，可能会得到错误的结果。
     for(int i=0;i<n;i++) if(!b[a[i]]) ans.push_back(a[i]);
     sort(ans.begin(),ans.end());
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i];
        if(i) cout<<" ";
    }
    return 0;
}
