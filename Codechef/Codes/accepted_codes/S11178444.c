
    #include<stdio.h>
    int main()
    {
    int a[100],n,count1=0,count2=0,i=0;
    scanf("%d",&n);
    while(i<n)
    {
    scanf("%d",&a[i]);
    if(a[i]>=1)
    {
    if(a[i]%2==0)
    count1++;
    else
    count2++;
    }
    else
    count2++;
    i++;
    }
    if(count1>count2)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }

