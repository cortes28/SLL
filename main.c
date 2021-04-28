#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node * next;
}Node;

int main()
{
  int n = 0;
  printf("How many numbers in the list!\n");
  scanf("%d", &n);

  //Our 2 nodes for the list
  Node * head = NULL;
  Node * temp = NULL;

  //loop while we get the appropiate amount of nodes filled
  for(int i = 0; i < n; i++)
  {
    temp = (Node*)malloc(sizeof(Node));
    printf("\nEnter a number\n");
    scanf("%d",&(temp->data));
    temp->next = NULL;      //the new node will have next to point to NULL

    if(head == NULL)        //if  head is empty we will populate it
    {
      head = temp;
    }

    //otherwise we will have that temp node->next point to head
    //change the position of head
    else
    {
      temp->next = head;
      head = temp;
    }
  }

  printf("Now to traverse the list!\n");

  while(head != NULL)
  {
    printf("%d\n", head->data);
    head = head->next;
  }

return 0;
}
