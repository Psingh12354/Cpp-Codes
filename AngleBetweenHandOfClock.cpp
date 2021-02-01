#include<iostream>
#include<math.h>
using namespace std;
int Min(int a,int b){
    return a<b?a:b;
}
int main()
{
	int max_min=60;
	int max_hour=24;
	int hr,min,clock;
	cin>>hr>>min;
	if(hr<0 || min<0 || hr>12 || min>60){
		cout<<"Wrong input";
	}
	if(hr==12){
		hr=0;
	}
	// 1hr=360/12=30 deg
	// 3hr= 90deg
	// 360/60=6 deg
	// 1sec= 6deg
	if(min==60){
		min=0;
		hr+=1;
		if(hr>12);
		hr=hr-12;
	}
// 	float hr_angle=(hr+min/60)*30;
    float hr_angle=0.5 * (hr * 60 + min); 
	float min_angle=min*6;
	 float angle=abs(hr_angle - min_angle);
	cout<<Min(360-angle,angle);
}
