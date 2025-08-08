#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Calculator{ 
    public:
        int power(int n , int p){
            if( n < 1 ||  p < 1){
                throw(runtime_error("n and p should be non-negative"));
            }
            int num  = n;
            for (int i = 0; i < p - 1; i++){
                num = num * n;
            }
            return num;
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