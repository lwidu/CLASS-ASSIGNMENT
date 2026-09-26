#include <stdio.h>
#include <stdlib.h>

int main()
{
    //self check chapter 3.6 if....else... statements C how to program.

    printf("This program shows whether a student's paid fee qualifies them to sit for exams. \n ");
    char name[30];
    float fees=3400000,fees_paid,balance;

    printf("Enter student name:");
    scanf(" %s",&name);
    printf("Enter fees paid:");
    scanf("%f",&fees_paid);

    if(fees==fees_paid){
        printf("%s qualifies to sit for papers. \n",name);
    }else if(fees_paid>=2000000){
    balance = fees - fees_paid;
    printf("Balance: %.2f \n",balance);
    printf("%s qualifies to sit for papers but doesn't receive results. \n",name);
    }else{
    printf("%s doesn't qualify to sit for papers. \n",name);

    }




    return 0;
}
