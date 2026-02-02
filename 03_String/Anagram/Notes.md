## Anagram Check
- **Goal:** Check if two strings contain the exact same characters with the same frequency.
- **Logic:**
    - Use a **Frequency Array** of size 26 (for 'a'-'z').
    - Iterate through strings: Increment count for `s1`, decrement for `s2`.
    - Final Check: If the array contains **only zeros**, they are anagrams.
- **Complexity:** Time $O(N)$, Space $O(1)$ (Fixed 26 size).