#include<stdio.h>
#include<string.h>
#include<time.h>
struct menu
{
    char item[50];
    float rate[50];
    int qty;
    float st[50];
}i[10];

int main()
{
    struct tm* timenow;
    char filename[40];
    time_t tm= time(NULL);
    timenow=gmtime(&tm);
    time(&tm);
    strftime(filename, sizeof(filename),"/var/log/SA_TEST_%Y-%m-%d_%H:%M:%S"    ,timenow);
    FILE*fp=NULL;
    fp=fopen("filename","w");
    int n;  char c; float bill[10];
    printf("%s", ctime(&tm));
    printf("*****WELCOME TO M1R CAFETARIA*****\n");
    printf("\n****MENU****\n");
    strcpy(i[0].item,"Chicken Wrap");
    i[0].rate[0]=120;
    strcpy(i[1].item,"Fish Wrap");
    i[1].rate[1]=140;
    strcpy(i[2].item,"Shrimps Wrap");
    i[2].rate[2]=130;
    strcpy(i[3].item,"French Fries");
    i[3].rate[3]=80;
    do{
        printf("\n1.%s=%f\n2.%s=%f\n3.%s=%f\n4.%s=%f",i[0].item,i[0].rate[0],i[1].item,i[1].rate[1],i[2].item,i[2].rate[2],i[3].item,i[3].rate[3]);
        printf("\nChoose the item by entering the respective number:)\n");

        scanf("%d",&n);
        switch(n){
            case 1:
                printf("\nSelected:%s-%f\n",i[0].item,i[0].rate[0]);
                printf("\nEnter the quantity:\n");
                scanf("%d",&i[0].qty);
                i[0].st[0]=i[0].rate[0]*i[0].qty;
                bill[0]=printf("Sub total=%f",i[0].st[0]);
                bill[0]=i[0].st[0];break;
            case 2:
                printf("\nSelected:%s-%f\n",i[1].item,i[1].rate[1]);
                printf("\nEnter the quantity:\n");
                scanf("%d",&i[1].qty);
                i[1].st[1]=i[1].rate[1]*i[1].qty;
                bill[1]=printf("Sub total=%f",i[1].st[1]);
                bill[1]=i[1].st[1];break;
            case 3:
                printf("\nSelected:%s-%f\n",i[2].item,i[2].rate[3]);
                printf("\nEnter the quantity:\n");
                scanf("%d",&i[2].qty);
                i[2].st[2] = i[2].rate[2]*i[2].qty;
                bill[2]=printf("Sub total=%f",i[2].st[2]);
                bill[2]=i[2].st[2];break;
            case 4:
                printf("\nSelected:%s-%f\n",i[3].item,i[3].rate[3]);
                printf("\nEnter the quantity:\n");
                scanf("%d",&i[3].qty);
                i[3].st[3]=i[3].rate[3]*i[3].qty;
                bill[3]=printf("Sub total=%f",i[3].st[3]);
                bill[3]=i[3].st[3];break;
            default:
                printf("\n!!!!!PLEASE SELECT THE NUMBER WHICH IS AVAILABLE!!!!!\n");}
        printf("\n*****Do You Want To Select More??? If Yes enter 'y' orelse type n*****\n");
        scanf(" %c",&c);
    }while(c=='y');
bill[4]=bill[0]+bill[1]+bill[2]+bill[3];
printf("The selected items are\n%s-%f\n",i->item);
    printf("\nITEMS\n1.%s-%f\n2.%s-%f\n3.%s-%f\n4.%s-%f\n",i[0].item,i[0].rate[0]*i[0].qty,i[1].item,i[1].rate[1]*i[1].qty,i[2].item,i[2].rate[2]*i[2].qty,i[3].item,i[3].rate[3]*i[3].qty);
    printf("\nBILL~\nGRAND TOTAL=%f",bill[4]);

    printf("\nTHANK YOU:)\n.......VISIT AGAIN IN THE FUTURE  :)");
    fprintf(fp,"%s", ctime(&tm));
    fprintf(fp,"\nPREV.OD\nITEMS\n1.%s-%f\n2.%s-%f\n3.%s-%f\n4.%s-%f\n",i[0].item,i[0].rate[0]*i[0].qty,i[1].item,i[1].rate[1]*i[1].qty,i[2].item,i[2].rate[2]*i[2].qty,i[3].item,i[3].rate[3]*i[3].qty);
    fclose(fp);
    return 0;}

