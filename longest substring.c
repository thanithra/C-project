int lengthOfLongestSubstring(char* s) {
    int last[256];
    int left = 0, max = 0, i;

    for (i = 0; i < 256; i++)
        last[i] = -1;

    for (i = 0; s[i] != '\0'; i++) {
        if (last[(unsigned char)s[i]] >= left)
            left = last[(unsigned char)s[i]] + 1;

        last[(unsigned char)s[i]] = i;

        if (i - left + 1 > max)
            max = i - left + 1;
    }

    return max;
}int lengthOfLongestSubstring(char* s) {
    int last[256];
    int left = 0, max = 0, i;

    for (i = 0; i < 256; i++)
        last[i] = -1;

    for (i = 0; s[i] != '\0'; i++) {
        if (last[(unsigned char)s[i]] >= left)
            left = last[(unsigned char)s[i]] + 1;

        last[(unsigned char)s[i]] = i;

        if (i - left + 1 > max)
            max = i - left + 1;
    }

    return max;
}