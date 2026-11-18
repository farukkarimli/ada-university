#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

/* function prototypes are here */
bool isValidSchoolEmail(const char str[]);

int main()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */
	
	/* Test Cases: */
	printf("%d\n", isValidSchoolEmail("emil@ada.edu.az"));		// true (1)
	printf("%d\n", isValidSchoolEmail("tofig@qu.edu"));			// true (1)
	printf("%d\n", isValidSchoolEmail("gulam@qu.edudd"));		// false (0)
	printf("%d\n", isValidSchoolEmail("to@qu.edu"));			// false (0)
	printf("%d\n", isValidSchoolEmail("to?fig@qu.edu"));		// false (0)
	printf("%d\n", isValidSchoolEmail("eabbasov2019@ada.edu.tr")); // true (1)
	printf("%d\n", isValidSchoolEmail("eabbasov2019ada.edu.tr")); // false (0)

	return 0;
}

// You fill in here
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isValidSchoolEmail(const char str[]) {
    int n = strlen(str);

    // find the single @
    int at = -1;
    for (int i = 0; i < n; i++) {
        if (str[i] == '@') {
            if (at != -1) {
                return false;              // a second '@'
            }
            at = i;
        }
    }
    if (at < 3) {                          // no '@', or ID shorter than 3 
        return false;
    }

    // ID part: str[0] .. str[at - 1] */
    if (!isalpha((unsigned char) str[0])) {
        return false;                      // must begin with a letter 
    }
    for (int i = 0; i < at; i++) {
        if (!isalnum((unsigned char) str[i]) && str[i] != '_') {
            return false;                  // only letters, digits, '_' 
        }
    }

    // domain part: look for ".edu" with at least one character of domain name before it 
    for (int i = at + 2; i + 3 < n; i++) {
        if (strncmp(str + i, ".edu", 4) == 0) {
            const char *rest = str + i + 4;

            if (rest[0] == '\0') {         // ends with .edu 
                return true;
            }
            if (rest[0] == '.') {          // .edu.xx or .edu.xxx
                int len = strlen(rest + 1);
                bool all_letters = true;
                for (int k = 1; k <= len; k++) {
                    if (!isalpha((unsigned char) rest[k])) {
                        all_letters = false;
                    }
                }
                if ((len == 2 || len == 3) && all_letters) {
                    return true;
                }
            }
        }
    }
    return false;
}