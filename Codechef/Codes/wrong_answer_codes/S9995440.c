
    #include<stdio.h>
    int main ()
    {
    int a[100],i,n,count1=0,count2=0;
    /*printf("Enter total number of soldier : "); */
    scanf("%d",&n);
    for(i=0;i<n;i++);
    {
    scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    	{
    	count2++;
    	}
    else
    	{
    	count1++;
    	}
    }
    if(count2>count1)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0 ;
    }

