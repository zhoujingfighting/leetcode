#include <_ctype.h>
#include <iostream>
#include <stack/stack.h>
#include <stack>
std::string simplifyPath(std::string path) {
  std::stack<char> result;
  std::string tmp = "";
  for (int i = 0; i < path.size(); i++) {
    if (path[i] == '/') {
      if (!result.empty() && result.top() == '/')
        continue;
      else if (!result.empty() && result.top() == '.')
        result.pop();
      else {
        if (i != path.size() - 1 || result.empty())
          result.push(path[i]);
      }

    } else if (path[i] == '.') {
      if (!result.empty() && result.top() == '.') {
        result.pop();
        result.pop();
        while (!result.empty() && result.top() != '/') {
          result.pop();
        }
      } else
        result.push(path[i]);
    } else
      result.push(path[i]);
  }

  while (!result.empty()) {
    tmp.insert(0, std::string(1, result.top()));
    result.pop();
  }
  return tmp;
}

bool isValidParesis(std::string input) {
  std::stack<char> tmp;
  for (auto ch : input) {
    switch (ch) {
    case '(':
    case '[':
    case '{':
      tmp.push(ch);
      break;
    case '}':
      if (!tmp.empty() && tmp.top() == '{')
        tmp.pop();
      break;
    case ']':
      if (!tmp.empty() && tmp.top() != '[')
        tmp.pop();
      break;
    case ')':
      if (!tmp.empty() && tmp.top() != '(')
        return false;

      break;
    }
  }

  return tmp.empty();
}
