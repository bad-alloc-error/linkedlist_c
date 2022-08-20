#include "linked.h"
#include <stdlib.h>
#include <stdio.h>
int main(){

    linked_list_t* ll = init();
    // root_node(ll, 55);
    // insert(ll, 99);
    // insert(ll, 656);
    // insert(ll, 788);
    // insert_at_head(ll, 888);
    // insert_at_any_point(ll, 111, 656);
    ordered_insert(ll, 638);
    ordered_insert(ll, 250);
    ordered_insert(ll, 1000);
    ordered_insert(ll, 475);
    ordered_insert(ll, 600);
    ordered_insert(ll, 4535);
    ordered_insert(ll, 344);
    ordered_insert(ll, 1);
    print(ll);
    remove_node(ll, 1000);

    print(ll);
    remove_node(ll, 344);
    print(ll);
    remove_node(ll, 1);
    print(ll);
    // node_t* removido4 = remove_node(ll, 4535);
    // free(removido4);
    // print(ll);


}