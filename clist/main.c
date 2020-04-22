#include <stdio.h> 
#include <stdlib.h> 
#include "Clist.h" 

int main(){ 
    clist *l; 
    l = create_list();  
    add_init(l, 5);
    delete_list(l); 
    return 0;
}