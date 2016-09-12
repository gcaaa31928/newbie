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
//    freopen("in.txt","r",stdin);
    char line[20056];
    char c;
    int left = 1;
    while (gets(line)){
        for(int i =0;i<strlen(line);i++) {
            c=line[i];
            if (c == '"') {
                if (left)
                    printf("``");
                else
                    printf("''");
                left = left ^ 1;
            } else {
                putchar(c);
            }
        }
        puts("");
    }
//    fclose(stdin);
}