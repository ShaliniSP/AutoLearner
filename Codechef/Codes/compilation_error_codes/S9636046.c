
    #include<iostream>
    using namespace std;
    int main()
    {
        int n, A,count1e=0,counto=0;
    
        cin>>n;
        while(n--)
        {
            cin>>A;
            if((A%2)==0)
                count1e++;
            else
                counto++;
        }
        if(count1e > counto)
            cout<<"\Ready for battel";
        else
            cout<<"\nNot ready for battel";
    
    return 0;
    }
    

