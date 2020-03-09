
    #include<stdio.h>
    #include<conio.h>
    int main()
    {	clrscr();
    	int N,A[100],c1=0,c2=0,i;
    	scanf("%d",&N);
    	for(i=0;i<N;i++)
    	{	scanf("%d",A[i]);
    	}
    	for(i=0;i<N;i++)
    	{	if(A[i]%2==0)
    			c1++;
    		else
    			c2++;
    	}
    	if(c1>c2)
    		printf("READY FOR BATTLE");
    	else
    		printf("NOT READY");
    	getch();
    	return 0;
    }
    

