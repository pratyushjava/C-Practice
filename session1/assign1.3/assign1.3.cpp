#include<stdio.h>
#include<conio.h>
#include"add.c"
#include"sub.c" 
#include"mul.c"
#include"div.c"
#include"fndec.h"
int main()
{   
    int a,b,opt,t;
    char o='y';
   // while(o =='y')
    //{
    printf(" enter the numbers");
    scanf("%d%d",&a,&b);
    printf("select the operation:\n 1. add\n 2. subtract\n 3. multiply \n 4. divide");
    scanf("%d",&opt);
    switch(opt)
    {
               case 1: printf("sum is:");
                     t=add(a,b);
                    printf("%d",t);
                       break;
               case 2: printf("difference is:%d",sub(a,b));
                       break;
               case 3: printf("product is:%d",mul(a,b));
                       break;
               case 4: printf("quotient is:%d",div(a,b));
                       break;
               //default: printf("u hav entered a wrong choice ");
    }
      //                 printf("do u want 2 continue");
        //               scanf("%c",o);
          //             }
    getch();
    return 0;
}
                       
                      
 
