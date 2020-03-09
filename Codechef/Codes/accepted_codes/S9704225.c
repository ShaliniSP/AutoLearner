
    #include <stdio.h>
    int main() 
    {
    	int i,x,a[100],ecount=0,ocount=0;
    	scanf(" %d",&x);
        for(i=0;i<x;i++)
        {
            scanf(" %d",&a[i]);
        }
        for(i=0;i<x;i++)
        {
            (a[i]%2==0) ? ecount++ : ocount++;
        }
        if(ecount<=ocount)
        {
            printf("NOT READY");
        }
        else
        {
            printf("READY FOR BATTLE");
        }
    	return 0;
    }
    

