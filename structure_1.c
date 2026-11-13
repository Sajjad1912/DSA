 #include<stdio.h>
 #include<string.h>
 struct student
 {
    int roll;
    char name[20];
 };
 void display(struct student *st)
{
    for (int i = 0; i < 5; i++)
    {
        printf("Information of student %d\n",i+1);
        printf("Roll no : %d \n",st[i].roll);
        printf("Name : %s \n",st[i].name);
    }
    
}
 int main()
 {
    struct student st[5];
    printf("Enter recored of 5 student.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter information of student %d\n",i+1);
        printf("Enter roll no : \n");
        scanf("%d",&st[i].roll);
        printf("Enter name : \n");
        scanf("%s",&st[i].name);
    }
    display(st);
    return 0;
 }