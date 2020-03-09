
    #include<stdio.h>
    int main()
    {
    	int n,a,count_e=0,count_o=0;
    	scanf("%d",&n);
    	for(int i=0;i<n;i++)
    	{
    		scanf("%d",&a);
    		if(a%2==0)
    		count_e++;
    		else
    		count_o++;
    	}
    	if(count_e-count_o>0)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    }

