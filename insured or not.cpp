#include<stdio.h>
int main()
{ int age ;
 char ms,sex,y,n,m,f;
 printf("your ms (y or n) =");
 scanf("%c",&ms);
 printf("enter your age =");
 scanf("%d",&age);
 printf("enter your gender (m or f)=");
 scanf("\n %c",&sex);
 if (ms=='y')
 printf("you are  insured");
 else
 { if ((ms=='n')&&(age>30)&&(sex=='m'))
 printf("you are insured");
 else
 {if ((ms=='n')&&(age>25)&&(sex=='f'))
 printf("you are in sured");
 else printf("you are not insured");
 }
 }
}
