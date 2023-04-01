#include<stdio.h>
struct player
{
     char name[20];
     int runs[20];
};
int main()
{
     int i,s=0;
     struct player a[11];
     printf("Enter Name of Player and Runs Scored \n");
     printf("---------------------------------------------\n\t");
     for(i=0;i<=10;i++)
     {
     	printf("name:");
          scanf("%s\t",&a[i].name);
          printf("runs:");
          scanf("%d",&a[i].runs);
           printf("\t");
     }
     for(i=0;i<=10;i++)
          s=s+a[i].runs;
     printf("\n---------------------------------------------\n");
     printf("Total Runs Scored by Team: %d",s);
     return 0;
}
