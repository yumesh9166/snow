#include "snow.h"
#include "duration.h"
class manager{
public:
	typedef struct st {
		duration date;
		snow noOfInches;	
	}snowdata;
	snowdata snowData[DAYS];
	snow oSnow;
	duration oDuration;
	void sorting();
	void display();
};
