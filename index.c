// #include <stdio.h>
// int main(){
//     int firstvalue;
//     int secondvalue;
//     char symbol;
   
//     printf("enter firstvalue : ");
//     scanf("%d",&firstvalue);
//      printf("enterb your symbol : ");
//     scanf("%d",&symbol);
//     printf("enter secondvalue : ");
//     scanf("%d",&secondvalue);
//     switch(symbol){
//         case'+':printf("%d",firstvalue + secondvalue);break;
//         case'-':printf("%d",firstvalue-secondvalue);break;
//         case'/':printf("%d",firstvalue/secondvalue);break;
//         case'*':printf("%d",firstvalue*secondvalue);
//         // default:printf("not a symbol");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(){

//     printf("hello world good morning");
//     return 0;
// }
    //  question-6

// #include <stdio.h>
// #include <string.h>
// struct Movie{
//     char moviename[100];
//     char genre[100];
//     char language[100];
// };
// int main(){
// struct Movie Mn;
// printf("enter your movie name ");
// scanf("%s\n",&Mn.moviename);
// printf("enter your movie genre ");
// scanf("%s\n",&Mn.genre);
// printf("enter your movie language ");
// scanf("%s",&Mn.language);
// // strcpy(Mn1.moviename,"sidhhat");
// // strcy(Mn1.genre,"love story");

// printf("%s",Mn.moviename);
// printf("%s",Mn.genre);
// printf("%s",Mn.language);



//     return 0;
// }

// QUESTION-7

// #include <stdio.h>
// int main(){
//     FILE *p;
//     p=fopen("masum.txt","r");
//     char data[100];
//     if(p==NULL){
//         printf("file does not exist");
//     }else{
//         while(fgets(data,50,p)!=NULL){
//             printf("%s",data);
//             fclose(p);
//         }
//     }
//     return 0;
// }


// question-3
// #include <stdio.h>
// int main(){
//     printf("        *  \n ");
//     printf("     * *   \n");
//     printf("    * * *   \n");
//     printf("  * * * *   \n");
//     printf("* * * * *    \n");
//     return 0;
// }