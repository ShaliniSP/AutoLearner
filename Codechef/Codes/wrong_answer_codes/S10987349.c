
    #include<stdio.h>
    void fun(int a[],int);
    int main()
    {
    int n;
    scanf("%d",&n);
    int a[n],c[n],i;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    fun(a,n);
    return 0;
    }
    void fun(int a[],int n)
    {
    int c=0,d=0,i;
    for(i=0;i<n;i++)
    {
    if((a[i]%2)==0)
    c++;
    else
    d++;
    }
    if(c>d)
    printf("READY FOR BATTLE");
    else if(d>c)
    printf("NOT READY");
    }
    

