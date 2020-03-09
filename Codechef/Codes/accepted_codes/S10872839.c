
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    int t;
    int i;
    int n;
    int count=0;
    int count1=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d",&n);
    if(n%2==0)
        count++;
    if(n%2==1)
        count1++;
    }
    if(count>count1)
        printf("READY FOR BATTLE\n");
    else
        printf("NOT READY\n");
    return 0;
    }
    

