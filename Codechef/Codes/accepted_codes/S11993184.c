
    #include <stdio.h>
     
    int main(void) {
    	// your code goes here
        int n,i,odd=0,even=0;
        scanf("%d",&n);
        int A[n];
        for(i=0;i<n;i++)
            scanf("%d",&A[i]);  
        for(i=0;i<n;i++)
        {
           if(A[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
    	return 0;
    }  

