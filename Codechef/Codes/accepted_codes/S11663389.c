
    #include<stdio.h>
    #define max 101
    int a[max];
    int main()
    {
    int n;
    int i,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    x++;
    else
    y++;
    }
    if(x>y)
    printf("READY FOR BATTLE\n");
    else
    printf("NOT READY\n");
    return 0;
    }
    
    

