## Roman Number to Integer
- **Goal:** Convert Roman numerals (string) to Decimal (int).
- **Constraint:** Strict $O(1)$ space (No HashMap allowed).
- **Logic:**
    - Use a helper function with `switch` to map values.
    - **Subtraction Rule:** If `Val[i] < Val[i+1]` (e.g., IV), Subtract `Val[i]`.
    - **Addition Rule:** Otherwise, Add `Val[i]`.
- **Complexity:** Time $O(N)$, Space $O(1)$.