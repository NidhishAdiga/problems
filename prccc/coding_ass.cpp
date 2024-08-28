#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <cmath>

using namespace std;

time_t parseTimestamp(const string& timestamp) {
    struct tm tm = {};
    int tz_hour, tz_minute;
    char tz_sign;

    istringstream ss(timestamp);
    ss >> get_time(&tm, "%a %d %b %Y %H:%M:%S");
    ss >> tz_sign >> tz_hour >> tz_minute;

    time_t time = mktime(&tm);
    int tz_offset = (tz_hour * 3600) + (tz_minute * 60);
    if (tz_sign == '-') {
        tz_offset = -tz_offset;
    }

    return time - tz_offset;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after the number of test cases

    for (int i = 0; i < T; ++i) {
        string t1, t2;
        getline(cin, t1);
        getline(cin, t2);

        time_t time1 = parseTimestamp(t1);
        time_t time2 = parseTimestamp(t2);

        cout << abs(difftime(time1, time2)) << endl;
    }

    return 0;
}
