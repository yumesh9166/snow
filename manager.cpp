#include <iostream>
#include "manager.h"
using namespace std;
void manager::sorting(){
	for(int i=0;i<DAYS;i++)
	{
		for(int j=0;j<DAYS-1;j++)
		{
			if(snowData[j].noOfInches.GetBaseSnow() > snowData[j+1].noOfInches.GetBaseSnow())
			{
				double temp;
				temp = snowData[j].noOfInches.GetBaseSnow();
				snowData[j].noOfInches.SetBaseSnow(snowData[j+1].noOfInches.GetBaseSnow());
				snowData[j+1].noOfInches.SetBaseSnow(temp);

				int tempDate;
				tempDate = snowData[j].date.GetDate();
				snowData[j].date.SetDate(snowData[j+1].date.GetDate());	
				snowData[j+1].date.SetDate(tempDate);
			}
		}
	}
}
void manager::display()
{
	cout<<"Snow Report for "<<oDuration.GetMonth()<<" "<<oDuration.GetStartDate()<<"-"<<oDuration.GetEndDate()<<endl;
	cout<<"Date\tBase"<<endl;
	for(register int i=0;i<DAYS;i++)
	{
		cout<<snowData[i].date.GetDate()<<"\t"<<snowData[i].noOfInches.GetBaseSnow()<<endl;
	}
}
