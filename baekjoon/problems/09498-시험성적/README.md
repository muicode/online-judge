  ## 문제
- [9498번 시험 성적](https://www.acmicpc.net/problem/9498)

## C
```cpp
#include <stdio.h>

int main(void)
{
	int score;
	scanf("%d", &score);
	printf("%c\n", (score>=90) ? 'A' :
	               (score>=80) ? 'B' :
		       (score>=70) ? 'C' :
		       (score>=60) ? 'D' : 'F');
	return 0;
}
```

## Time Complexity
- 시간 복잡도는 <b>O(1)</b>.

## Space Complexity
- 공간 복잡도는 <b>O(1)</b>.

## Tags
- [구현](https://github.com/myoi-oj/baekjoon-oj#implementation)
