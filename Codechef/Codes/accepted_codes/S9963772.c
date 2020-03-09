
    #include <stdio.h>
    
    int main(void) {
    
    int n,ec=0,oc=0,val,i;
    scanf("%d",&n);
    if(n>=1 && n<=100)
    {
        int arr[n];
     for(i=1;i<=n;i++)   
        {
            
            scanf("%d",&arr[i]);
        }
        for(i=1;i<=n;i++)
        {
            val = arr[i]%2;
            if(val == 0)
            ec++;
            else
            oc++;
        }
        if(ec > oc)
        {
            printf("READY FOR BATTLE\n");
        }
        else
        printf("NOT READY\n");
        
    }
    	return 0;
    }
    

