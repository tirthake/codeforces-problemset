#include<stdio.h>
int main()
{

   int t;
   scanf("%d",&t);

   while(t--){
     int a,b,c;
    //printf("enter numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b+c||b==a+c||c==a+b)
    {
        printf("YES\n");

    }
    else
        printf("NO\n");
   }
    return 0;
}
