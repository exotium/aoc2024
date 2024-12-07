✿ my solutions for advent of code 2024\
✿ compile with ``-Wno-int-conversion -Wno-incompatible-pointer-types -Wno-implicit-int``\
✿ i'm quite busy this month so i probably won't do all days (at least not in time)

---

✿ day 1\
uses qsort() on both lists of numbers, fairly trivial

✿ day 2\
uses the brute force approach, n+1 checks per sequence

✿ day 3\
remembers the last 2 numbers seen and uses an i64 as a kind
of shift register thingy to remember at most 8 characters\
pushes each symbol in the input to the i64 except if the symbol
is a number in which case it pushes 0\
after each push, part of the i64 is compared with numbers
to know if an action needs to be performed\
this was one of my favourite days

✿ day 4\
uses a function that increments the correct counter if
a string or its reverse is found at the right place\
the detection for part 2 calls this function twice
(once for each "MAS" in the cross) and then sets the
least significant bit of part 2's counter to 0\
i.e the counter for the second part is incremented by
2 when a match is found, it is divided by 2 before printing

✿ day 5\
reads the ordering rules, then uses them for the comparison function of qsort()\
the comparison function also sets a variable if the sort has changed the input\
(to know what output the middle element needs to be added to)

✿ day 6\
brute force solution, part 2 may be off by one (or more??)\
but i can't fix it because it works on the test input and my puzzle input\
(which makes it practically impossible to debug)
