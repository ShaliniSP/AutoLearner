
    #include <stdio.h>
    
    int main()
    {
    	int i,j,n=0;
    	scanf("%d", &i);
    	int a[i];
    	for (j=0;j<i;j++)
    		{
    		   scanf("%d", &a[j]);
    		   if(a[j]%2 == 0)
    				n++;
    		}
    	if(n > i/2)
    	printf("READY FOR BATTLE");
    	else 
    	printf("NOT READY");
    	return 0;
    }

