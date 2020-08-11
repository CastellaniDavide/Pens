/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 1000000

// input data
int N, i;
int pens[MAXN];

int main()
{
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &pens[i]));
    int res=0;
    for(int i=0; i<N; i++)
    {
        if(pens[i]==0)
        {
            if(i-1>=0)
            {
                if(pens[i-1]>1)
                {
                    pens[i]=1;
                    pens[i-1]--;
                }
            }
            if(pens[i]==0)
            {
                if(i+1<=N-1)
                {
                    if(pens[i+1]>1)
                    {
                        pens[i]=1;
                        pens[i+1]--;
                    }

                }
            }
        }
    }
    // insert your code here
    for(int i=0; i<N; i++)
    {
        if(pens[i]==0)
            res++;
    }
    printf("%d\n", res); // change 42 with actual answer
    return 0;
}
