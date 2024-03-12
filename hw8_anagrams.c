#include <stdio.h>
#include <string.h>


int anagram(char array1[], char array2[]);
void print_array(char parray[]);

int main(){
    char filename[100];
    int N = 0;
    int rows = 2500;
    int column = 51;
    int i;
    char word[rows][column];    // 2d array
    char fword1[51];
    char fword2[51];
    char lword1[51];
    char lword2[51];
    int  first_anagram = 0;
    int k = 0;
    int j = 0;
    int y = 0;


    printf("This program will find anagram words in a dictionary file.\n");
    printf("Enter the file name: ");                // user input of filename
    scanf("%s", filename);                          // saves the file name


    FILE *fp = NULL;                                // fileopen
    fp = fopen(filename,"r+");
    if(fp == NULL){
        printf("Will exit. Failed to open file: %s", filename);       // to indicate if the file did not open
        return 0;
    }

    fscanf(fp,"%d",&N);
    rows = N;


    for(i=0;i<N;i++){
        fscanf(fp,"%s",word[i]);
    }


    for(i=0;i<N;i++){
        for (j=i+1;j<N;j++){
            if (anagram(word[i],word[j])==26){
                print_array(word[i]);
                printf(", ");
                print_array(word[j]);
                printf("\n");

                if(first_anagram==0){
                    for(k=0;k<=51;k++){
                        fword1[k]=word[i][k];
                        fword2[k]=word[j][k];
                    }
                    first_anagram = 1;
                }
                for(k=0;k<=51;k++){
                        lword1[k]=word[i][k];
                        lword2[k]=word[j][k];
                }

            }

        }
   }

   printf("The FIRST pair of anagrams found is: ");
   print_array(fword1);
   printf(", ");
   print_array(fword2);
   printf("\nThe LAST pair of anagrams found is: ");
   print_array(lword1);
   printf(", ");
   print_array(lword2);


}

int anagram(char array1[], char array2[]){
    int one[26] = {0};
    int two[26] = {0};
    int c = 0;

    // calculating the occurrence of the first string
    while(array1[c] != '\0'){
        one[array1[c]-'a']++;
        c++;
    }

    c = 0;
     int flag = 0;
    // calculating the occurrence of the second string
    while(array2[c] != '\0'){
        two[array2[c]-'a']++;
        c++;
    }

    // comparing the occurrences of the two strings array1 and array2
    for(c=0;c<26;c++){
        if(one[c]==two[c]){
            flag = flag +1 ;
        }
        else
            flag = flag;
            //return 0;
    }
    return flag;

}
void print_array(char p_array[]){
    int k = 0;
    for(k=0;k<strlen(p_array);k++){
            printf("%c",p_array[k]);            // prints the dashed word
        }
}
