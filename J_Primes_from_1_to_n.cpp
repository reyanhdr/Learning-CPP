#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
   

   if (n<=1){
    return 0;
   }
   
      int flag = 1; 
   for (int i=2; i <= n; i++){
    
      if (n%i == 0){
         flag = 0;
         break;
      }
    else if (flag = 1){
    cout << i << " ";
   }
     
   }
   


    return 0;
}
