# 编写函数：求最大公约数gcd()和最小公倍数lcm() (Append Code)
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
辗转相除法，也称欧几里得算法，是求最大公约数的算法。辗转相除法首次出现于欧几里得的《几何原本》（第VII卷，命题i和ii）中，而在中国则可以追溯至东汉出现的《九章算术》。
两个整数的最大公约数(亦称公约数)是能够同时整除它们的最大的正整数。辗转相除法基于如下原理：两个整数的最大公约数等于其中较小的数和两数的差的最大公约数。例如，252和105的最大公约数是21（252 = 21 × 12；105 = 21 × 5）；因为252 − 105 = 147，所以147和105的最大公约数也是21。在这个过程中，较大的数缩小了，所以继续进行同样的计算可以不断缩小这两个数直至其中一个变成零。这时，所剩下的还没有变成零的数就是两数的最大公约数。
例如，计算a = 1071和b = 462的最大公约数的过程如下：从1071中不断减去462直到小于462（可以减2次，即商q0 = 2），余数是147：
1071 = 2 × 462 + 147.
然后从462中不断减去147直到小于147（可以减3次，即q1 = 3），余数是21：
462 = 3 × 147 + 21.
再从147中不断减去21直到小于21（可以减7次，即q2 = 7），没有余数：
147 = 7 × 21 + 0.
此时，余数是0，所以1071和462的最大公约数是21。
-----------------------------------------------------------------------------
要求编写两个函数：
1. 求最大公约数的函数gcd()。gcd()的返回值是两个参数的最大公约数，函数原型如下：
int gcd(int, int);
2. 求最小公倍数的函数lcm()。lcm()的返回值是两个参数的最小公倍数，函数原型如下：
int lcm(int, int);
函数gcd()和lcm()的调用格式见“Append Code”。



## Input
输入为多行，每行有一对非负整数a,b，且a*b不会超出int类型的数据范围。输入至EOF结束。

## Output
每行输出一对a,b的最大公约数和最小公倍数，顺序与输入对应。

从整除定义出发：若a整除b（b除以a没有余数），则b是a的倍数，a是b的约数，这里要求b不为0。因此0是任意整数的倍数（任意整数都是0的约数），但是0不能是约数。

## Sample Input
```
1 1
2 3
2 2
3 2
4 6
7 5
12 6
18 9
24 36
```
## Sample Output
```
1 1
1 6
2 2
1 6
2 12
1 35
6 12
9 18
12 72

```

## HINT
 参看系统首页上的“Append Code”使用说明，讨论版（Web Board）上也有。

## Append Code
### append.c
```c
int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
```
### append.cc
```cpp
int main()
{
    int a, b;
    while(cin >> a >> b)
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    return 0;
}
```