# 多少张钞票
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
    客户去商店买东西时，不超过100美金的账单喜欢用现金支付。商店喜欢用最少的钞票给付客户的找零。请你编写一个程序帮助商店计算出：当客户买了x元商品给了一张100美元的钞票后，商店应该付给客户多少张20美元、10美元、5美元和1美元的钞票，使得钞票总数最少。假设不存在其他面值的钞票，也不会有几角几分的价格，商店的各种钞票总是够用的。

## Input
输入一个整数x，0<x<100。

## Output
按顺序输出20美金、10美金、5美金和1美金面值的钞票张数。输出格式见sample。

## Sample Input
```
7

```
## Sample Output
```
$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3

```

## HINT
当能支付大面值钞票时不要支付更小面值的钞票，才能满足钞票总数最少，注意scanf()格式的控制。