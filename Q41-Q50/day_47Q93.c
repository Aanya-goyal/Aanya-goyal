//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
int areAnagrams(char* str1, char* str2) {
    int freq[26] = {0}; // Frequency array for 'a' to 'z'
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        return 0; // Not anagrams if lengths differ
    }
    
    for (int i = 0; i < len1; i++) {
        char ch1 = str1[i];
        char ch2 = str2[i];
        if (ch1 >= 'a' && ch1 <= 'z') {
            freq[ch1 - 'a']++;
        }
        if (ch2 >= 'a' && ch2 <= 'z') {
            freq[ch2 - 'a']--;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0; // Not anagrams if frequency mismatch
        }
    }
    
    return 1; // Strings are anagrams
}