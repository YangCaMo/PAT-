#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string name1,no1;
string name2,no2;
int score1=999;
int score2=-1;
int main()
{
    int n;  
    cin>>n;
    string name,no;
    int score;
    while(n--)
    {
        cin>>name>>no>>score;
        if(score<score1) name1=name,no1=no,score1=score;
        if(score>score2) name2=name,no2=no,score2=score;
    }
    cout<<name2<<" "<<no2<<endl;
    cout<<name1<<" "<<no1<<endl;
    return 0;
}
