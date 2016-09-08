#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main() {
    int n;
    while (~scanf("%d", &n) && n) {
        bool end = false;
        while (!end) {
            int current_num = 1;
            bool failed = false;
            stack<int> st;
            for (int i = 1; i <= n; i++) {
                int tmp;
                scanf("%d", &tmp);
                if (tmp == 0) {
                    end = true;
                    puts("");
                    break;
                }
                if (current_num < tmp) {
                    for (; current_num < tmp; current_num++) {
                        st.push(current_num);
                    }
                    current_num++;
                } else if (current_num == tmp) {
                    current_num++;
                } else if (current_num > tmp) {
                    if (st.top() != tmp) {
                        failed = true;
                    } else {
                        st.pop();
                    }
                }
            }
            if (end) break;
            if (failed) printf("No\n");
            else printf("Yes\n");
        }

    }
}