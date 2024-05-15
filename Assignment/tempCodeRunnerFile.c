int main()
{
    int n,m,sum=0,x,cube;
    printf("Enter a number:");
    scanf("%d",&n);
    
    m=n;
    while(n>0)
    {
        x=n%10;
        n=n/10;
        cube=x*x*x;
        sum=sum+cube;
    }
    if(m==sum)
    printf("Armstrong");
    else 
    printf("Not");

    return 0;
}