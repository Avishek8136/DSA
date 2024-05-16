def isValidParenthesis(s: str) -> bool:
    stack = []
    opening = ['(', '{', '[']
    for i in s:
        if i in opening:
            stack.append(i)
        else:
            if len(stack) != 0:
                top = stack[-1]
                if (top == '(' and i == ')') or (top == '{' and i == '}') or (top == '[' and i == ']'):
                    stack.pop()
                else:
                    return False
            else:
                return False
    return len(stack) == 0 