#include<stdio.h>
int main()
{
    int customid,unit;
    float bill,exCharge;
    char nm[10];
    const float surcharge=0.18;

    printf("Enter Customer id(e.g.:5465) : ");
    scanf("%d",&customid);
    printf("Enter customer name : ");
    scanf("%s",&nm);
    printf("Enter unit consumed : ");
    scanf("%d",&unit);

// Unit  Charge/unit  
// upto 350 ||  @1.20  
// 350 and above but less than 600  || @1.50  
// 600 and above but less than 800  || @1.80  
// 800 and above  ||  @2.00  

    if(unit<350)
    {
        bill=unit*1.20;
        printf("\nCharge/UNIT : 1.20");
        //printf("bill is %.2f",bill);
    }
    else if (unit>=350&&unit<600)
    {
        printf("\nCharge/UNIT : 1.50");
        bill=unit*1.50;
    }
    else if (unit>=600&&unit<800)
    {
        bill=unit*1.80;
        printf("\nCharge/UNIT : 1.80");
    }
    else
    {
        bill=unit*2.00;
        printf("\nCharge/UNIT : 2.00");
    }

    if(bill<256)
    {        printf("\nYour bill amount is bellow limit(256/-), we will generate minimum bill amount of RS.  256/-.");
            bill=256;
    }

    if(bill>800)
    {
        printf("\nyour bill amount exceeded RS. 800/-, you will be charged 18%% surcharge.");
        exCharge=bill*surcharge;
        bill+=exCharge;
    }

    printf("\nCustomer ID : %d",customid);
    printf("\nCustomer Name : %s",nm);
    printf("\nUnit Consumed : %d",unit);
   
    printf("\nBILL AMOUNT : %.2f/-",bill);

return 0;
}
