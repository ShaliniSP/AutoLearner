
    #include<stdio.h>
    #include<conio.h>
    void main()
    {
    int n,a[100],e=0,o=0;
    clrscr();
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
    if(a[i]%2==0)
    {
    e=e+1;
    }
    else
    {o=o+1;
    }
    }
    if(e>o)
    {
    printf("READY FOR BATTLE");
    }
    else
    {printf("NOT READY");
    }
    getch();
    }

