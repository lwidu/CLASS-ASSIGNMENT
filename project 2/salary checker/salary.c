#include <stdio.h>
#include <stdlib.h>

int main()
{
   //salary checker chapter 4.28
   printf("This program shows an individual's salary after achieving some goals. \n");

   int pay_code ;
   float salary,commission=0.05,total_salary,rate=4000,extra_hours,min_hours_worked=40,hours_worked;

   printf("1.Managers-15000000 \n");
   printf("2.Hourly workers-800000 \n");
   printf("3.full time workers-2500000 \n");
   printf("4.cleaning stuff-200000 \n");


   printf("\nEnter pay code:");
   scanf("%d",&pay_code);

   printf("\nEnter Hours worked:");
   scanf("%f",&hours_worked);

   extra_hours= hours_worked-min_hours_worked;


   switch(pay_code){
   case 1:
       salary=15000000;
       break;
   case 2:
    salary=800000;
       break;
   case 3:
    salary=2500000;
    break;
   case 4:
    salary=200000;
    break;
    default:
    printf("invalid input");
   }

   total_salary=salary;
   printf("%f \n",total_salary);

   if(hours_worked>=40){
    total_salary = salary + (rate * extra_hours ) + commission;
    printf("Total salary: %f \n",total_salary);
   }





    return 0;
}
