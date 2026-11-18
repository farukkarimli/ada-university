#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

/* function prototypes are here */
bool isValidTime(const char str[]);

int main()
{
	/* You shouldnt need to do any logic in main function. 
	* Your function must satisfy ALL possible test cases below. 
	* You may add your own test cases, but do NOT remove my test cases. */

	/* Test Cases: */
	printf("%d\n", isValidTime("13:45"));		// true
	printf("%d\n", isValidTime("1:45 PM"));		// true
	printf("%d\n", isValidTime("01:45 pm"));	// true
	printf("%d\n", isValidTime("03:40"));		// true
	printf("%d\n", isValidTime("3:40"));		// true
	printf("%d\n", isValidTime("6:20 Am"));		// true
	printf("%d\n", isValidTime("00:00"));		// true
	printf("%d\n", isValidTime("12:00"));		// true

	printf("%d\n", isValidTime("24:00"));		// false
	printf("%d\n", isValidTime("43:45"));		// false
	printf("%d\n", isValidTime("13:30 am"));	// false
	printf("%d\n", isValidTime("1:75 PM"));		// false
	printf("%d\n", isValidTime("1:45 PS"));		// false
	printf("%d\n", isValidTime("111:45 pm"));	// false
	printf("%d\n", isValidTime("03-40"));		// false
	printf("%d\n", isValidTime("3::30"));		// false
	printf("%d\n", isValidTime("6:y0 Am"));		// false
	printf("%d\n", isValidTime("3:30am"));		// false
	printf("%d\n", isValidTime("3:30    am"));	// false
	printf("%d\n", isValidTime("3:30 a  m"));	// false
	printf("%d\n", isValidTime("03:60"));		// false

	return 0;
}

// You fill in here

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isValidTime(const char str[]) {

    int len = strlen(str);
    int colon = -1;

    // Find the colon
    for (int i = 0; i < len; i++) {
        if (str[i] == ':') {
            colon = i;
            break;
        }
    }

    if (colon == -1)
        return false;

    // Check hour length
    if (colon != 1 && colon != 2)
        return false;

    // Check hour digits
    for (int i = 0; i < colon; i++) {
        if (!isdigit(str[i]))
            return false;
    }

    // Check minute digits
    if (colon + 3 > len)
        return false;

    if (!isdigit(str[colon + 1]) || !isdigit(str[colon + 2]))
        return false;

    int hour = 0;
    for (int i = 0; i < colon; i++)
        hour = hour * 10 + (str[i] - '0');

    int minute = (str[colon + 1] - '0') * 10 +
                 (str[colon + 2] - '0');

    if (minute > 59)
        return false;

    // Format without AM/PM
    if (len == colon + 3) {
        return hour <= 23;
    }

    // Format with AM/PM
    if (len != colon + 6 || str[colon + 3] != ' ')
        return false;

    char a = tolower(str[colon + 4]);
    char p = tolower(str[colon + 5]);

    if ((a == 'a' || a == 'p') && p == 'm')
        return hour >= 1 && hour <= 12;

    return false;
}
