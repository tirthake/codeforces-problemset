#include<stdio.h>
int main()
{
    int a,b,year;
    scanf("%d%d",&a,&b);



    for( year=0; /* don t know*/ ; year++)
    {

        if(a>b)
            break;



        a=a*3;
        b=b*2;


        /*we can use another variable as i and set up year=i to continue*/
        //year=i;

    }


    printf("%d",year);
    printf("\n");



    return 0;
}
