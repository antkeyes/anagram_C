#include <stdio.h>
#include <string.h>

int main() {

    int counter1[] = {0, 0, 0, 0};
    int counter2[] = {0, 0, 0, 0};

    char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
    char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

    int flag = 0;

    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] == 'a') {
            counter1[0]++;
        } else if (s1[i] == 'b') {
            counter1[1]++;
        } else if (s1[i] == 'c') {
            counter1[2]++;
        } else if (s1[i] == 'd') {
            counter1[3]++;
        }
    }

    for (int i = 0; i < strlen(s2); i++) {
        if (s2[i] == 'a') {
            counter2[0]++;
        } else if (s2[i] == 'b') {
            counter2[1]++;
        } else if (s2[i] == 'c') {
            counter2[2]++;
        } else if (s2[i] == 'd') {
            counter2[3]++;
        }
    }

    for (int i = 0; i < sizeof(counter1)/sizeof(int); i++) {
        if (counter1[i] != counter2[i]) {
            flag++;
        }
    }
    
    if (flag > 0) {
        printf("The value of flag is %d, therefore, the two strings are not anagrams\n", flag);
    } else {
        printf("The two strings are anagrams\n");
    }

    for (int i = 0; i < sizeof(counter1)/sizeof(int); i++) {
        printf("%d ", counter1[i]);

    }
    
    printf("\n");

    for (int i = 0; i < sizeof(counter1)/sizeof(int); i++) {
        printf("%d ", counter2[i]);
    }
}