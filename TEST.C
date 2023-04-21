#include <stdio.h>
int main() 
{
 char name[25];
 int d,m,y,rno, c[5],t=0;
 scanf("%s %d %d %d %d",&name,&d,&m,&y,&rno);
 for(int x=0;x<5;x++)
 {scanf("%d",&c[x]);
     if(c[x]<50)
         t=1;
 }
 printf("\nNAME OF CANDIDATE  :%s\nROLL NUMBER        :%d\nDATE OF BIRTH      :%d.%d.%d",name,rno,d,m,y);
 printf("\n**********************");
 printf("\nSUBJECT NAME     MARKS OBTAINED     MAX MARKS   SUB STATUS");
 printf("\n**********************\n");
    for(int x=0;x<5;x++)
    {
        printf("     S%d                %d             100          ",x+1,c[x]);
        if(c[x]>50)
        printf("PASS\n");
        else
        printf("FAIL\n");
    }
printf("**********************\n");
if(t!=0)
printf("                       RESULT: FAIL");
else
printf("                       RESULT: PASS");
printf("\n**********************");

    return 0;
}
