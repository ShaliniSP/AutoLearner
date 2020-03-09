
    #include <stdio.h>
     
    
    int main(void)
    {
        int num,i,even=0,odd=0;
        
        scanf("%d", &num);
        int arr[num];
        for(i=0;i<num;i++)
        {
            scanf("%d ",&arr[i]);
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            
        }
        if(even>odd)
        {
            printf("READY FOR BATTLE");
        }
        else
        {
            printf("NOT READY");
        }
        
    	return 0;
    } 

