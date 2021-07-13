#include<bits\stdc++.h>
using namespace std;

//Write your code here
class Calculator
{
    int a,b;
    public:
    int power(int n, int p)
    {
        a=n;
        b=p;
        if(a<0 || b<0)
        {
            __throw_runtime_error("n and p should be non-negative");
        }
        return pow(a,b);
    }
};
int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}