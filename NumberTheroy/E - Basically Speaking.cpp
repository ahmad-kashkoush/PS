#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    //input
    char m[50];
    int a, b;
    while(scanf("%s %d %d", m, &a, &b)==3){
    // decimal
    long long k=0;
    int j=1;
    for(int i=(int)strlen(m)-1;i>=0;i--){
        if(m[i]<='9')
            k+=(m[i]-'0')*j;
        else
            k+=(m[i]-'A'+10)*j;
        j*=a;
    }
    // to
    int ans[50];
    int idx=0;
    while(k>0){
        ans[idx++]=k%b;
        k=k/b;
    }idx--;
    if(idx>=7)puts(" Error");// puts make you go new line
    else{
        // print the leading values first
        for(int i=6;i>=max(idx, 0);i--)
            printf(" ");
        for(int i=idx;i>=0;i--){
            if(ans[i]<=9)
                printf("%c", ans[i]+'0');
            else
                printf("%c", ans[i]+'A'-10);
            puts("");
        }


    }


    }
    // to
    // print
}
