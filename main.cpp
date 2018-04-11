#include<iostream>
#include<string>
#define DAYS 7
#include "manager.h"
using namespace std;
int main()
{
	manager oManager;
	string monthName;
	cout<<"Enter the name of the month"<<endl;
	cin>>monthName;
	oManager.oDuration.SetMonth(monthName);
	int startDate, endDate;
	bool status = true;
	while(status)
	{
		cout<<"Enter start date of the week: ";
		cin>>startDate;
		oManager.oDuration.SetStartDate(startDate);
		cout<<"Enter end date of the week: ";
		cin>>endDate;
		oManager.oDuration.SetEndDate(endDate);
		if(oManager.oDuration.isValidDuration())
		{	
			status = false;
		}else{
			cout<<"Please enter StartDate and EndDate Correctly"<<endl;
		}
	}
	double snowInches;
	for(int i=0;i<DAYS;i++)
	{	
		cout<<"Enter Base snow for "<<oManager.oDuration.GetStartDate()+i<<"th day"<<endl;
		oManager.snowData[i].date.SetDate(oManager.oDuration.GetStartDate()+i);
		cin>>snowInches;
		oManager.snowData[i].noOfInches.SetBaseSnow(snowInches);
	}	
	//Sort the data in increasing order according to snow
	oManager.sorting();

	//display the stored data
	oManager.display();
	return 0;
}
