
    #include<iostream>
    
    using namespace std;
    
    int main()
    {   int t,n;
        int lucky=0,unlucky=0;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            cin>>n;
            if(n%2==0)
                lucky++;
            else
                unlucky++;
        }
        if(lucky>unlucky)
            cout<<"READY FOR BATTLE"<<endl;
        else
            cout<<"NOT READY"<<endl;
        return 0;
    
    }
    

