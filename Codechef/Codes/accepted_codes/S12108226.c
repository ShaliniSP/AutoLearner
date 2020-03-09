
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int i;
        int num;
        int lucky,unlucky;
    
    
        scanf("%d",&num);
            lucky=0;
            unlucky=0;
            int array[num];
            for(i=0;i<num;i++)
                scanf("%d",&array[i]);
    
            for(i=0;i<num;i++)
            {
                if(array[i]%2==0)
                    lucky++;
    
                else
                    unlucky++;
            }
    //printf("^^%d\n",lucky);
    //printf("^^%d\n",unlucky);
            if(lucky>unlucky)
                printf("READY FOR BATTLE\n");
    
            else
                printf("NOT READY\n");
    
        return 0;
    }
    
    

