#include <stdio.h>

int main() {
   
    int n;
    int result=0;

    printf("Enter number of series : ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
            
        if (i%2==0)
        {
            result=2*(i-1);
        }
        else
        {
            result=1.5*(i-1);
        }
        
    }
            printf("%d ",result);
    
    return 0;
}
