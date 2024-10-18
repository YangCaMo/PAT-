#include <stdio.h>
int main(){
int n;
int time=0;
scanf("%d",&n);
while(n>1)
{
    if(n==1) break;
    else if(n%2==0)
    {
        n=n/2;
    }
    else
    {
        n=(3*n+1)/2;
    }
time++;
}
printf("%d",time);
return 0;
}
