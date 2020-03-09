
    #include<stdio.h>
    int main()
    {
    int n,i;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int c=0,d=0;
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    c++;
    else
    d++;
    }
    if(c>d)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    } 

