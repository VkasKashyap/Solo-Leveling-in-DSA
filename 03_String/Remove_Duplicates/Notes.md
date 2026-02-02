# ⚔️ Quest: Remove Duplicates (HashMap Strategy)

### 💡 Intuition
We need to filter a stream of characters, keeping only the first occurrence of each.
Just like a "Guest List" at a party:
- When a guest arrives, we check the list (`Map`).
- If their name is NOT on the list: "Welcome!" (Add to result) and write their name down.
- If their name IS on the list: "You are already inside." (Skip/Duplicate).

### ⚙️ The HashMap Logic
We use an `unordered_map<char, bool>`.
1.  Iterate through the string.
2.  For every character `c`, check `map.find(c)`.
3.  If it returns `map.end()`, it's unique.
    - Append to string.
    - Insert into map.
4.  This approach is versatile and works even if characters are not standard ASCII (e.g., Unicode symbols).

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Average case for HashMap lookups is $O(1)$, so we iterate $N$ times.
- **Space Complexity:** $O(K)$ — Where $K$ is the number of *unique* characters stored in the map.