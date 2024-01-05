#include<stdio.h>
void main()
{
    int N,Sum=0,Product=1;
    printf("Enter a positive number = ");
    scanf("%d",&N);
    int Default=N;
    int A;
    while(N!=0)
    {
        A=N%10;
        Sum+=A;
        Product*=A;
        N/=10;
    }
    if(Default%Sum==0||Default%Product==0)
    {
        printf("Hit");
    }
    else
    printf("Miss");
}
