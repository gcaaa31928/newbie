//
// Created by 黃泓鳴 on 2016/9/9.
//

#include <iostream>
#include <cstdio>
#include <stack>
#include <algorithm>
#include <cstring>

using namespace std;


int main() {
//    freopen("in.txt", "r", stdin);
    char inp[200];
    char eng_reverse[] = "A000300HIL0JM0O0002TUVWXY5";
    char int_reverse[] = "1SE0Z0080";
    while (cin.getline(inp, 200)) {
        int len = strlen(inp);
        bool mirrored = true;
        bool palindrome = true;
        for (int i = 0; i <= len / 2; i++) {
            int r_i = len - i - 1;
            if (inp[i] != inp[r_i])
                palindrome = false;
            if (isdigit(inp[i]) && int_reverse[inp[i]-'1'] != inp[r_i]) {
//                printf("%c %c\n",int_reverse[inp[i]-'1'],inp[r_i]);
                mirrored = false;
            }
            else if (!isdigit(inp[i]) && eng_reverse[inp[i]-'A'] != inp[r_i]) {
//                printf("%c %c %c\n",inp[i], eng_reverse[inp[i]-'A'], inp[r_i]);
                mirrored = false;
            }
        }
//        printf("%d %d\n",palindrome, mirrored);
        if(palindrome&&mirrored)
            printf("%s -- is a mirrored palindrome.\n", inp);
        else if(!palindrome&&mirrored)
            printf("%s -- is a mirrored string.\n", inp);
        else if(palindrome&&!mirrored)
            printf("%s -- is a regular palindrome.\n", inp);
        else
            printf("%s -- is not a palindrome.\n", inp);
        puts("");
    }
//    fclose(stdin);
}