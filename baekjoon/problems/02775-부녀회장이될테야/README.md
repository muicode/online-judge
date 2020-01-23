  ## 문제
- [2775번 부녀회장이 될테야](https://www.acmicpc.net/problem/2775)

## C
```cpp
#include <stdio.h>
int main(void)
{
  int a[15][15] = {{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}};
  for(int i=1; i<15; ++i) 
  {
    a[i][0] = 1;
    for(int j=1; j<15; ++j) 
    {
      a[i][j] = a[i-1][j] + a[i][j-1];
    }
  }

  int t, x, y;
  scanf("%d", &t);

  while(t--)
  {
    scanf("%d %d", &x, &y);
    printf("%d\n", a[x][y-1]);
  }
  return 0;
}
```

## Time Complexity
- 시간 복잡도는 <b>O(1)</b>.

## Space Complexity
- dp풀이로 입력의 최대값으로 2차원 배열을 선언. 입력에 따른 추가적인 공간은 필요하지 않으므로
최종 공간 복잡도는 <b>O(1)</b>가 된다.

## Tags
- [다이나믹 프로그래밍](https://github.com/myoi-oj/baekjoon-oj#dp)
