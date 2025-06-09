#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){


    int n1, n2, result, j; char opt, exp[20];

    printf("Digite uma operação: ");
    fgets(exp,20,stdin);

    for(int i = 0; i < strlen(exp); i++){

        if(exp[i] == '+' || exp[i] == '-'){
            opt = exp[i];
            exp[i] = '\0';
            j = i+1;
        }
    }

    n1 = atoi(exp);
    n2 = atoi(&exp[j]);

    if(opt == '+'){
        result = n1 + n2;
    }else{
        result = n1 - n2;
    }

    printf("%d %c %d = %d\n", n1,opt, n2, result);
}

/*nt n[2], result; char opt, exp[20];

    printf("Digite uma operação: ");
    fgets(exp,20,stdin);

    for(int i = strlen(exp)-1, j=0, k=0; i >= 0; i--, j++){
        if(exp[i]>='0' && exp[i]<='9'){
            n[k] += atoi(&exp[i]) * (pow(10,j));
        }else{
            opt = exp[i];
            j=0;
            k++;
        }
    }
    if(opt == '+'){
        result = n[1] + n[0];
    }else{
        result = n[1] - n[0];
    }

    printf("O resultado de %d %c %d = %d\n", n[1], opt, n[0], result);*/
