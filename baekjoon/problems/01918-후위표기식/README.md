## 문제
- [1918번 후위표기식](https://www.acmicpc.net/problem/1918)

## C++
```cpp
#include <cstdio>
#include <stack>

#define LEN 101

using namespace std;

int priority(char ch)
{
	switch(ch)
	{
		case '+': case'-':
			return 2;
		case '*': case'/':
			return 3;
		case '(': case ')':
			return 1;
		default:	
			return 0;
	}

}

/*
 * m = number of operations
 */
int main(int argc, char **argv)
{
	stack<char> opstack;
	char str[LEN] = {0};
	char result[LEN] = {0};
	int index = 0;
	scanf("%s", str);

	for(int i=0; str[i]; ++i)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			//printf("%c", str[i]);
			result[index++] = str[i];
		}
		else if(str[i]=='(')
		{
			opstack.push('(');
		}
		else if(str[i]==')')
		{
			char op = opstack.top();
			while(op!='(')
			{
				//printf("%c", op);
				result[index++] = op;
				opstack.pop();
				op = opstack.top();
			}
			opstack.pop();
		}
		else if(opstack.empty())
		{
			opstack.push(str[i]);
		}
		else if(priority(opstack.top()) < priority(str[i]))
		{
			opstack.push(str[i]);
		}
		else
		{
			while(!opstack.empty() && priority(opstack.top()) >= priority(str[i]))
			{
				//printf("%c", opstack.top());
				result[index++] = opstack.top();
				opstack.pop();
			}
			opstack.push(str[i]);
		}
	}

	while(!opstack.empty())
	{
		//printf("%c", opstack.top());
		result[index++] = opstack.top();
		opstack.pop();
	}
	result[index] = '\0';
	printf("%s\n", result);

	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(n)</b>.

## Space Complexity
- 숫자들을 제외한 모든 연산자와 괄호들이 대부분 스택에 추가되기 때문에 공간 복잡도는  <b>O(number of op)</b>가 될거라고 생각한다.

## Tags
- [스택](https://github.com/myoi-oj/baekjoon-oj#stack)
