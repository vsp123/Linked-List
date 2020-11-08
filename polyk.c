#include<stdio.h>
#include "poly.c"
#include "polymul.c"
void main()
{
    struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
     
    
    create_node(6,2,&poly1);
    create_node(4,1,&poly1);
    create_node(2,0,&poly1);
     
    
    create_node(5,2,&poly2);
    create_node(5,1,&poly2);
    create_node(5,0,&poly2);
     
    printf("1st Number: "); 
    show(poly1);
     
    printf("\n2nd Number: ");
    show(poly2);
     
    poly = (struct Node *)malloc(sizeof(struct Node));
     
    
    polyadd(poly1, poly2, poly);
     
    // Display resultant List
    printf("\nAdded polynomial: ");
    show(poly);
}

