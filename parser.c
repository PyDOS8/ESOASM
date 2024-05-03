#include <stdio.h>
#include <stdlib.h>
int main(){
    string opcodes[10];
    string registers[10];
    int index;
    int opcodesIndex;
    string inp;
    while(true){
        scanf("%s", inp);
        switch(inp){
            case '$':
                registers[index] = "0x0"; // EAX
                if(index < 10){
                    index += 1;
                }
                break;
            case '^':   
                registers[index] = "0x1"; // EBX
                if(index < 10){
                    index+=1;
                }else{
                    printf("%d", index);
                    printf("\n Please clear");
                }
                break;
            case '&':
                registers[index] = "0x2"; // ECX
                if(index < 10){
                    index+=1;
                }else{
                    printf("%d", index);
                    printf("\n Please clear");
                }
                break;
            case '%':
                registers[index] = "0x3"; // EDX
                if(index < 10){
                    index+=1;
                }else{
                    printf("%d", index);
                    printf("\n Please clear");
                }
            case '(':
                registers[index] = "0x4"; // ESI
                if(index < 10){
                    index+=1;
                }else{
                    printf("%d", index);
                    printf("\n Please clear");
                }
                break;
            case ')':
                registers[index] = "0x5"; // ESP
                if(index < 10){
                    index+=1;
                }else{
                    printf("%d", index);
                    printf("\n Please clear");
                }
                break;
            case '?':
                index = 0;
                break;
            case '0':
                opcodes[opcodesIndex] = "0x0"; // MOVE
                if(opcodesIndex < 10){
                    opcodesIndex+=1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '1':
                opcodes[opcodesIndex] = '0x1'; // PUSH
                if(opcodesIndex < 10){
                    ocpodesIndex+=1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '2':
                opcodes[opcodesIndex] = '0x2'; // POP
                if(opcodesIndex < 10){
                    opcodesIndex+=1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '3':
                opcodes[opcodesIndex] = '0x3'; // JMP
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '4':
                opcodes[opcodesIndex] = '0x4' // JE
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '5':
                opcodes[opcodesIndex] = '0x5'; // JL
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '6':
                opcodes[opcodesIndex] = '0x6'; // JNE
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '7':
                opcodes[opcodesIndex] = '0x7' // JLE
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '8':
                opcodes[opcodesIndex] = '0x8'; // JGE
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '9':
                opcodes[opcodesIndex] = '0x9'; // CMP
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '10':
                opcodes[opcodesIndex] = '0xA'; // DB
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '11':
                opcodes[opcodesIndex] = '0xB'; // DD
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '12':
                opcodes[opcodesIndex] = '0xC' // EQU
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '13':
                opcodes[opcodesIndex] = '0xD'; // section
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '14':
                opcodes[opcodesIndex] = '0xE'; // .data
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
                break;
            case '15':
                opcodes[opcodesIndex] = '0xF' // .text
                if(opcodesIndex < 10){
                    opcodesIndex += 1;
                }else{
                    printf("%d", opcodesIndex);
                    printf("\n Please clear");
                }
            default:
                printf("%s", inp);
                printf(" is not valid! \n");
                break;
        }
    }
    return 0;
}