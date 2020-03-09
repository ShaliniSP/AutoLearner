
    #include<stdio.h>
    void main()
    {
    int A[100],N,c_lu=0,c_ulu;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
    	scanf("%d",&A[i]);
    }
    for(int i=0;i<N;i++)
    {
    if(A[i]%2==0)
    c_lu++;
    else
    c_ulu++;
    }
    if(c_lu>c_ulu)
    printf("READY FOR BATTLE\n");
    else
    printf("NOT READY\n");
    }

