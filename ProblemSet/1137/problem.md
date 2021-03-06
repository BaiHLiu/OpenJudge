# 编写函数：String to Double (I) (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
让我们来编写一个程序，按照指定的转换规则，把一个字符串里的浮点数提取出来。
-----------------------------------------------------------------------------
编写函数strToDouble()：
原型：double strToDouble(char str[]);
功能：按照指定的转换规则，把str[]中的串转换成double类型的浮点数，并返回。
函数的调用格式见“Append Code”。
-----------------------------------------------------------------------------
Invalid Word（禁用单词）错误：在解决这个题目时，某些关键词是不允许被使用的。如果提交的程序中包含了下列的关键词之一，就会产生这个错误。
被禁用的库函数：sscanf()、atoi()、atof()、atol()、strtod()、strtold()、strtof()、strtol()、strtoul()等。

## Input
输入是多行，每行一个字符串s，至EOF结束。每个串s不超过10个字符，并且s转换后的浮点数不会超出double类型的表示范围。
s的转换规则是：所有数字字符（"0"～"9"）、小数点（"."）和仅能出现在s首位的符号位（"+"和"-"）转换为一个浮点数。因此，如果一个串中不含有合法的浮点数格式，那么它只能是0。
对于一个浮点数“x.y”来说，所有无意义的"0"都是可以省略的，比如“0x.y00”和“x.y”就是等值的。因此，当x==0时，“.y”和“x.y”是等值的；当y==0时，“x.”、“x”和“x.y”是等值的。
注意：在s的转换规则中，不包括科学计数法表示的浮点数。

## Output
输出为多行，与输入对应。每行输出是串s转换后的一个浮点数，且不输出无意义的0。

## Sample Input
```
123ab.4
-a.123-4
+234.33
+...33a3
-00.1.3.3

3.123a5.2
```
## Sample Output
```
123.4
-0.1234
234.33
0.333
-0.133
0
3.12352
```

## HINT
“Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
```
