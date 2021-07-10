


























































































































































































































































void insertInTheBeginning(List *pointerToList)
{
    ListNode* newPtr = (ListNode*) malloc(sizeof(ListNode));
    newPtr = enterInformationOfStudent();
    newPtr->next = pointerToList->head;
    pointerToList->head = newPtr;
    (pointerToList->size)++;
}
void insertInTheEnd(List *pointerToList)
{
    ListNode* newPtr = (ListNode*) malloc(sizeof(ListNode));

    newPtr = enterInformationOfStudent();
    newPtr->next = pointerToList->tail->next;
    pointerToList->tail->next = newPtr;
    pointerToList->tail = newPtr;
    (pointerToList->size)++;
}
void insert_In_Nth_Position_In_The_Middle(List *pointerToList)
{
    printf("%s", "Enter the position where you want to insert ! : ");
    int position;
    scanf("%i", &position);
    if (pointerToList->size <= 1)
    {
        puts("The size should be greater than or equal to 2");
        return;
    }

    bool validityPostion = false;

    while(validityPostion == false)
    {
        if(position > 0 && position < pointerToList->size)
        {
            ListNode* currentPtr;
            currentPtr = pointerToList->head;
            ListNode* newPtr = (ListNode*) malloc(sizeof(ListNode));
            newPtr = enterInformationOfStudent();

            for(int i = 0; i < position - 1; ++i)
            {
                currentPtr = currentPtr->next;
            }
            newPtr->next = currentPtr->next;
            currentPtr->next = newPtr;
            (pointerToList->size)++;
            validityPostion = true;
        }
        else{
            puts("Invalid position!!");
            printf("position should be greater than 0 and less than %i\n", pointerToList->size);
            puts("Enter the new position!");
            scanf("%i", &position);
        }
    }
}










































































































































































