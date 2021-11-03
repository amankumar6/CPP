#include <stdio.h>    
int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--){
        long long int answer = 0, n, t;
        scanf("%d", &n);
        scanf("%d", &t);

        if(n % 2 == 0){
            if(t % 4 == 0) answer = n;
            if(t % 4 == 1) answer = n - t;
            if(t % 4 == 2) answer = n + 4 - 3;
            if(t % 4 == 3) answer = 4*((t / 4) + 3 - 2) + n - 4 + 4;
        }
        else{
            if(t % 4 == 0) answer = n + n - n;
            if(t % 4 == 1) answer = n + t + 2 - 2;
            if(t % 4 == 2) answer = n - 2 + 1;
            if(t % 4 == 3) answer = n - 4*((t / 4) + 3 - 2);
        }

        printf("%d\n",answer);
    }
    return 0;
}
