/*
#include <stdio.h>
#include <string.h>

void main()
{
    char sentence[100] = "";
    char word[20];

    do {
        printf("단어? ");
        scanf("%s", word);
        strcat(sentence, word);         // 입력받은 단어를 sentence의 끝에 붙인다.
        strcat(sentence, " ");          // 단어를 구분할 수 있도록 빈칸을 붙인다.
    } while (strcmp(word, ".") != 0);   // "."이 입력될 때까지 반복한다.

    printf("%s\n", sentence);
}
*/