#include "Header.h"
int main(){
    char message[100],ch;
    char * copiedString;
    int i,choice,;
    printf("Enter your message\n");
    gets(message);
    do{
        printf("\n****************************************\n");
        printf("\n1] myStrlen\n2] myStrcpy\n3] myStrcat\n4] myStrcmp\n5] myStrUpper\n6] myStrLower\n7] myStrInitCap\n8] myStrReverse\n9] myStrUpLow\n10] myStrToggleLetters\n11] myStrPalindrome\n\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                myStrlen(message);
                break;
            case 2:
                copiedString=myStrcpy(message);
                printf("\n\nCopied %s\n",copiedString);
                break;
             case 4: 
                    printf("Enter second string\n");
                    fflush(stdin);
                    gets(message2);
                    temp=myStrcmp(message,message2);
                    if(temp<0)
                        printf("\nFirst string is less than second %s %s",message,message2);
                    else if(temp>0)
                        printf("\nFirst string is greater than second %s %s",message,message2);
                    else   
                        printf("\nBoth are equal\n");
                    break;
            // case 9:
            //     myStrReverse(message);
            //     break;
            default:
            printf("You have entered invalid choice\n");


        }
        printf("Do you want to continue....\n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y' || ch=='Y');
    if(ch=='n' || ch=='N') {
        printf("okay exiting");
    }
    return 0;
}