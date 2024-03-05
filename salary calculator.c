#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
    int cashier_num, weeks, i, j, sales, x=0;

    float salary, tot_salary=0, tot_tot_salary=0;

    srand(time(NULL));

    printf("Supermarket Simulator\n");
    printf("Enter the simulation data\n");
    do
    {
        printf("\nHow many cashiers do you have?:");
        scanf("%d", &cashier_num);

        if(cashier_num<0)
            printf("Sorry, your number of cashiers has to be larger than 0!");
    }
    while(cashier_num<0);

    do
    {
        printf("\nHow many weeks in a month you have?:");
        scanf("%d", &weeks);

        if(weeks<4 || weeks>6)
        {
            printf("\nSorry, your number of weeks has to be between 4-6!");
        }

    }
    while(weeks<4 || weeks>6);

    for(i=1;i<=cashier_num; i++)
    {
        for(j=1;j<=weeks; j++)
        {

            sales = 1000 + rand() % 6000;
            salary = 2000 + (sales*0.1);
            tot_salary = tot_salary + salary;
            printf("\nCashier %d sales in week %d: %d", i, j, sales);
            printf("\nWeek %d salary: %.0f", j, salary);
        }

        printf("\nTotal salary of cashier %d is: %.0f", cashier_num, tot_salary);
        
        tot_tot_salary= tot_tot_salary + tot_salary;
        tot_salary=0;

        printf("\n");
    }
    printf("\nTotal salary to be paid: %.1f TL", tot_tot_salary);
    return 0;
}
