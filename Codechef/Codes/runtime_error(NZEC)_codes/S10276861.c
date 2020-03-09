
    #include<stdio.h>
    int main()
    {
    int n,i;
    scanf("%d",&n);
    int a[n];
    int counter=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    {
    counter++;	
    }
    }
    if(n-(2*counter)<0)	
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }

