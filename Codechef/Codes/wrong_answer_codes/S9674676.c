
    #include<stdio.h>
    int main()
    {
    	int N;
    	scanf("%d",&N);
    	int a[N],c=0,i;
    	for(i=0;i<N;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]%2==0)
    		c++;
    	}
    	if(c>N||(c==N&&N==1))
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    	return 0;
    }
    

