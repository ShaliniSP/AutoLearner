
    #include<stdio.h>
    int check(int n);
    int main()
    {
    	int i,n,flag,counte=0,counto=0;
    	scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		flag=check(a[i]);
    		if(flag==0)
    		counte++;
    		else
    		counto++;
    	}
    	if(counte>counto)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }
    int check(int n)
    {
    	if(n%2==0)
    	return 0;
    	else 
    	return 1;
    }
    

