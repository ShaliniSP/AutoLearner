
    #include <stdio.h>
    int main(void) {
    	// your code goes here
    	int N,i;
    	scanf("%d",&N);
    	int num;
    	int c1=0,c2=0;
    	for(i=0;i<N;i++)
    	{
    	   scanf("%d",&num);
    	   if(num%2)c2++;
    	   else c1++;
    	}
    	if(c1>c2)printf("READY FOR BATTLE\n");
    	else printf("NOT READY\n");
    	return 0;
    }

