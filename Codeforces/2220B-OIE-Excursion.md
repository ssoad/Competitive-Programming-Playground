# 2220B - OIE Excursion

## Problem Summary
Hector needs to pass through a line of n volunteers with timers. Each volunteer i watches position i when their timer shows 0. Volunteers have timers that start at value `a[i]` and increment every second, wrapping around at m. Hector can move left, right, or stay in place. We need to determine if Hector can reach position n+1 without being caught.

## Key Insight
The optimal strategy is for Hector to wait `t₀` seconds at position 0, then move right every second. Hector reaches position i at second `t₀ + i`. He's caught if the timer at position i shows 0 at that time:
- Timer at position i, second `t₀ + i`: `(a[i] + t₀ + i) % m`
- Caught if: `(a[i] + t₀ + i) % m == 0`
- Which means: `t₀ ≡ -a[i] - i (mod m)` is a "bad" wait time

## Algorithm
1. For each position i (1-indexed), calculate the "bad" wait time: `t₀ ≡ -a[i] - (i+1) (mod m)`
2. Store all distinct bad wait times in a set
3. If the number of distinct bad times < m, there exists at least one good wait time → Answer is YES
4. Otherwise, all possible wait times are bad → Answer is NO

**Time Complexity**: O(n log n) per test case (set operations)
**Space Complexity**: O(n)

## Solution Approach
- Use modular arithmetic carefully with negative numbers: `((-value) % m + m) % m`
- Set automatically handles duplicates, counting only distinct bad times
- Compare set size with m to determine answer

## Test Cases
| Case | Details | Bad Times | m | Result |
|------|---------|-----------|---|--------|
| 1 | n=8, m=5 | {3,4,2} | 5 | YES ✓ |
| 2 | n=6, m=2 | {0} | 2 | YES ✓ |
| 3 | n=6, m=2 | {0,1} | 2 | NO ✓ |

## Key Observations
- Greedy strategy (constant speed) is optimal since all wait times are equivalent under modular arithmetic
- Pigeonhole principle: if m distinct bad residues exist, at least one good residue exists
- Red nodes (position 0 and n+1) are always safe
