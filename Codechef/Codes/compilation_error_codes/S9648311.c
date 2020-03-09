
    #include<stdio.h>
    #include<math.h>
    #include<stdlib.h>
    int main()
    {
    int n=0,i=0,j=0,x=0;
    scanf("%d",&n);
    int a[n];
    int ne,no;
    for(i=0;i<n;i++)
    {
    ne=0;
    no=0;
    scanf("%d",&a[i]);
    x=length(a);
    for(j=0;j<x;j++)
    {
    if(a[j]%2==0)
    ne++;
    else
    no++;
    }
    if(no>ne)
    printf("NOT READY");
    else
    printf("READY FOR BATTLE");
    }
    return 0;
    }

