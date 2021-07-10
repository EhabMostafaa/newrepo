




















































































































































































































































































































ListNode* enterInformationOfStudent()
{

    fflush(stdin);
    ListNode* pointerToListNode = (ListNode*) malloc(sizeof(ListNode));
    printf("Enter the name of your student : ");
    fgets(pointerToListNode->Student_Name, 30, stdin);

    printf("Enter the ID of of your student : ");
    scanf("%i", &(pointerToListNode->Student_ID));

    bool validity_ID = false;
    while (!validity_ID)
    {
        if (pointerToListNode->Student_ID >= 0)
            validity_ID = true;
        else
            {
                puts("Wrong ID!");
                printf("Enter a new ID : ");
                scanf("%i", &(pointerToListNode->Student_ID));
            }
    }

    printf("Enter the score of last year of of your student : ");
    scanf("%i", &(pointerToListNode->Score_Of_Last_Year));
    bool validity_Score = false;
    while (!validity_Score)
    {
        if (pointerToListNode->Score_Of_Last_Year >= 0)
            validity_Score = true;
        else
            {
                puts("Wrong score!");
                printf("Enter a new score : ");
                scanf("%i", &(pointerToListNode->Score_Of_Last_Year));
            }
    }

    printf("Enter the date of birth of of your student!\n");
    printf("%s","Enter the day : ");
    scanf("%i", &(pointerToListNode->Day_Of_Birth));
    printf("%s", "Enter the month :");
    scanf("%i", &(pointerToListNode->Month_Of_Birth));
    printf("%s", "Enter the year : ");
    scanf("%i", &(pointerToListNode->Year_Of_Birth));
    bool validity_DateOfBirth = false;
    while (!validity_DateOfBirth)
    {
        if ((pointerToListNode->Day_Of_Birth > 0 && pointerToListNode->Day_Of_Birth <= 31) && ((pointerToListNode->Month_Of_Birth) > 0
            && (pointerToListNode->Month_Of_Birth) <=12) && ((pointerToListNode->Year_Of_Birth) >= 0))
                validity_DateOfBirth = true;
        else
            {
                puts("Wrong date of birth!");
                printf("%s","Enter the day : ");
                scanf("%i", &(pointerToListNode->Day_Of_Birth));
                printf("%s", "Enter the month :");
                scanf("%i", &(pointerToListNode->Month_Of_Birth));
                printf("%s", "Enter the year : ");
                scanf("%i", &(pointerToListNode->Year_Of_Birth));
            }
    }
    printf("\n\n");
    return pointerToListNode;
}

void enterInformationOfStudent2(DynamicArray *pointerToDynamicArray)
{

    fflush(stdin);
    printf("Enter the name of your student : ");
    fgets(pointerToDynamicArray->Student_Name, 30, stdin);

    printf("Enter the ID of of your student : ");
    scanf("%i", &(pointerToDynamicArray->Student_ID));

    bool validity_ID = false;
    while (!validity_ID)
    {
        if (pointerToDynamicArray->Student_ID >= 0)
            validity_ID = true;
        else
            {
                puts("Wrong ID!");
                printf("Enter a new ID : ");
                scanf("%i", &(pointerToDynamicArray->Student_ID));
            }
    }

    printf("Enter the score of last year of of your student : ");
    scanf("%i", &(pointerToDynamicArray->Score_Of_Last_Year));
    bool validity_Score = false;
    while (!validity_Score)
    {
        if (pointerToDynamicArray->Score_Of_Last_Year >= 0)
            validity_Score = true;
        else
            {
                puts("Wrong score!");
                printf("Enter a new score : ");
                scanf("%i", &(pointerToDynamicArray->Score_Of_Last_Year));
            }
    }

    printf("Enter the date of birth of of your student!\n");
    printf("%s","Enter the day : ");
    scanf("%i", &(pointerToDynamicArray->Day_Of_Birth));
    printf("%s", "Enter the month :");
    scanf("%i", &(pointerToDynamicArray->Month_Of_Birth));
    printf("%s", "Enter the year : ");
    scanf("%i", &(pointerToDynamicArray->Year_Of_Birth));
    bool validity_DateOfBirth = false;
    while (!validity_DateOfBirth)
    {
        if ((pointerToDynamicArray->Day_Of_Birth > 0 && pointerToDynamicArray->Day_Of_Birth <= 31) && ((pointerToDynamicArray->Month_Of_Birth) > 0
            && (pointerToDynamicArray->Month_Of_Birth) <=12) && ((pointerToDynamicArray->Year_Of_Birth) >= 0))
                validity_DateOfBirth = true;
        else
            {
                puts("Wrong date of birth!");
                printf("%s","Enter the day : ");
                scanf("%i", &(pointerToDynamicArray->Day_Of_Birth));
                printf("%s", "Enter the month :");
                scanf("%i", &(pointerToDynamicArray->Month_Of_Birth));
                printf("%s", "Enter the year : ");
                scanf("%i", &(pointerToDynamicArray->Year_Of_Birth));
            }
    }
    printf("\n\n");
}


















































































































