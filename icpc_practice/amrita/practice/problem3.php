Escape from the Mines

It was after nightfall when they had entered the Mines. They had been going for several hours with only brief halts, when Gandalf came to his first serious check. Before him stood a wide dark arch opening into three passages: all led in the same general direction, eastwards; but the left-hand passage plunged down, while the right-hand climbed up, and the middle way seemed to run on, smooth and level but very narrow. - The Fellowship of the Ring are lost in the Mines.

The Mines of Moria are a true testament of Dwarvish genius. And the Fellowship of the Ring are lost in the maze of rooms, halls and caverns. You have managed to acquire a copy of the blueprints, and if only you were part of the Fellowship, Gandalf need not have had to face the Balrog!

In this problem, we consider the Mines as consisting of rectangular rooms with their sides aligned parallel to the X (West-East) and Y (South-North) axes. Some rooms are situated within other rooms. The boundaries of any two rooms have no point in common. The rooms are numbered 0 to N-1. Your task is to determine for each room i, which room would you enter if you exit room i. If you exit into the open, output -1.

For example, if the blueprints of the Mines looked like:
        --
       |  |
       |  |
        --3

    ------------
   |   ----     |
   |  |    |    |
   |  | [] |    |
   |  |  2 |    |
   |   ----1    |
   |            |
   |            |
    ------------0

Then, your should determine that:
Room 0 exits into the open (-1)
Room 1 exits into Room 0
Room 2 exits into Room 1
Room 3 exits into the open (-1)

Input (STDIN):
The first line contains an integer N followed by N lines. The i'th line defines the coordinates of the i'th room in the mines: x1_i, y1_i, x2_i, y2_i, where (x1_i, y1_i) are the coordinates of the southwest corner and (x2_i, y2_i) are the coordinates of the northeast corner of the i'th room.


Output (STDOUT):
Output N lines, the i'th line containing the number of the room into which the i'th room exits. Output -1 if the i'th room exits into the open.


Contraints:
1 <= N <= 100,000
0 <= x1_i < x2_i <= 1,000,000,000
0 <= y1_i < y2_i <= 1,000,000,000
The borders of no two rooms have any point in common.


Sample Input:
4
0 0 10 10
2 3 7 8
3 4 5 6
12 10 13 15

Sample Output:
-1
0
1
-1

Explanation:
Given in the diagram.

Time limit: 5s
Memory limit: 64MB
