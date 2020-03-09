
    #include <stdio.h>
    
    int main(void)
    {
    int n,a[100],i,b=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    b++;
    else
    c++;
    }
    if(b>c)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    	return 0;
    }
    
    

