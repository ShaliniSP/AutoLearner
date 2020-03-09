
    #include <stdio.h>
    #include <stdlib.h>
    
    int main(int argc, char *argv[]) {
    	int n,i=0,count=0;
    	scanf("%d",&n);
    	int a[n];
    	for(i=0;i<n;i++)
    	{
    	scanf("%d",&a[i]);
    	if(a[i]%2==0)
    	count++;
    	}
    	if(count>n/2)
    	printf("READY FOR BATTLE\n");
    	else printf("NOT READY\n");
    	
    	return 0;
    }

