
    #include<stdio.h>
    #include<string.h>
    int main()
    {
    int n,c1=0,c2=0,a[100],i;
    scanf("%d",&n);
    if(n>=1&&n<=100)
    {
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    c1++;
    else
    c2++;
    }}
    
    if(c1>c2)
    puts("READY FOR BATTLE");
    else
    puts("NOT READY");
    return 0;
    }

