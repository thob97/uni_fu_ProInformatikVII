#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>

struct glied{
        int wert;
        struct glied *nachfolger;
        }; 
        
struct glied *peek(struct glied *node){
    struct glied *current = node;
    while (current->nachfolger != NULL) {
        current = current -> nachfolger;
     }
     return current;}


int print (struct glied *head){
    struct glied *save = head;
    if (save->nachfolger != NULL) {
        save = save->nachfolger;
        print(save);
        printf("%d ", *save);
    }
    }    


int main(int argc, char *argv[]){ 
        
struct glied _head;
struct glied *head = &_head;
/* head->wert = atoi(argv[1]); */
head->nachfolger = NULL;

    for (int i=1; i<=argc-2; i++) {
        struct glied *neu = malloc(sizeof *neu);
        struct glied *alt = peek(head);
        alt -> nachfolger = neu;
        neu -> wert = atoi(argv[i]);
        neu -> nachfolger = NULL;
    }
    

     print(head);

}