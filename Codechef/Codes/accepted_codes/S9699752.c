
    #include<stdio.h>
    int main()
    {
    int t,i,a[100],o=0,e=0;
    scanf("%d",&t);
    if(t>=1&&t<=100)
    {
    for(i=0;i<t;i++)	
    scanf("%d",&a[i]);
    for(i=0;i<t;i++)
    {
    if(a[i]%2==0)
    e++;
    else
    o++;	
    }
    if(e>o)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }
    return 0;
    }
    

