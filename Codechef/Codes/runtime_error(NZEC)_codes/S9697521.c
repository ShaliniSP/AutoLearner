
    #include<stdio.h>
    void main()
    {
    	int N,A[101],i,c1=0,c2=0;
    	scanf("%d",&N);
    	for(i=0;i<N;i++)
    	{
    	scanf("%d",&A[i]);
    	if(A[i]%2==0)
    	c1++;
    	else
    	c2++;
    	}
    	if(c1>c2)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
    }
    

