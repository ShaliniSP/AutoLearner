
    #include <stdio.h>
    
    int main(void) {
        int n,weapons,lucky,temp;
        scanf("%d",&n);
        lucky=0;
        temp=n;
        while(temp--)
        {
            scanf("%d",&weapons);
            if(weapons%2==0)
                lucky++;
        }
        if(lucky>n/2)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    	return 0;
    }
    
    

