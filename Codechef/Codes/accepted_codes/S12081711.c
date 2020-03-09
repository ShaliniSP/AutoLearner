
    #include<stdio.h>
    int main()
    {
    	int n,i,j,k=0,l=0;
    	int arr[n];
    	scanf("%d", &n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d", &arr[i]);
    	}
    	for(j=0;j<n;j++)
    	{
    		if((arr[j]%2)==0)
    		k++;
    		else
    		l++;
    	}
    	if(k>l)
    	printf("READY FOR BATTLE\n");
    	else
    	printf("NOT READY\n");
    	return 0;
    }

