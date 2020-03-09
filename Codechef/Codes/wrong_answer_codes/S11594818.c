
    #include <stdio.h>
    #include<stdlib.h>
    int checkEven(int n)
    {
    	if (n%2==0)
    	return 1;
    	else 
    	return 0;
    }
    int main() {
    
        int i,N,oddS=0,evenS=0;
        scanf("%d",&N);
        int a[100];
        for (i=0;i<N;i++)
            {
            scanf("%d",&a[i]);
        }
        for (i=0;i<N;i++)
            {
            if (checkEven(a[i])==1)
            evenS++;
            else
            oddS++;
        }
        if (oddS > evenS)
        printf("NOT READY");
        else
        printf("READY FOR BATTLE");
        return 0;
    }
    

