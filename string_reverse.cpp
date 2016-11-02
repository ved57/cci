#include<stdio.h>

void reverse(char s[], int n)
{
    char temp;
    int i;
    for (i=0;i<n/2;i++)
    {
        temp = s[i];
        s[i] = s[n-1-i];
        s[n-i-1] = temp;
    }
}


void reverse_rec(char s[],int start, int end)
{
    if (start>end)return;
    char temp;
    temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    reverse_rec(s,start+1,end-1);
}

int main()
{
    char s[]= "Hellob";
    int n = (sizeof s/sizeof s[0])-1;
    //printf("\n n value is %c",s[2]);
    reverse_rec(s,0,n-1);
    printf("%s",s);
    return 0;
}
