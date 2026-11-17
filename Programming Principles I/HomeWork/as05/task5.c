#include <stdio.h>

/* function prototypes are here */
void birthdayInfo(int bday);

int main ()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */
	
	birthdayInfo(20040410); // Leap Year. Zodiac is Aries.
	birthdayInfo(20031118); // Not Leap Year. Zodiac is Scorpio.

	return 0;
}

// You fill in here
void birthdayInfo(int bday) {
    int year = bday / 10000;      // 20040410 / 10000 = 2004
    int md = bday % 10000;        // 20040410 % 10000 = 410 month and day

    // for leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Leap Year. ");
    } else {
        printf("Not Leap Year. ");
    }

    // to find the zodiac sign compare month+day with each range
    if (md >= 321 && md <= 419) {
        printf("Zodiac is Aries.\n");
    } else if (md >= 420 && md <= 520) {
        printf("Zodiac is Taurus.\n");
    } else if (md >= 521 && md <= 620) {
        printf("Zodiac is Gemini.\n");
    } else if (md >= 621 && md <= 722) {
        printf("Zodiac is Cancer.\n");
    } else if (md >= 723 && md <= 822) {
        printf("Zodiac is Leo.\n");
    } else if (md >= 823 && md <= 922) {
        printf("Zodiac is Virgo.\n");
    } else if (md >= 923 && md <= 1022) {
        printf("Zodiac is Libra.\n");
    } else if (md >= 1023 && md <= 1121) {
        printf("Zodiac is Scorpio.\n");
    } else if (md >= 1122 && md <= 1221) {
        printf("Zodiac is Sagittarius.\n");
    } else if (md >= 1222 || md <= 119) {      // Capricorn crosses the new year
        printf("Zodiac is Capricorn.\n");
    } else if (md >= 120 && md <= 218) {
        printf("Zodiac is Aquarius.\n");
    } else {                                   // 219 to 320
        printf("Zodiac is Pisces.\n");
    }
}