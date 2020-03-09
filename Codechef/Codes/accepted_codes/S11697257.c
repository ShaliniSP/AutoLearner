
    #include<stdio.h>
    
    int main()
    {
    	long int n,a[100],luck,unluck,i;
    	luck=0;
    	unluck=0;
    	scanf("%ld",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%ld",&a[i]);
    		if(a[i]%2==0)
    			luck++;
    		else
    			unluck++;
    	}
    	if(luck>unluck)
    		printf("READY FOR BATTLE\n");
    	else
    		printf("NOT READY \n");
    	return 0;
    }
    

