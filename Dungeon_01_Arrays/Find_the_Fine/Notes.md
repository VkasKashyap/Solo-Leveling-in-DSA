# ⚔️ Quest: Total Fine (Odd/Even Logic)

### 💡 Intuition
We need to calculate fines based on the date. 
- If `date` is **Even**, cars with **Odd** numbers are fined.
- If `date` is **Odd**, cars with **Even** numbers are fined.

Instead of writing two separate loops, we can notice a pattern: A fine is collected whenever the **parity** (even/odd status) of the date and the car number is **different**.

### ⚙️ Approach
1. Initialize `totalFine = 0`.
2. Iterate through the `car` array.
3. Check `if (date % 2 != car[i] % 2)`.
   - This single condition covers both cases (Even Date/Odd Car AND Odd Date/Even Car).
4. Add `fine[i]` to total if the condition is met.

### ⏱️ Complexity
- **Time:** $O(N)$ — Single pass.
- **Space:** $O(1)$ — No extra storage.