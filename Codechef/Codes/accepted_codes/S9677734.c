
    #include<stdio.h>
    int main()
    {
    	int n,a[1000],x=0,y=0,i;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    		scanf("%d",&a[i]);
    	for(i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		x++;
    		else
    		y++;
    	}
    	if(x>y)
    		printf("READY FOR BATTLE");
    	else
    		printf("NOT READY");
    	return 0;
    }

