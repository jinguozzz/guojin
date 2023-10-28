#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>
void tihuan( char *str) { 
    int len = strlen(str);  
    int newlen = len + 5; // 加上替换后的 "&nbsp" 长度  
    char *newstr = (char *)malloc(newlen * sizeof(char));  
    int j = 0;  int i;
    for (i = 0; i < len; i++) {  
        if (str[i] == ' ') {  
            newstr[j++] = '&';  
            newstr[j++] = 'n';  
            newstr[j++] = 'b';  
            newstr[j++] = 's';  
            newstr[j++] = 'p';
        } else {  
            newstr[j++] = str[i];  
        }  
    }  
    newstr[j] = '\0'; // 添加字符串结束符  
    strcpy(str, newstr); // 将新字符串复制回原字符串    
 char *gets(char *str);
 }  
int main() {  
    char a[100];  
    printf("请输入一个字符串：");  
	gets(a);
    tihuan(a); // 替换空格  
    printf("替换后的字符串：%s", a);   
    return 0;  
}

