#include <stdio.h>
#include <unistd.h>
int main(){
    int hour1 , minute1,second1;
    int hour2 , minute2,second2;
    printf("time 1 :\n");
    printf("enter hours 1 (HH) :");
    scanf("%d",&hour1);
    printf("enter minute 1 (MM)) :");
    scanf("%d",&minute1);
    printf("enter second 1 (SS) :");
    scanf(" %d",&second1);

    
    printf("time 2 :\n");
    printf("\nenter hours 2 (HH) :");
    scanf("%d",&hour2);
    printf("enter minute 2 (MM)) :");
    scanf("%d",&minute2);
    printf("enter second 2 (SS) :");
    scanf("%d",&second2);
    
    
    if(hour1>hour2){
        printf("\n%d:%d:%d\n",hour1 , minute1,second1);
        printf("time 1 is bigger !!");
    }else if(hour1<hour2){
        printf("\n%d:%d:%d\n",hour2 , minute2,second2);
        printf("time 2 is bigger");
    }else if (hour1==hour2 && minute1>minute2)
    {
        printf("\n%d:%d:%d\n",hour1 , minute1,second1);
        printf("time 1 is bigger !!");
    }else if (hour1==hour2 && minute1<minute2)
    {
        printf("\n%d:%d:%d\n",hour2 , minute2,second2);
        printf("time 2 is bigger !!");
    }
    else if (hour1==hour2 && minute1==minute2 && second1 > second2)
    {
        printf("\n%d:%d:%d\n",hour1 , minute1,second1);
        printf("time 1 is bigger !!");
    }else if (hour1==hour2 && minute1>minute2 && second1 < second2)
    {
        printf("\n%d:%d:%d\n",hour2 , minute2,second2);
        printf("time 2 is bigger !!");
    }
}