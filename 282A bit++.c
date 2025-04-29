#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);


    char operation[4];


    for (int i=0;i<n;i++)
    {
        scanf("%s",operation);

        if(strchr(operation,'+'))
        {
            x++;
        }else{x--;}



    }

    printf("%d\n",x);
    return 0;
}
