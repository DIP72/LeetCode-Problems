#include <bits/stdc++.h>

int priority(char ch){
	if(ch == '^') return 3;
	else if(ch == '*' || ch == '/') return 2;
	else if(ch == '+' || ch == '-') return 1;
	else return -1;
}

string infixToPostfix(string exp){
	int n = exp.length();
	string postfix;
	stack<char> st;
	for(int i = 0; i < n; i++){
		if(exp[i] >= 'a' && exp[i] <= 'z' ||
			exp[i] >= 'A' && exp[i] <= 'Z' ||
			exp[i] >= '1' && exp[i] <= '9')
				postfix += exp[i];
		
		else if(exp[i] == '(')
			st.push('(');
		else if(exp[i] == ')'){
			while(!st.empty() && st.top() != '('){
				postfix += st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while(!st.empty() && priority(exp[i]) <= priority(st.top())){
				postfix += st.top();
				st.pop();
			}
			st.push(exp[i]);
		}
	}

	while(!st.empty()){
		postfix += st.top();
		st.pop();
	}
	return postfix;
}