//Convert a number in the range 0..6 into a weekday name. 
//0 returns "Sun", 1 returns "Mon"
//Work in progress, debug user interface

#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include <assert.h>
#include <string.h>

#define DAYS_OF_THE_WEEK 7

char *dayArray (int n);
char *daySwitch (int n);

int main (int argc, char * argv[]) {

    //argument processing
    if(argc < 3) err(1, "Mode: A,S; Day: 0..6");

    char *day = NULL; 
    int n = atoi(argv[3]);

    //choose mode
    if(strcmp(argv[2],"A")) day = dayArray(n);
    else if(strcmp(argv[2],"S")) day = daySwitch(n);

    printf("The day is %s\n", day);

    return EXIT_SUCCESS;
}

char *dayArray (int n)
{
    //lookup table
    assert(0 <= n && n <= 6);
    char *days[DAYS_OF_THE_WEEK] = {"Sun", "Mon", "Tue", "Wed", "Thur",
                                    "Fri", "Sat"};
    return days[n];
}

char *daySwitch (int n) 
{
    assert(0 <= n && n <= 6);
    char *day;
    switch (n) {
        case 0: day = "Sun"; break;
        case 1: day = "Mon"; break;
        case 2: day = "Tue"; break;
        case 3: day = "Wed"; break;
        case 4: day = "Thur"; break;
        case 5: day = "Fri"; break;
        case 6: day = "Sat"; break;
    }
    return day;
}
