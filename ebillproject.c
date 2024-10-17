#include <stdio.h>
#include<math.h>
#include<string.h>
int main()

{
    char another,a[20],str[25],s[10];
    int choice;
    int   N,O,percentagechange;

    printf("\n\n\t\t\t         -------------   WELCOME TO  ------------------\n");
    printf("\n\t\t\t\t ------- ELECTRICITY  BILL  CALCULATOR ---------\n");
    printf("\t\t---------------------------------------------------------------------------\n\n");
    printf(" CHOOSE YOUR CHOICE ");
    printf("\n----------------------\n");
    printf(" \n\t Press 1 for Bill Calculation :   :\n");
    printf("\n\t Press 2 To Know Percentage Change in Your last and Current  Bill :   \n");
    printf("\n\tPLEASE  ENTER   1 OR  2  TO PROCEED : ");

    scanf("%d",&choice);
   // printf("\n\n\tEnter CUSTOMER ID :  ");
    //scanf("%s",a);

    switch (choice)
    {

    case 1:
    {

        do
        {
            float Units ;
            float  Amount, Totalamount;
            printf("\n          ====================ELECTRICITY BOARD RATE CHART====================================\n");
            printf("\n\tElectricity board charges the following rate to their domestic Users for tbe consumption of Electricity-->\n");
            printf("\n 0 unit to 50 units =----------------------------------Rs 2.5 per Unit");
            printf("\n51 unit to 100 units = --------------------------------Rs 3.5 per Unit");
            printf("\n101 unit to 200 units =--------------------------------Rs 4.5 per Unit");
            printf("\n201 unit to 300 units =--------------------------------Rs 5.5 per Unit");
            printf("\n More than 300 Units = --------------------------------Rs 7.5 per Unit");
            


             printf("\n\n\tEnter Customer ID :  ");
             scanf("%s",a);
             printf("\n");
             printf("\t   Customer Name :  ");
             scanf("%s",str);
             printf("\n");
             printf("\t   Bill Month :   ");
            scanf("%s",s);
             printf("\n\t Enter Units :  ");
             scanf("%f",&Units);
            printf("----------------------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t Customer ID:                                                      %s\n",a);
            printf("\n\t\t\t customer Name:                                                    %s\n",str);
            printf("\n\t\t\t Bill Month:                                                       %s\n",s);
            printf("\n\t\t\tUnits Consumed:                                                    %f",Units);

            if (Units <= 50 && Units >=0)

            {

                Amount = Units * 2.50;
            }

            else if (Units <= 100 && Units>=51)

            {

                Amount = 50 * 2.5+((Units-50)*3.5);
            }

            else if (Units <= 200 && Units >=101)

            {

                Amount = 50*2.5 + 50 *3.5 +((Units-100)*4.5) ;//+( (Units-100)*4.5);
            }
            else if (Units<=300 && Units >=201) 
            {
                Amount =50*2.5 + 50*3.5 + 100*4.5 +(( Units-200) * 5.5);
            }
            else 
            {
                Amount = Units *7.5;
            }
                Totalamount = Amount;

                printf("\n\n\t\t\tElectricity Bill:                                                  %2.05f", Totalamount);
                if (Units >=150)
                printf("\n\n\t \t\t    <  WARNING ! You are beyond the normal uses of Electricity.... > \n\n\t \t\t\t          (please Save electricity :)  ");
                printf("\n ");
                printf("---------------------------------------------------------------------------------------------------------------------");

                printf("\n\n\t Want To Get Another Bill press 'y' for YES OR 'n' for NO :  ");

                fflush(stdin);

                scanf("%c",&another);
                if (another == 'y'){
                    printf(" \n\t Press 1 for Bill Calculation :   :\n");
                    printf("\n\t Press 2 to know percentage change in Your last and current  bill :   \n");
                    printf("\n\tPLEASE  ENTER   1 OR  2  TO PROCEED : ");
                    scanf("%d",&choice);
                }
         }
        
            while (another == 'y');

            break;
    }
    case 2:

    do
        {
            printf(" your last month cosumption of electricity:\n");

            scanf("%d", &O);

            printf(" your current consumption of electricity:\n");

            scanf("%d", &N);

            printf("percentagechange is :%d\n", percentagechange = (O - N) * 100 / O);

            printf(" if YOu want to check again press 'y/n :     ");

            fflush(stdin);

            scanf("%c", &another);
         }
         while (another == 'y');
        
         break;
    }
        printf("\t-------------------------------------------\t");
        printf(" \n\t***THANK YOU FOR USING IT**\n");

        printf("\n\t****program is created by************\n\n");

        printf(" \t\tRISHAV SYAL\n\n");

        printf("\t\tSATYAM KUMAR RAI\n\n");

        printf("\t\tVIVEK KUMAR JHA\n\n");

        return 0 ;
}