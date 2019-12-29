#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*
 * Time Complexity: O(len(s))
 * Space Complextiy: O(len(s))
 */
bool isValid(char* s) {
        if(s==NULL) return true;

        const int size = strlen(s);
        if(size==1 || size&1==1 || *s==')' || *s==']' || *s=='}') 
        {
            return false;
        }
    
        char *op = malloc(sizeof(*op) * size);
        int index = 0;
        while(*s)
        {
                char _op = *s;
                if(_op == '(' || _op == '[' || _op == '{') 
                { 
                    op[index++] = _op; 
                }
                else if(op[index-1]+2 != _op && op[index-1]+1 != _op)
                {
                        index = -1;
                        break;
                }
                else
                {
                        --index;
                }
                ++s;
        }
    
        free(op);
        return index == 0;
}

int main(void)
{
	char s[256];
	scanf("%s", s);

	printf("%d\n", isValid(s));
	return 0;
}
