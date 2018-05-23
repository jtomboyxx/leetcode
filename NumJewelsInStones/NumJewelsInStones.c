/*
Finished in 2 ms
Count : 4
*/
int numJewelsInStones(char* J, char* S) {
    char *p_JewelsTemp = J;
    char *p_StonesTemp;
    int dCount = 0;
    
    while(*p_JewelsTemp != '\0')
    {
        p_StonesTemp = S;
        while(*p_StonesTemp != '\0')
        {
            if(*p_JewelsTemp == *p_StonesTemp)
            {
                dCount++;
            }
            p_StonesTemp++;
        }
        p_JewelsTemp++;
    }
    
    return dCount;
}

int main()
{
    int dCount = 0;
    
    dCount = numJewelsInStones("aA", "aaaZZZZZA");
    
    printf("Count : %d\n", dCount);
    
    return 0;
}

