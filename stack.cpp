#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack st;
    for (int i = 0; i < 10; ++i) {
        st.push(i);
    }
    while (!st.isEmpty()) {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
