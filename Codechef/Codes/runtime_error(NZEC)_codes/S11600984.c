
    #include<stdio.h>
    
    void main()
    {
    int a[100],i,j,d,c;
    scanf("%d",&i);
    
    for(j=0;j<i;j++)
    scanf("%d",&a[j]);
    
    for(j=0;j<i;j++)
    {if(a[j]%2==0)
    c++;
    else
    d++;
    }
    if(c>d)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }

