
    #include<stdio.h>
    
    int main()
    {
    	int n,a,b,i;
    	int arr[100];
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	scanf("%d",&arr[i]);
    	for(i=0;i<n;i++)
    	{
    	   if(arr[i]%2==0)
    	   a++
    	   else
    	   b++
    	}
    	if(a>b)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }
    	   
    	   		

