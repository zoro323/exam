#include<stdio.h>

int power(int a, int b, int n)
{
    long long int x = 1, y = a;
    while (b > 0)
    {
        if (b % 2 == 1)
            x = (x * y) % n;
        y = (y * y) % n;
        b = b / 2;
    }
    return x % n;
}

int main(){
    int q,alpha,x1,x2,y1,y2;
    printf("Enter the values of q and alpha:\n");
    scanf("%d %d",&q,&alpha);    
    printf("Enter the value of x1 for first person:\n");
    scanf("%d",&x1);
    y1=power(alpha,x1,q);
    printf("Enter the value of x2 for second person:\n");
    scanf("%d",&x2);
    y2=power(alpha,x2,q);
    printf("Key for first person: %d\n",power(y2,x1,q));
    printf("Key for second person: %d\n",power(y1,x2,q));
    return 0;
}
