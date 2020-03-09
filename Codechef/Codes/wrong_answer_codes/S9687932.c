
    #include<stdio.h>
    
    int main()
    {
    int n,i=0,a[101],x,y;
    scanf("%d",&n);
    while(n--)
    {
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    while(i<n)
    {
    if(a[i]/2==0)
    x++;
    else
    y++;
    i++;
    }
    x>y?printf("READY FOR BATTLE"):printf("NOT READY");
    }
    return 0;
    }

