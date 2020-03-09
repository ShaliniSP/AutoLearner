
    #include<stdio.h>
    int main()
    {
    int a,n[99],i,c1=0,c2=0;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    scanf("%d",&n[i]);
    for(i=0;i<=a;i++)
    if(n[i]%2==0)
    c1++;
    else
    c2++
    if (c1>c2)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;} 

