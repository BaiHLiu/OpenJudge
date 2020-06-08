# 's Robot
Time Limit: 3 Sec  Memory Limit: 128 MB


## Description
NASSA's robot landed on Mars. The place where it landed can be modeled as an infinite 2-dimensional plane with perpendicular X-axis and Y-axis coordinates.
The robot continuously reports its location back to Earth, but due to a serious design aw, it only reports the moves it makes instead of the coordinates of its exact location. Some signals went missing and never reached our reception.
In one of the space exploration missions, the robot sent a sequence of signals, which can be represented by a string composed of the following characters: 'U', 'R', 'D', 'L' or '?'. 'U' represents up (Y-coordinate increases by 1), 'R' represents right (X-coordinate increases by 1), 'D' represents down (Y-coordinate decreases by 1), 'L' represents left (X-coordinate decreases by 1) and '?' represents a missed signal. Every character in the sequence is a single step in the corresponding direction. A missed signal is a single step in one of the four directions. The robot is initially at X-coordinate 0 and Y-coordinate 0 before starting to send the given signals.
After sending some signals while the robot is moving, its software crashed and the robot could not do any further moves. The researchers on the base want to limit the space where they can look for the robot. In other words, they want to find the minimum possible X-coordinate, the minimum possible Y-coordinate, the maximum possible X-coordinate and the maximum possible Y-coordinate of the current location of the robot.


## Input
Your program will be tested on one or more test cases. The first line of the input will be a single integer T, the number of test cases (1<=T<=100). Followed by the test cases, each test case is described in one line which contains a non-empty string which consists of up to 100,000 letters, each letter is 'U', 'R', 'D', 'L' or '?'. This string represents the sequence of signals as described above.


## Output
For each test case, print a single line which contains 4 integers separated by a single space, which are the minimum possible X-coordinate, the minimum possible Y-coordinate, the maximum possible X-coordinate and the maximum possible Y-coordinate for the location of the robot after it stopped moving.


## Sample Input
```
3
RUL?R?D
????????
RRRUU

```
## Sample Output
```
-1 -2 3 2
-8 -8 8 8
3 2 3 2

```

## HINT


## Append Code
