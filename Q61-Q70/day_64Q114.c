//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without
// repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256
int longestUniqueSubsttr(char *str)
{
    int n = strlen(str);
    int cur_len = 1; 
    int max_len = 1; 
    int prev_index; 
    int i;
    int visited[MAX_CHAR];

    for (i = 0; i < MAX_CHAR; i++)
        visited[i] = -1;

    visited[(int)str[0]] = 0;

    for (i = 1; i < n; i++) {
        prev_index = visited[(int)str[i]];

        if (prev_index == -1 || i - cur_len > prev_index)
            cur_len++;
        else {
            if (cur_len > max_len)
                max_len = cur_len;

            cur_len = i - prev_index;
        }

        visited[(int)str[i]] = i;
    }

    if (cur_len > max_len)
        max_len = cur_len;

    return max_len;
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    int len = longestUniqueSubsttr(str);
    printf("The length of the longest substring without repeating characters is: %d\n", len);
    return 0;
}