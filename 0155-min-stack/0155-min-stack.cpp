class MinStack {
private:
    stack<long long> st;
    long long mini;

public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            mini = val;
        }
        else if (val >= mini) {
            st.push(val);
        }
        else {
            // Store encoded value
            st.push(2LL * val - mini);
            mini = val;
        }
    }

    void pop() {
        if (st.empty()) return;

        long long curr = st.top();
        st.pop();

        // Encoded value
        if (curr < mini) {
            mini = 2LL * mini - curr;
        }
    }

    int top() {
        long long curr = st.top();

        // Encoded value means the actual top is the current minimum
        if (curr < mini)
            return mini;

        return curr;
    }

    int getMin() {
        return mini;
    }
};