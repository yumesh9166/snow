#include "duration.h"
void duration::SetMonth(string m){
	month = m;
}
string duration::GetMonth()
{
	return month;
}
void duration::SetStartDate(int date)
{
	startDate = date;
}
int duration::GetStartDate(){
	return startDate;
}
void duration::SetEndDate(int date)
{
	endDate = date;
}
int duration::GetEndDate(){
	return endDate;
}
void duration::SetDate(int d)
{
	date = d;
}
int duration::GetDate(){
	return date;
}
bool duration::isValidDuration()
{
	if((endDate>startDate)&&(endDate-startDate+1)==DAYS)
	{
		return true;
	}else{
		return false;
	}
}

