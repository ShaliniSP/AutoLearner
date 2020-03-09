
    //MahaSena
    #include<stdio.h>
    //#include<conio.h>
    int main()
    {
    	int nus,nuw,f1=0,f2=0;
    	printf("No. of soldiers-");
    	scanf("%d",&nus);
    	for(int i=1;i<=nus;i++)
    	{   printf("entry no.-%d",i);
    		scanf("%d",&nuw);
    		(nuw%2==0)?(f1++):(f2++);
    	}
    	(f1>f2)?(printf("PREPARED")):(printf("NOT PREPARED"));
    }

