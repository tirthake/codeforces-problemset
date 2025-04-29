#include<stdio.h>

int main()
{
    int n,a,b,c,sure=0;
    scanf("%d",&n);






    for(int i=0; i<n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(a+b+c>=2)
        {
            sure++;
        }

    }




    printf("%d\n",sure);



    return 0;

}
