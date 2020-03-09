
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    	int N,A[N],i,cnt1=0,cnt2=0;
    	scanf("%d",&N);
    	for(i=1;i<=N;i++)
    	{
    		scanf("%d",&A[i]);
    	}
    	for(i=1;i<=N;i++)
    	{
    	if(A[i]%2==0)
    	{
    	cnt1++;
    	}
    else
    {
    cnt2++;
    }}
    
    if(cnt1>cnt2)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY ");
    return 0;
    
    }
    
    
    
    
    
    

