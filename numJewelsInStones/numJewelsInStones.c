int numJewelsInStones(char* J, char* S) {
    
    int jhold = -1;
    int i = -1;
    int total = 0;
    
    while (J[++jhold])
    {
        i = -1;
        while (S[++i])
        {
            if (S[i] == J[jhold])
                total++;
        }
    }
    return (total);
}

/*
//TEST CODE
int     main()
{
    char *J = "aA";
    char *S = "aAAbbbb";
    numJewelsInStones(J, S);
    return (0);
}
*/
