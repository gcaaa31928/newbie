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
    int test;
    while (~scanf("%d", &test)) {
        while (test--) {
            int n, count=0;
            int a[55];
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
                scanf("%d", &a[i]);
            for (int i = 0; i < n - 1; i++)
                for (int j = 0; j < n-i-1; j++)
                    if(a[j]>a[j+1]) {
                        swap(a[j], a[j+1]);
                        count++;
                    }
            printf("Optimal train swapping takes %d swaps.\n", count);
        }
    }
//    fclose(stdin);
}