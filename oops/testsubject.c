#include <stdio.h>
int top = -1;
void pushh(char stack[][50], char current_url[50]) {
  top++;
  if (top >= 5) {
    printf("Stack overflow");
    return;
  }
  else {
	int i;
    for(i = 0; current_url[i] != '\0'; i++){
      stack[top][i] = current_url[i];
    }
	stack[top][i]='\0';
  }
}

void main(){
  char current_url[] = "fuskdafhlkjasdhf";
  char stack[5][50];
  pushh(stack, current_url);
  pushh(stack, current_url);
  pushh(stack, current_url);
  pushh(stack, current_url);
  pushh(stack, current_url);
  printf("%s",stack[1]);
//   for (int i = 0; i < 5; i++){
// 	//printf("%d \n",i);
//     for (int j = 0; stack[i][j]!='\0'; j++){
// 			//printf(" %d",j);
//         	printf("%c", stack[i][j]);
//     }
//     printf("\n");
//   }
}
