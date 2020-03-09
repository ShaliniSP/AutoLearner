
    #include<stdio.h>
    int main()
    {
        int n,i,a,evenWeaponedSoldier=0,oddWeaponedSoldier=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a%2==0)
                evenWeaponedSoldier++;
            else
                oddWeaponedSoldier++;
        }
        if(evenWeaponedSoldier>oddWeaponedSoldier)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
    
        return 0;
    }
    

