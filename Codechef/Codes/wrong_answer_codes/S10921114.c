
    #include <stdio.h>
    int main()
    {
    int n,a[100],i=1,even=0,odd=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    even++;
    else
    odd++;
    }
    if(even>odd)
    printf("Ready for battle");
    else printf("Not ready");
    return 0;
    }

