## 문제
- [10448번 유레카 이론](https://www.acmicpc.net/problem/10448)

## C
```cpp
#include <stdio.h>

int eureka[46] = {0};

int main(int argc, char **argv)
{
	int n;
	scanf("%d", &n);

	for(int i=1; i<45; ++i)
		eureka[i] = i*(i+1)/2;

	for(int x=0; x<n; ++x)
	{
		int answer = 0;
		int num;
		scanf("%d", &num);

		for(int i=1; i<45; ++i)
		{
			for(int j=1; j<45; ++j)
			{
				for(int k=1; k<45; ++k)
				{
					if(eureka[i]+eureka[j]+eureka[k] == num)
					{
						answer = 1;
						i=j=k=46;
					}
				}
			}
		}

		printf("%d\n", answer);
	}

	return 0;
}
```

## Time Complexity
- 입력에 따른 추가적인 비용은 없으므로  시간 복잡도는 <b>O(1)</b>가 되지만 굳이 따지자면 O(45^3)가 된다.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [브루트 포스](https://github.com/myoi-oj/baekjoon-oj#bruteforce)
