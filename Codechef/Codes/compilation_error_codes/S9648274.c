
    #include<stdio.h>
    #include<math.h>
    #include<stdlib.h>
    int main()
    {
    int n=0,i=0,j=0;
    scanf("%d",&n);
    int a[n];
    int ne,no;
    for(i=0;i<n;i++)
    {
    ne=0;
    no=0;
    scanf("%d",&a[i]);
    for(j=0;j<length(a);j++)
    {
    if(a[j]%2==0)
    ne++;
    else
    no++;
    }
    if(no>ne)
    printf("%d\n","NOT READY");
    else
    printf("%d\n","READY FOR BATTLE");
    }
    return 0;
    }

