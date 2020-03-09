
    #include<iostream>
    using namespace std;
    int main()
    {
       int n;
       cin>>n;
       int a[n],count1=0,count2=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]%2==0)
             count2+=1;
           else
             count1+=1;
       }
       if(count1>=count2)
        cout<<"NOT READY"<<endl;
       if(count1<count2)
         cout<<"READY FOR BATTLE"<<endl;
      return 0;
     }          
             
    

