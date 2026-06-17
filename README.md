# Daily DSA (LeetCode) — Practice Log

This repository is my daily log for solving LeetCode problems and improving my patterns, complexity intuition, and implementation quality.

---

## How I practice (daily routine)

1. **Pick 1–3 problems/day** (mix easy/medium; include 1 revisit for weak patterns).
2. **Before coding**:
   - Identify the likely **pattern** (e.g., sliding window, two pointers, BFS/DFS, DP state).
   - Write a quick **approach sketch** (2–5 bullets).
3. **Implement** using a consistent template:
   - Minimal helper functions
   - Clear variable names
   - Correct edge-case handling
4. **Analyze**:
   - Time complexity
   - Space complexity
   - What makes the approach correct?
5. **After coding**:
   - Note the pattern takeaway
   - Mark if I want to revisit this later

---

## Problem analysis framework

For each problem, I record the following:

- **Problem**: title + LeetCode #
- **Difficulty**: Easy / Medium / Hard
- **Core pattern**: (choose from my list below)
- **Key idea**: what actually solves it
- **Approach**: brief steps
- **Complexity**: `Time: ...`, `Space: ...`
- **Edge cases**: 2–5 important ones
- **Gotchas**: common mistakes I made / avoided
- **Notes for future**: what to remember

---

## Patterns I’m building (checklist)

### Arrays / Strings
- Two Pointers
- Sliding Window
- Prefix Sum
- Sorting + Greedy
- Binary Search on answer

### Linked Lists
- Fast/Slow pointers
- In-place reversal
- Cycle detection

### Trees / Graphs
- BFS / DFS
- Tree construction / traversal

### Dynamic Programming
- 1D DP
- 2D DP
- DP on states / transitions

### Bit Manipulation
- Counting bits
- XOR tricks

---

## My current solved set (from this workspace)

Below is a snapshot of problem files present in the repo. I keep expanding this daily.

### Arrays / Two Pointers / Sorting
- **88. Merge Sorted Array**
- **977. Squares of a Sorted Array**
- **189. Rotate Array**
- **31. Next Permutation**
- **34. Find First and Last Position of an Element in Sorted Array**
- **33. Search in Rotated Sorted Array**
- **35. Search Insert Position**
- **26. Remove Duplicates from Sorted Array**
- **27. Remove Element**
- **455. Assign Cookies**
- **394/??** (see files: cookies, lemonade, etc.)

### Strings / Hashing / Greedy
- **389. Find the Difference**
- **678. Valid Parenthesis String**
- **3612. Process Strings with Special Operations I**
- **3614. Process String with Special Operations II**
- **3838. Weighted Word Mapping**

### Greedy / DP classics
- **55. Jump Game**
- **45. Jump Game II**
- **70. Climbing Stairs**
- **860. Lemonade Change**
- **50. Pow(x, n)**

### DP / Combinatorics / Subsets
- **78. Subsets**
- **39. Combination Sum**
- **1423. Maximum Points You Can Obtain from Cards**
- **410. Split Array Largest Sum**

### Linked List
- **24. Swap Nodes in Pairs**
- **2130. Maximum Twin Sum of a Linked List**
- **445. Add Two Numbers II**

### Math / Bit / Misc
- **136. Single Number**
- **137. Single Number II**
- **260. Single Number III**
- **191. Number of 1 Bits**
- **3370. Smallest Number With All Set Bits**

> Note: this list is auto-inferred from file names currently present in the repo; I’ll update the log section with per-day analysis.

---

## Daily log format (copy/paste)

Use this template for each day:

### Day YYYY-MM-DD
- Problems:
  - [ ] #_ _Title_ — Pattern: _..._
  - [ ] #_ _Title_ — Pattern: _..._
- Approach sketch:
  - ...
- Complexity:
  - Time: ...
  - Space: ...
- Edge cases:
  - ...
- Takeaway:
  - ...

---

## Quality checklist (before submitting / after AC)

- [ ] Correct for minimum/maximum inputs
- [ ] Correct off-by-one handling (indices, window bounds)
- [ ] Complexity matches the intended pattern
- [ ] No unnecessary allocations (where applicable)
- [ ] Clean and readable implementation

---

## Folder / file naming

- Each solution is stored as `leetcode_<id>_<title>.cpp` (or a similar consistent name).
- I keep the LeetCode file number in the filename so I can quickly build a pattern map.

