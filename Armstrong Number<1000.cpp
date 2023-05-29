#include <iostream>
using namespace std;
 
int main() {
    int i;
	int r, sum, temp;
    cout<<"Armstrong Number are";
    for(i=100; i<=1000; i++)
    {
       temp = i;
       sum = 0;
       while(temp!=0)
       { 
         r = temp % 10;
         temp = temp/10;
         sum = sum + (r*r*r);
       }
       if(sum==i)
       cout<<i<<" ";
    }
         cout<<"/n";
}
