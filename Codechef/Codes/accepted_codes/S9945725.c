
    #include<stdio.h>
    int main (void )
    {
    	
    long long int n,i,k=0;
    scanf("%lld",&n);
    while (n--)
    {
    	scanf("%lld",&i);
    	if (i%2==0)
    	k++;
    	else
    	k--;
    	
    }
    if (k>0)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");	
    return 0;
    }

