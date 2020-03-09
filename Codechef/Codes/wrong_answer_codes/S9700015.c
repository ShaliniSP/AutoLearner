
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {int N, A[100], j, i, w;
     printf("Enter no: ");
    	scanf("%d",&N);
    	 if (N <= 100 && N>=1)
    {for (i = 1; i <= N; i++)
    	{
    	    printf("Enter no: ");
    		scanf("%d", &A[j]);
    	}
    		w = N % 2;
    		if (w == 0)
    		{
    			printf("READY FOR BATTLE ");
    
    		}
    		else
    			printf("NOT READY");}
    			return 0;
    		}
    

