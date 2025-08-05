#include<stdio.h>
#include<string.h>
char s[1000123];
int cnt[30];
int main()
{
   scanf("%s", s);
   int n = strlen(s);
   for ( int i = 0; i < n; i++ ) {
       cnt[s[i]-'A']++;
   }
   int odd = 0;
   char oddChar;
   for ( int i = 0; i < 26; i++ ) {
       if(cnt[i] % 2 == 1) {
           odd++;
           oddChar = i + 'A';
           cnt[i]--;
       }
   }
   int l = 0, r = n-1;
   for ( int i = 0; i < 26; i++ ) {
       if(cnt[i] % 2 == 0) {
           int halfCount = cnt[i] / 2;
           for ( int j = 0; j < halfCount; j++ ) {
               s[l] = (i + 'A');
               s[r] = (i + 'A');
               l++, r--;
           }
       }
   }
   if(odd > 1) {
       printf("NO SOLUTION\n");
   }
   else {
       if(odd == 1) s[(n/2)] = oddChar;
       for(int i = 0; i < n; i++) printf("%c", s[i]);
   }
   return 0;
}
