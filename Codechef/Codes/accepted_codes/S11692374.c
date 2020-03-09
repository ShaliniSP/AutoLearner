
    #include<stdio.h>
    int main()
    {
    int i,n,m,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&m);
    if((m%2)==0)
    count++;
    else
    count--;
    }
    if(count>0)
    printf("READY FOR BATTLE\n");
    else
    printf("NOT READY\n");
    return 0;
    }

