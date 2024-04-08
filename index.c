
// Amanda Kawanne de Oliveira Lima 0000051755
// Questão 1
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    printf("%d\n", x);

    float y = 5.0;
    printf("%d%f\n", x, y);
    printf("%d %f\n", x, y);

    system("pause");
    return 0;
}

// Questão 2
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,z;
    float y;

    scanf("%d", &x);
    scanf("%f", &y);
    scanf("%d%f", &x, &y);
    scanf("%d%d", &x, &z);
    scanf("%d %d", &x, &z);

    system("pause");
    return 0;
}

// Questão 3
#include <stdio.h>
#include <stdlib.h>
 
int main(){
    char nome[100];
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Seja bem vindo, %s!", nome);
    return 0;
}

// Questão 4
#include <stdio.h>
#include <stdlib.h>

int main(){
    char idade_txt[100];
    int idade;

    printf("Digite sua idade: ");
    scanf("%s", idade_txt);

    idade = atoi(idade_txt);

    printf("Voce tem %d anos de idade", idade);
    
    return 0;
}

// Questão 5
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_int;
    float num_float;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num_int);

    num_float = (float)num_int;

    printf("Numero inteiro em formato decimal: %f", num_float);

    return 0;
}

// Questão 6
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, soma;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma entre %d e %d e: %d.", num1, num2, soma);

    return 0;
}

// Questão 7
#include <stdio.h>
#include <stdlib.h>

int main(){
    float number, square;

    printf("Digite um numero: ");
    scanf("%f", &number);

    square = number * number;

    printf("O quadrado de %f e: %f", number, square);

    return 0;
}

// Questão 8
#include <stdio.h>
#include <stdlib.h>

int main(){
    int nascimento,idade;

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &nascimento);

    idade = 2024-nascimento;

    printf("Voce tem ou ira fazer %d anos de idade!", idade);

   return 0;
}

// Questão 9
#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[100], sobrenome[100], nome_completo[200];

    printf("Digite o seu primeiro nome: ");
    scanf("%s", nome);

    printf("Digite o seu sobrenome: ");
    scanf("%s", sobrenome);

    sprintf(nome_completo, "%s %s", nome, sobrenome);

    printf("O seu nome completo e: %s", nome_completo);

   return 0;
}

// Questão 10
#include <stdio.h>
#include <stdlib.h>

int contarNumeros() {
    char caractere;
    scanf("%c", &caractere);

    int e_numero = (caractere >= '0') * (caractere <= '9');

    return e_numero + (caractere != '\n') * contarNumeros();
}

int main() {

    printf("Digite uma sequencia de numeros separados por espaco: ");
    int totalNumeros = contarNumeros(); 
    
    printf("Foram digitados %d numeros.\n", totalNumeros);

    return 0;
}

// Questão 11
#include <stdio.h>
#include <stdlib.h>

int main(){
    char animal[100];

    printf("Digite o nome de um animal: ");
    scanf("%s", animal);

    printf("O animal digitado foi %s", animal);

    return 0;
}

// Questão 12
#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[100], sobrenome[100];

    printf("Digite seu primeiro nome nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Nome completo invertido: %s %s", sobrenome, nome);

    return 0;
}

// Questão 13
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("%s tem %d caracteres", palavra, (int)strlen(palavra));

    return 0;
}

// Questão 14
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conferirParOuImpar(int num){
    if (num % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){ 
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(conferirParOuImpar(numero)) {
        printf("%d e numero par.\n", numero);
    } else {
        printf("%d e um numero impar.\n", numero);
    }

    return 0;
}

// Questão 15
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conferirNegOuPos(int num){
    if (num < 0){
        return 2;
    } else if (num > 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){ 
    int numero;
    int resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = conferirNegOuPos(numero);

    if(resultado == 2) {
        printf("%d e um numero negativo.\n", numero);
    } else if(resultado == 1){
        printf("%d e um numero positivo.\n", numero);
    } else {
        printf("%d e 0", numero);
    }

    return 0;
}

// Questão 16
#include <stdio.h>
#include <stdlib.h>

int maiorMenor(int num, int num1){
    if(num > num1){
        return 2;
    }else if(num < num1){
        return 1;
    }else{
        return 0;
    }

}

int main(){ 
    int firstNum, secondNum;
    int resultado; 

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &firstNum);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &secondNum);

    resultado = maiorMenor(firstNum, secondNum);

    if(resultado == 2){
        printf("O primeiro numero e maior que o segundo numero!");
    }else if(resultado == 1){
        printf("O segundo numero e maior que o primeiro numero!");
    }else {
        printf("Os numeros sao iguais!");
    }

    return 0;
}

// Questão 17
#include <stdio.h>
#include <stdlib.h>


int main(){ 
    float peso, altura;
    float imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O seu IMC e igual a: %f", imc);

    return 0;
}


// Questão 18
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int moreThanFive(int carac){
    if(carac > 5){
        return 2;
    }else if(carac < 5){
        return 1;
    }else{
        return 0;
    }

}


int main(){ 
    char nome[100];
    int caracter;
    int result;

    printf("Digite o seu primeiro nome: ");
    scanf("%s", nome);

    caracter = strlen(nome);

    result = moreThanFive(caracter);

   if(result == 2){ 
    printf("O seu nome tem mais do que 5 caracteres");
   }else if(result == 1){
    printf("O seu nome tem menos do que 5 caracteres");
   }else {
    printf("O seu nome tem extamente 5 caracteres");
   }

    return 0;
}

// Questão 19
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){ 
    char estCivil[100];
    
    printf("Qual o seu estado civil? (solteiro/casado)");
    scanf("%s", estCivil);

    printf("Voce e %s", estCivil);

    return 0;
}

// Questão 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){ 
    float base, altura, area;

    printf("Digite a base do seu retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do seu retangulo: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A area do seu retangulo de base %f e altura %f e de %f cm²", base, altura, area);

    return 0;
}

// Questão 21
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){ 
    char cidade[100];

    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade);

    if(cidade[0] == 'S'){
        printf("O nome da sua cidade comeca com a letra escolhida.");
    }else{
        printf("O nome da sua cidade nao comeca com a letra escolhida.");
    }

    return 0;
}

// Questão 22
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){ 
   float num1, num2, calc;

   printf("Digite um numero decimal: ");
   scanf("%f", &num1);

   printf("Digite outro numero decimal: ");
   scanf("%f", &num2);

    calc = fmod(num1, num2);

    printf("O resto da divisao entre %f e %f e %f", num1, num2, calc);

    return 0;
}

// Questão 23
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){ 
    float decimal;
    int inteiro;

    printf("Digite um numero decimal: ");
    scanf("%f", &decimal);

    inteiro = (int)decimal;

    printf("Numero inteiro: %d", inteiro);

    return 0;
}

// Questão 24
#include <stdio.h>
#include <stdlib.h>

int main() {
    char string_numero[20];
    int numero, resultado;
    char string_resultado[20];

    printf("Digite um numero como string: ");
    scanf("%s", string_numero);

    numero = atoi(string_numero);
    resultado = numero + 10;

    sprintf(string_resultado, "%d", resultado);

    printf("O resultado de somar 10 ao numero %s e: %s\n", string_numero, string_resultado);

    return 0;
}

// Questão 25

#include <stdio.h>

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%s", data);

    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}

// Questão 26
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cidade[100], estado[100], cidaEst[100];

    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade);

    printf("Digite o nome do seu estado: ");
    scanf("%s", estado);

    sprintf(cidaEst, "%s, %s", cidade, estado);

    printf("%s", cidaEst);

    return 0;
}

// Questão 27
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char boas[] = "Seja bem vindo, nascido em ";
   char nascimento[100];

   printf("Digite o seu ano de nascimento: ");
   scanf("%s", nascimento);

   strcat(boas, nascimento);

   printf("%s", boas);

    return 0;
}

// Questão 28
#include <stdio.h>

int main() {
    int numero;
    char string[100];

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Digite uma string: ");
    scanf(" %[^\n]s", string); 

    printf("%d %s\n", numero, string);

    return 0;
}

// Questão 29
#include <stdio.h>

int main() {
    char nome_produto[100];
    float preco_produto;
    char simbolo_moeda;

    printf("Digite o nome do produto: ");
    scanf("%s", nome_produto);

    printf("Digite o preco do produto: ");
    scanf("%f", &preco_produto);

    printf("Digite o simbolo da moeda: ");
    scanf(" %c", &simbolo_moeda);

    printf("Produto: %s, Preco: %.2f%c\n", nome_produto, preco_produto, simbolo_moeda);

    return 0;
}

// Questão 30
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Você digitou: %d. O dobro desse número é: %d.\n", numero, numero * 2);

    return 0;
}

// Questão 31
 #include <stdio.h>
#include <string.h>

int main() {
    char email[100], boas[] = "Obrigado por se registrar com o email ";

    printf("Digite o seu email: ");
    scanf("%s", email);

    strcat(boas, email);

    printf("%s", boas);

    return 0;
}

// Questão 32
#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;
    int diferenca = numero1 - numero2;
    int produto = numero1 * numero2;
    int quociente = numero1 / numero2;

    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);

    return 0;
}

// Questão 33
#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo e: %.2f\n", area);

    return 0;
}

// Questão 34
#include <stdio.h>

int main() {
    float raio, perimetro;
    const float pi = 3.14;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;

    printf("O perimetro da circunferencia e: %.2f\n", perimetro);

    return 0;
}

// Questão 35
#include <stdio.h>

int main() {
    float base, altura, perimetro;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);

    printf("O perimetro do retangulo e: %.2f\n", perimetro);

    return 0;
}

// Questão 36
#include <stdio.h>

int main() {
    float numero1, numero2, numero3, media;

    printf("Digite o primeiro numero decimal: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero decimal: ");
    scanf("%f", &numero2);

    printf("Digite o terceiro numero decimal: ");
    scanf("%f", &numero3);

    media = (numero1 + numero2 + numero3) / 3;

    printf("A media aritmetica dos numeros e: %.2f\n", media);

    return 0;
}

// Questão 37
#include <stdio.h>

int main() {
    int idade, meses, dias;

    printf("Digite sua idade em anos: ");
    scanf("%d", &idade);

    meses = idade * 12;
    dias = idade * 365;

    printf("Voce viveu aproximadamente %d meses e %d dias.\n", meses, dias);

    return 0;
}

// Questão 38
#include <stdio.h>

int main() {
    float valor_em_reais, cotacao_dolar, valor_em_dolares;

    printf("Digite o valor em reais: ");
    scanf("%f", &valor_em_reais);

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacao_dolar);

    valor_em_dolares = valor_em_reais / cotacao_dolar;

    printf("O valor em dólares é: %.2f\n", valor_em_dolares);

    return 0;
}

// Questão 39
#include <stdio.h>
#include <math.h>

int main() {
    float numero_decimal;
    int numero_arredondado;

    printf("Digite um numero decimal: ");
    scanf("%f", &numero_decimal);

    numero_arredondado = round(numero_decimal);

    printf("O numero arredondado e: %d\n", numero_arredondado);

    return 0;
}

// Questão 40
#include <stdio.h>

int main() {
    int n1, n2, n3, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);

    resultado = (n1 + n2) * n3;

    printf("O resultado da operacao e: %d\n", resultado);

    return 0;
}

// Questão 41
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);

    return 0;
}


