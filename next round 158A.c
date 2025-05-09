#include <stdio.h>



int main(){
int n,k,next=0;//6 3
scanf("%d",&n);
scanf("%d",&k);


int scores[n];
for(int i=0;i<n;i++){
scanf("%d",&scores[i]);//10 9 8 7 0 0

}

 int kthscore=scores[k-1];//3-1= index[2]=8



for(int i=0;i<n;i++)
{
    if(scores[i]>=kthscore&&scores[i]>0)//compare with kth score not kth place
        next++;
}
printf("%d",next);







return 0;
}
