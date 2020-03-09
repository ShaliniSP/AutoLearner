
    #include<stdio.h>
    
    int main()
    {
    int n, a=0, b=0, c;
    clrscr();
    scanf("%d", &n);
    
    while(n--)
    {
    scanf("%d", &c);
    
    if(c%2==0)
    a++;
    else
    b++;
    }
    
    if (a>b)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    
    return 0;
    }

