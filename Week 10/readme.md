## Tower of Hanoi

The Tower of Hanoi is a puzzle game. It consists of three rods,and a number of disks of different sizes which can slide onto any rod. The puzzle starts with the disks in a neat stack in ascending order of size on one rod, the smallest at the top, thus making a conical shape.

The objective of the puzzle is to move the entire stack to another rod, obeying the following rules:
1. Only one disk may be moved at a time.
2. Each move consists of taking the upper disk from one of the rods and sliding it onto another rod, on top of the other disks that may already be present on that rod.
3. No disk may be placed on top of a smaller disk.

We have a recursive function hanoi() which takes the number of disks, source rod, destination rod and middle rod as inputs
Base case for recursive hanoi()
- n = 1 we just move the disk from the source to destination
- if n > 1 then we move n-1 disks from source rod to middle rod. Then move the nth disk from source to destination
- finally we move n-1 disks from the middle rod to destination and the nth disk is moved to the source rod(this acts a s a middle rod in this case) 
- Each step we print out which disk is moved to which rod. This happend to be the solution for the tower of hanoi problem.