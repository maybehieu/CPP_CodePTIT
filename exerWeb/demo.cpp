#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[5005] = {};
        scanf("%s", &s);
        int check = 1;
        for (int i = 0; i <= (strlen(s) - 1) / 2; i++)
        {
            if (s[i] != s[strlen(s) - i - 1])
            {
                check = 0;
                break;
            }
        }
        if (check)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}