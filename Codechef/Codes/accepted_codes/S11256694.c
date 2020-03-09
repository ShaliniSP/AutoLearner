
    #include<stdio.h>
    int main()
    {   int n, i, tmp, odd=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {   scanf("%d",&tmp);
            if(tmp%2==1){odd++;}
        }
        if(odd >= (float)n/2){printf("NOT READY");}
        else{printf("READY FOR BATTLE");}
    return 0;
    }
    

