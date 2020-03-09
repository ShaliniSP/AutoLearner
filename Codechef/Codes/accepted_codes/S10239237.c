
        #include <stdio.h>
         
         
        int main(void)
        {
            int num,i,j=0,k=0;
            
            scanf("%d", &num);
            int arr[num];
            for(i=0;i<num;i++)
            {
                scanf("%d ",&arr[i]);
                if(arr[i]%2==0)
                {
                    j++;
                }
                else
                {
                    k++;
                }
                
            }
            if(j>k)
            {
                printf("READY FOR BATTLE");
            }
            else
            {
                printf("NOT READY");
            }
            
        	return 0;
        }  

