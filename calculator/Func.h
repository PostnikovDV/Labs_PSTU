#pragma once
#include <iostream>
#include <stack>
#include <string>
std::stack<char> st;
std::stack<double> stlet;
double a, b;
int k = 0, i, n;
void st_oper(char s)
{
    if (stlet.size() > 1)
    {
        a = stlet.top();
        stlet.pop();
        b = stlet.top();
        stlet.pop();

        if (s == '+')
        {
            b += a;
            st.pop();
            stlet.push(b);
        }
        else  if (s == 'p')
        {
            b *= a;
            st.pop();
            stlet.push(-b);
        }
        else if (s == 's')
        {
            b /= a;
            st.pop();
            stlet.push(-b);
        }
        else if (s == '-')
        {
            b -= a;
            st.pop();
            stlet.push(b);
        }
        else  if (s == '*')
        {
            b *= a;
            st.pop();
            stlet.push(b);
        }
        else  if (s == '/')
        {
            b /= a;
            st.pop();
            stlet.push(b);
        }
    }
}
