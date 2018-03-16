

// convertToRoman:
//   In:  val: value to convert.
//        res: buffer to hold result.
//   Out: n/a
//   Cav: caller responsible for buffer size.

void convertToRoman (unsigned int val, char *res) {
    char *huns[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int   size[] = { 0,   1,    2,     3,    2,   1,    2,     3,      4,    2};

    //  Add 'M' until we drop below 1000.

    while (val >= 1000) {
        *res++ = 'M';
        val -= 1000;
    }

    // Add each of the correct elements, adjust as we go.

    strcpy (res, huns[val/100]); res += size[val/100]; val = val % 100;
    strcpy (res, tens[val/10]);  res += size[val/10];  val = val % 10;
    strcpy (res, ones[val]);     res += size[val];

    // Finish string off.

    *res = '\0';
}
