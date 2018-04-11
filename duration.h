#include <string>
using namespace std;
#define DAYS 7
class duration{
private:
	string month;
	int startDate;
	int endDate;
	int date;
public:
	void SetMonth(string month);
	string GetMonth();
	void SetStartDate(int date);
	int GetStartDate();
	void SetEndDate(int date);
	int GetEndDate();
	void SetDate(int date);
	int GetDate();
	bool isValidDuration();
};
