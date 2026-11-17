# Algorithms-Implementation
A collection of essential algorithms and their implementations in C++

-----------------------------------------------------------------------------------------------------------------
========================= "1: Longest Common Subsequence using Dynamic programming" =========================
-----------------------------------------------------------------------------------------------------------------
A = [1, 0, 1, 1, 1, 0]
B = [0, 1, 1, 0]

Ask yourself, "What's the longest common part between just the first character of sentence A and the first character 
of sentence B?" If they match, the answer is 1. If not, it's 0.

Grow one step at a time: Now add the next character from sentence A. Ask: "Does this new character match the last
character I was looking at in sentence B?"

If yes: great, it's part of the common part. So the answer is "whatever the answer was one step back in both s
entences, plus one."

If no" this character doesn't help. So the answer is "whichever is bigger: the answer from the previous row,
or the answer from the previous column." You're basically saying "I'll ignore this character in one of the two
sentences and see which gives me a longer common part."

Repeat this for every pair of positions, filling in a grid from the top-left corner to the bottom-right.
Each cell only ever looks at three neighbors: the one above, the one to the left, and the one diagonally up-left.
-----------------------------------------------------------------------------------------------------------------
