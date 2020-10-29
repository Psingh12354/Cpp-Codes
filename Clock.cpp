#include<iostream>
#include <cstdlib>
#include <algorithm> 
using namespace std;
int clockAngle(int h,int m){
	if(h<0 || m<0 || h>12 || m>60){cout<<"Wrong input";}
	if(h==12){h=0;}
	if(m==60){m=0;h+=1;
		if(h>12){
			h-=12;
		}
	}
	int hour_angle=(h*60+m)/2; //or ((h+(m/60))*30)
	int minute_angle=6*m;
	int angle=abs(hour_angle-minute_angle); //abs cstdlibh
	angle=min(360-angle,angle); //algorithm
	return angle;
}
int main()
{
	int h=9;
	int m=60;
	cout<<"Angle : "<<clockAngle(h,m);
	return 0;
}
