https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// ECE 209 - Fall 2020
// MP3
// Read strings from a file.  Find longest, shortest, first, and last strings.
//
// For Fall 2020 students only -- DO NOT SHARE with others
//
// YOUR NAME:

#include <stdio.h>
#include <string.h>
#include <ctype.h>   // ispunct

int wordInfo(const char* fname, char *shortest, char *longest, char *lowest, char *highest);

int main() {
    char filename[25];
    char shortWord[16] = "";
    char longWord[16] = "";
    char firstWord[16] = "";
    char lastWord[16] = "";
    printf("Filename: ");
    fflush(stdout);
    scanf("%24s", filename);

    int w = wordInfo(filename, shortWord, longWord, firstWord, lastWord);
    if (w < 0) {
        printf("Unable to open file: %s\n", filename);
        return 0;
    }
    printf("File has %d words.\n", w);
    printf("Shortest word: %s\n", shortWord);
    printf("Longest word: %s\n", longWord);
    printf("Alphabetically first: %s\n", firstWord);
    printf("Alphabetically last: %s\n", lastWord);
    
    return 0;
}

int wordInfo(const char *fname, char *shortest, char *longest, char *lowest, char *highest) {
   return 0;
}
