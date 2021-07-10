
































































































































































































void initializeList(List *pointerToList)
{
    pointerToList->head = NULL;
    pointerToList->tail = NULL;
    pointerToList->size = 0;
}
void designList(int size,List *pointerToList)
{
    for(int j = 0; j < size; ++j)
    {
        printf("Enter the information of student %i\n", j + 1);
        if(pointerToList->head != NULL)
        {
            ListNode* newPtr = (ListNode*) malloc(sizeof(ListNode));

            newPtr = enterInformationOfStudent();
            newPtr->next = pointerToList->tail->next;
            pointerToList->tail->next = newPtr;
            pointerToList->tail = pointerToList->tail->next;
        }
        else
        {
            ListNode* newPtr = (ListNode*) malloc(sizeof(ListNode));

            newPtr = enterInformationOfStudent();
            newPtr->next = pointerToList->head;
            pointerToList->head = newPtr;
            pointerToList->tail = newPtr;
        }

        (pointerToList->size)++;
    }
}
void printList(List *pointerToList)
{
    printf("\n");
    printf("The size of the list is : %i !\n\n", pointerToList->size);
    if (pointerToList->size == 0)
    {
        puts("There are no nodes to print");
        return;
    }
    ListNode *currentPtr = pointerToList->head;
    puts("The list nodes are : ");
    printf("\n");
    int count = 1;
    while(currentPtr != NULL)
    {
        printf("The name of student %i is : %s",count, currentPtr->Student_Name);
        printf("The ID of this student is : %i\n", currentPtr->Student_ID);
        printf("The score of last year of this student is : %i\n", currentPtr->Score_Of_Last_Year);
        printf("The date of birth of this student is : %i.%i.%i\n" , currentPtr->Day_Of_Birth, currentPtr->Month_Of_Birth
               , currentPtr->Year_Of_Birth);
        currentPtr = currentPtr->next;
        count++;
        printf("\n\n");
    }
}











