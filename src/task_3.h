#include <iostream>
#include <stack>
#include <string>

int evaluatePostfixExpression(const std::string& expression) {
    std::stack<int> operandStack;

    for (char c : expression) {
        if (isdigit(c)) {
 
            operandStack.push(c - '0');
        } else if (c == '+' || c == '-' || c == '*') {
    
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            int result;
            if (c == '+') {
                result = operand1 + operand2;
            } else if (c == '-') {
                result = operand1 - operand2;
            } else if (c == '*') {
                result = operand1 * operand2;
            }

            operandStack.push(result);
        }
    }

    return operandStack.top();
}

int main() {
    std::string expression;
    std::cout << "Enter an expression in postfix notation: ";
    std::getline(std::cin, expression);

    int result = evaluatePostfixExpression(expression);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
