//
// Created by 黃泓鳴 on 2016/9/9.
//

#include <iostream>
#include <cstdio>
#include <stack>
#include <algorithm>

using namespace std;


int count_max(int x) {
    int cnt = 1;
    while (x != 1) {
        if (x & 1) {
            x = x * 3 + 1;
        } else {
            x = x >> 1;
        }
        cnt ++;
    }
    return cnt;
}

int main() {
    int a, b, oa, ob;
    while (~scanf("%d %d", &a, &b)) {
        oa = a;
        ob = b;
        if (a > b) swap(a, b);
        int ans = 0;
        for (int i = a; i <= b; i++) {
            ans = max(ans, count_max(i));
        }
        printf("%d %d %d\n", oa, ob, ans);
    }
}