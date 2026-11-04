char* convert(char* s, int numRows)
{
    int len = strlen(s);

    if (numRows == 1 || numRows >= len)
        return s;

    char *result = malloc(len + 1);
    int index = 0;

    for (int row = 0; row < numRows; row++)
    {
        int step1 = 2 * (numRows - row - 1);
        int step2 = 2 * row;

        int pos = row;
        int useStep1 = 1;

        while (pos < len)
        {
            result[index++] = s[pos];

            int step = useStep1 ? step1 : step2;

            if (step == 0)
                step = useStep1 ? step2 : step1;

            pos += step;
            useStep1 = !useStep1;
        }
    }

    result[index] = '\0';
    return result;
}