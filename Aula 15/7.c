 #include<stdio.h>
 #include<string.h>

 int main(){

    char n[100];

    gets(n);

    for(int i = 0; i < strlen(n); i++){
        if((n[i-1] == ' ' || i == 0 )&& n[i] >= 97 && n[i] <= 122){
            n[i] -= 32;
        }
    }

    printf("%s\n", n);
 }
