#include<stdio.h>
#include<string.h>

int main()




{
char colourStone[50];
int n;
scanf("%d",&n);
scanf("%s",&colourStone);

//find duplicate and count

 int taketo=0;
 for(int i=1;i<n;i++){
 if(colourStone[i]==colourStone[i-1])
//how if works: just compare [i]th stone with [i]-1 stone , if find match count 1 that inrease remove ++
    {
    taketo++;}
 }
printf("%d\n",taketo);//print duplicate number


return 0;

}
