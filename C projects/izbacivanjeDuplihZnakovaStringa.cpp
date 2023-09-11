#include <stdio.h>
#include <string.h>

//za MATEA ispiše MTE

int main() {

    char rijec[30];
    char temp[30] = { 0 };
    int count;
    int k;

    scanf("%s", rijec);

    for (int i = 0; i < strlen(rijec); i++) {
        count = 0;
        for (int j = 0; j < strlen(rijec); j++) {
            if (rijec[i] == rijec[j]) {
                count++;
            }
        }
        if (count == 1) {
            for (k = 0; k < strlen(rijec); k++) {
                if (temp[k] == rijec[i])
                    break;
            }
            if (k == strlen(rijec)) {
                for (k = 0; k < strlen(rijec); k++) {
                    if (temp[k] == 0) {
                        temp[k] = rijec[i];
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i < strlen(temp); i++) {
        printf("%c", temp[i]);
    }

    return 0;
}

//za MATEA ispise MATE

/*

#include <stdio.h>
#include <string.h>

int main(){

    char rijec[30];
    char temp[30]={0};
    int i;
    int k=0;

    scanf("%s", rijec);

    for(i=0; i<strlen(rijec);i++){
        int j;
        for(j=0; j<i; j++){
            if(rijec[i]==rijec[j]){
                break;
            }
        }

    if(j==i){
            temp[k++]=rijec[i];
    }

    temp[k]='\0';

    }

    for( i=0; i<strlen(temp);i++){
        printf("%c", temp[i]);
        }

    return 0;
}*/