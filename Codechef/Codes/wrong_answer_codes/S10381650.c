
    #include<stdio.h>
     int main()
     {
     	// Total number of testacse
     	int testcase;
     	scanf("%d",&testcase);
     	while(testcase--)
     	{
     		int n,i,arr[100],even=0,odd=0;
    		 scanf("%d",&n);		// total number soldier
    		 for(i=0;i<n;i++)
    		 scanf("%d",&arr[i]);
    		 for(i=0;i<n;i++)
    		 {
    		 	if(arr[i]%2==0)
    		 	even++;
    		 	else
    		 	odd++;
    		 }
    		 if(even>odd)
    		 printf("\n READY FOR BATTLE");
    		 else
    		 printf("\n NOT READY");
    	}
    	return(0);
     }
    

