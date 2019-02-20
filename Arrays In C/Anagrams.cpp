    # include <stdio.h>
    # define CH 256
    int anag(char *set1, char *set2)
    {
        int cao1[CH] = {0};
        int cao2[CH] = {0};
        int w;
        for (w = 0; set1[w] && set2[w];  w++)
        {
            cao1[set1[w]]++;
            cao2[set2[w]]++;
        }
     
        if (set1[w] || set2[w])
          return false;
     
        
        for (w = 0; w < CH; w++)
            if (cao1[w] != cao2[w])
                return false;
     
        return true;
    }
    int main()
    {
        char set1[100];
        char set2[100];
        printf("Enter first string ");
        gets(set1);
        printf("Enter second string ");
        gets(set2);
        if ( anag(set1, set2) )
          printf("Anagram");
        else
          printf("Not anagram");
     
        return 0;
    }

