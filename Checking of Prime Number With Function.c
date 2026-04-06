#include <stdio.h>
void prime(int n)
{
    int i, flag = 0;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag++;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Prime Number");
    }    
    else
    {
        printf("Not Prime Number");
    }    
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime(num);
    printf("\n     25331A05G9");
    return 0;
}
