#include <iostream> 
#include <algorithm> 
#include <string> 
using namespace std; 

class CDay { 
private: 
int iDay; 
static const pair<string, string> dow[7]; 
void capitalize(string& str) 
{ 
transform(str.begin(), str.end(), str.begin(), ::tolower); 
transform(str.begin(), str.begin() + 1, str.begin(), ::toupper); 
} 

void findDay(const string& sDay) 
{ 
iDay = -1; 
for (int i = 0; i < 7; i++) { 
if (sDay == dow[i].second) { 
iDay = i; 
break; 
} 
} 
if (iDay == -1) 
iDay = 0; 
} 
public: 
CDay(const string& sDay = "") 
{ 
string strDay = sDay; 
capitalize(strDay); 
strDay = strDay.substr(0, 3); 
findDay(strDay); 
} 

CDay(const int& ciDay) 
{ 
setDay(ciDay); 
} 

void setDay(const int& ciDay) 
{ 
iDay = (ciDay >= 0 && ciDay <= 6) ? ciDay : 0; 
} 

void setDay(const string& strDay) 
{ 
string sDay = strDay; 
capitalize(sDay); 
sDay = sDay.substr(0, 3); 
findDay(sDay); 
} 

void setPrevDay() 
{ 
--iDay; 
if (iDay < 0) 
iDay = 6; 
} 

void setNextDay() 
{ 
++iDay; 
if (iDay > 6) 
iDay = 0; 
} 

void addDays(const int& ciDays) 
{ 
int day = ciDays % 7; 
iDay += day; 
if (iDay < 0) 
iDay += 7; 
else if (iDay > 6) 
iDay %= 7; 
} 

void print_long(const string& strPrompt) 
{ 
cout << strPrompt << "> " << dow[iDay].first << endl; 
} 

void print_short(const string& strPrompt) 
{ 
cout << strPrompt << "> " << dow[iDay].second << endl; 
} 
}; 

const pair<string, string> CDay::dow[7] = { 
make_pair("Sunday", "Sun"), 
make_pair("Monday", "Mon"), 
make_pair("Tuesday", "Tue"), 
make_pair("Wednesday", "Wed"), 
make_pair("Thursday", "Thu"), 
make_pair("Friday", "Fri"), 
make_pair("Saturday", "Sat") 
}; 

int main() 
{ 
CDay day; 
day.setDay("Monday"); 
day.print_long("Monday"); 
day.setPrevDay(); 
day.print_short("setPrevDay == Sun"); 
day.setNextDay(); 
day.print_short("setNextDay == Mon"); 
day.addDays(15); 
day.print_short("addDays(15) == Tue"); 
day.addDays(-7); 
day.print_short("addDays(-7) == Tue"); 
day.addDays(-6); 
day.print_long("addDays(-6) == Wednesday"); 
day.addDays(-5); 
day.print_short("addDays(-5) == Fri"); 
day.addDays(20); 
day.print_long("addDays(20) == Thursday"); 
CDay def; 
def.print_long("Default == Sunday"); 
CDay monday("monday"); 
monday.print_long("Monday == Monday "); 
CDay tuesday(2); 
tuesday.print_long("2 == Tuesday"); 
}