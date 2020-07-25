#include<iostream>
using namespace std;
class Time
{
	private:
		int seconds;
		int hh,mm,ss;
	public:
	void getTime(void);
	void convertintoseconds(void);
	void displayTime(void);	
};
void Time::getTime(void)
{
	cout<<"enter time:";
	cout<<"\nHours?";
	cin>>hh;
	cout<<"Minutes?";
	cin>>mm;
	cout<<"seconds?";
	cin>>ss;
}
void Time:: convertintoseconds(void)
{
	seconds=hh*3600+mm*60+ss;
}
void Time:: displayTime(void)
{
	cout<<"The time is="<<hh<<":"<<mm<<":"<<ss;
	cout<<"\nTime in total seconds:"<<seconds;
}
int main()
{
	Time T;
	T.getTime();
	T.convertintoseconds();
	T.displayTime();
	return 0;
	
}
