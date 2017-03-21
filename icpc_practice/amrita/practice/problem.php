You and your opponent play a game. There are N "cards" that each have an attack value. 
The cards are numbered 1 to N in increasing order of attack value.
In general, when two cards face off against each other,
 the one with the higher attack wins. 
However, there are a few exceptions. 
You are given a list of these "M" exceptional pairs, where the card of lesser attack value
 defeats the one with higher attack.

You first choose a card to use to attack. 
Your opponent then chooses his card from the remaining. 
If you defeat him, you get a score of 2. 
If you don't defeat him, then you have exactly one more chance to pick another card. 
If this other card defeats him, then you get a score of 1, else you get a score of 0.

Given the value of N, and the set of M exceptions, 
determine the maximum score you can achieve. 
Further, if you can achieve a score of 2, 
also output any card that allows you to achieve this score, 
irrespective of which card your opponent chooses.


Input:
The first line will consist of the integer T, the number of test-cases.
Each test case begins with a single line containing two integers N and M.
This is followed by M lines consisting of 2 integers each x and y, 
denoting that x and y are an anomalous pair.

Output:
For each test-case, output a single line either
2 A, if you can defeat any card the opponent chooses if you pick card A,
1, if you can choose a card such that even if the opponent chooses a card to defeat you, you can choose a card to defeat his chosen card,
0, if none of the above two options are possible for all possible choices of your card(s).

Constraints:
T <= 15
3 <= N <= 1000000
0 <= M <= min(N(N-1)/2, 300000)
1 <= x < y <= N for all the anomalous pairs (x,y)
The sum of M over all test-cases in a single test file will not exceed 300000.

Sample Input:
2
3 0
3 1
1 3

Sample Output:
2 3
1

Explanation:
In the first case, card 3 can beat both cards 1 and 2. So you just choose card 3.
In the second case, card 1 beats 3 which beats 2 which beats 1. No matter which card you choose, your opponent can pick the one which defeats yours, but then you can pick the remaining card and defeat his.