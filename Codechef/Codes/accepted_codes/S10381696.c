
    #include<stdio.h>
     int main()
     {
     		int n,i,arr[100],even=0,odd=0;
    		 scanf("%d",&n);
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
    		 printf("READY FOR BATTLE");
    		 else
    		 printf("NOT READY");
    	return(0);
     }
    

