
    #include<stdio.h>
    int main()
    {
    int s,w[100],i,eve=0,od=0;
    printf("enter the number of soilders");
    scanf("%d",&s);
    printf("enter number of weapons");
    for(i=0;i<s;i++)
    {scanf("%d",&w[i]);
    if(w[i]%2==0)
    eve++;
    else
    od++;
    }
    if(eve>od)
    printf("READY FOR BATTEL");
    else
    printf("NOT READY");
    return 0;
    } 

