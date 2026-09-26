#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n==============================================================\n ");
    printf("                UCU ONLINE SUPERMARKET                       \n   ");
    printf("==================================================================\n");

    int menu_code,quantity,budget;
    float discount,balance,price,sub_total;
    char more_selections;


    printf("THE MENU \n");

    printf("1.Box of water-25000 \n");
    printf("2.Jesa box-90000 \n");
    printf("3.Toilet papers-500 \n");
    printf("4.vaseline-3500 \n");
    printf("5.Bathing soap-1500 \n");
    printf("6.Bar of washing soap-6000 \n");
    printf("7.Noodles box-50000 \n");
    printf("8.spalsh-105000 \n");
    printf("9.shoepolish-2000 \n");
    printf("10.Bread-1500 \n");

    printf("\n\n-------------------------------------------------------------------\n");


        printf("Enter budget:");
        scanf("%d",&budget);

    do {
        printf("Enter Menu Code:");
        scanf("%d",&menu_code);

        printf("Enter quantity:");
        scanf("%d",&quantity);

        switch(menu_code){
    case 1:
        price=250000;
        break;
    case 2:
        price=90000;
        break;
    case 3:
        price=500;
        break;
    case 4:
        price=3500;
        break;
    case 5:
        price=1500;
        break;
    case 6:
        price=6000;
        break;
    case 7:
        price=50000;
        break;
    case 8:
        price=105000;
    case 9:
        price=2000;
        break;
    case 10:
        price=1500;

    default:
        printf("invalid");
        }
        sub_total += quantity * price;

        printf("Enter more selections? (y/n):");
        scanf(" %c",&more_selections);
        }while(more_selections == 'y'|| more_selections =='Y');

        printf("Sub total: %.2f \n",sub_total);

        balance= budget - sub_total;
        printf("Balance: %.2f \n",balance);
        if(sub_total>=200000){
            discount= sub_total*0.05;
            printf("Discount: %.2f \n",discount);
        }
        balance-=discount;
        printf("Balance: %.2f \n",balance);

        printf("###THANKS FOR SHOPPING WITH US#####");




return 0;
}

