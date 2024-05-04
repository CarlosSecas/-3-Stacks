// headers to include functions from c++ library
#include <iostream>
#include <stack> 
#include <string>
// create a function named "checkBalance" to check if the parentheses in a given string
//  are balanced.
bool checkBalance(const std::string& expression) {
    // create a stack to store the opening parenthesis from the user
    std::stack<char> stack;
    // using a for each loop to iterate each character in the expression.
    for (char c : expression) {
        // if the charcater is an openining parenthesis, push it into the stack
        if (c == '(') {
            stack.push(c);
        // if the character is a closing parenthesis
        } else if (c == ')') {
            // if the stack is empty or the top of the stack is not an
            // opening parenthesis then the expression is not balanced.
            if (stack.empty() || stack.top() != '(') {
                return false;
            }
            // if the above if statment doesn't exceute then pop the top
            // element from the stack
            stack.pop();
        }
    }
    // if the stack is empty then the expression is balanced.
    return stack.empty();
}

int main() {
    std::string expression;
    std::cout << "Enter expression\n";
    // read the entire line of input 
    std::getline(std::cin, expression);
    // variable to hold the result from the called in function "checkBalance"
    // from users expression.
    bool result = checkBalance(expression);
    // if statments to determine with output will be printed if balnced or not balanced.
    if (result) {
        std::cout << "Expression is balanced.\n";
    } else {
        std::cout << "Expression is not balanced.\n";
    }

    return 0;
}
  
