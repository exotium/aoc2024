✿ my solutions for advent of code 2024\
✿ compile with ``-Wno-int-conversion -Wno-incompatible-pointer-types -Wno-implicit-int``\
✿ i only did the first 6 days because i didn't have time any of the following days

---

✿ day 1\
uses qsort() on both lists of numbers, fairly trivial

✿ day 2\
uses the brute force approach, n+1 checks per sequence

✿ day 3\
remembers last 2 numbers and uses an i64 as a kind
of shift register to remember at most 8 characters\
pushes each symbol in the input to the i64 except if the symbol
is a number in which case it pushes 0\
after each push, the state is checked by comparing the i64
with several integers

✿ day 4\
main logic is a function incrementing a counter if
a string or its reverse is found at the right place\
the detection for part 2 calls this function twice
(once for each "MAS" in the cross)\
then sets the least significant bit of part 2's counter to 0\
the counter for part 2 is divided by 2 before printing

✿ day 5\
reads the ordering rules, then uses them for the comparison function of qsort()\
the comparison function also sets a variable if the sort has changed the input\
(to know what output the middle element needs to be added to)

✿ day 6\
brute force solution, part 2 may be off by one (or more??)\
but i can't fix it because it works on the test input and my puzzle input\
(which makes it practically impossible to debug)
