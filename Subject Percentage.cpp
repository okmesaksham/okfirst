#include<bits/stdc++.h>
using namespace std;
int main()
{
    float English, Hindi, Math, Science, Computer,sum , percentage;
	cout << "Enter marks of English :";
	cin >> English;
	cout <<"Enter marks of Hindi :";
	cin >> Hindi;
    cout << "Enter marks of Math :";
	cin >> Math;
    cout << "Enter marks of Science :";
	cin >> Science;
    cout << "Enter marks of Computer :";
	cin >> Computer;
	sum = English + Hindi + Math + Science + Computer;
	cout << "Sum of five subjects is : "<< sum <<"\n";
 
	percentage = sum/5;
	cout << "Percentage if five subjects is : "<< percentage <<"\n";
	return 0;
}
