#include<bits/stdc++.h>
using namespace std;
int main()
{
  float radius, area, circumference;
    cout << "Enter radius of Circle : ";
    cin >> radius;
    area = 3.14*radius*radius;
    cout << "The area of Circle is : "<< area <<"\n";
 
    circumference = 2*3.14*radius;
    cout << "The Circumference of Circle is : "<< circumference <<"\n";
 
    return 0;
}
