
    #include <stdio.h>
    
    int main(void) {
        int n;
        scanf("%d", &n);
        int A[n];
        int i;
        int lucky=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            if(A[i]%2==0)
            lucky++;
        }
        if(lucky>(n/2))
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
    
    	return 0;
    }
    
    

