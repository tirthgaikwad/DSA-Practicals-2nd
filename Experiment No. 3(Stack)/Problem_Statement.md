# Experiment No. 3 — Stack: Well-Parenthesized Expression

## Problem Statement

In any programming language, syntax errors mostly occur due to unbalanced delimiters such as `()`, `{}`, and `[]`.

Write a program using a **Stack** to check whether a given expression is well-parenthesized or not.

## Aim

To write a program using a stack data structure to check whether a given expression is well-parenthesized by ensuring that all delimiters such as `()`, `{}`, and `[]` are properly balanced and nested.

## Objectives

- Perform basic stack operations such as `push`, `pop`, `peek`, and `isEmpty`.
- Use a stack to ensure every opening delimiter has a corresponding closing delimiter in the correct order.
- Identify unbalanced or mismatched delimiters.
- Apply the Stack data structure to solve a real-world programming problem.
- Improve logical thinking and coding skills through practical implementation.

## Outcomes

- Understand and implement stack operations effectively.
- Use a stack to solve delimiter matching problems.
- Identify unbalanced and mismatched delimiters.
- Develop logical thinking and debugging skills.

## Theory

In programming languages, delimiters such as parentheses `()`, curly braces `{}`, and square brackets `[]` are used to define blocks of code, expressions, function calls, array indexing, and other structures.

A **well-parenthesized expression** is one in which every opening delimiter has a corresponding closing delimiter and all delimiters are properly nested.

### Examples

| Expression | Result |
|---|---|
| `([{}])` | Balanced |
| `([)]` | Not Balanced |
| `((()` | Not Balanced |
| `{[()]}` | Balanced |
| `[(])` | Not Balanced |

## Why Stack is Used

A Stack follows the **LIFO (Last In, First Out)** principle.

This makes it suitable for checking balanced delimiters because the most recently encountered opening delimiter must be matched with the next closing delimiter.

### Working

- When an opening delimiter `(`, `{`, or `[` is encountered, it is pushed onto the stack.
- When a closing delimiter `)`, `}`, or `]` is encountered, the top element of the stack is checked.
- If the closing delimiter matches the top opening delimiter, the opening delimiter is popped.
- If it does not match, the expression is not well-parenthesized.
- After processing the complete expression, the stack must be empty for the expression to be balanced.

## Algorithm

1. Initialize an empty stack.
2. Read the given expression.
3. Traverse each character of the expression from left to right.
4. If the character is an opening delimiter `(`, `{`, or `[`, push it onto the stack.
5. If the character is a closing delimiter `)`, `}`, or `]`:
   - Check whether the stack is empty.
   - If the stack is empty, the expression is not balanced.
   - Otherwise, pop the top element.
   - Check whether the popped delimiter matches the current closing delimiter.
6. If the delimiters do not match, the expression is not balanced.
7. After processing all characters:
   - If the stack is empty, the expression is well-parenthesized.
   - Otherwise, the expression is not balanced.
8. Display the result.

## Stack Operations Used

### Push

Adds an opening delimiter to the top of the stack.

### Pop

Removes the top opening delimiter when its matching closing delimiter is found.

### Peek

Checks the top element of the stack without removing it.

### IsEmpty

Checks whether the stack contains any elements.

## Complexity

### Time Complexity

`O(n)`

Each character of the expression is processed once.

### Space Complexity

`O(n)`

In the worst case, all characters may be opening delimiters and stored in the stack.

## Conclusion

Thus, a Stack was successfully used to check whether an expression is well-parenthesized. The LIFO property of the stack makes it suitable for matching opening and closing delimiters in the correct order.

