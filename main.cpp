/******************************************************************************
Copy đoạn code vào file này
**Lưu ý không đổi tên file hoặc định dạng file
**Nộp thành công sẽ có tích xanh ở ngoài repository
*******************************************************************************/
#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int eng;
    int math;
    int phys;
};  
void get_information(int n,student stulist[])
{
    for (int i =0; i<4;i++)
    {    
        // fgets(stulist[i].name,50,stdin);
        gets(stulist[i].name);
        //getcharP();
        // stulist[i].name[strlen(stulist[i].name)-1] = 0;
        scanf("%d%d%d",&stulist[i].eng,&stulist[i].math,&stulist[i].phys);
        //fgetc(stdin);
        getchar();
    }  
}
void print_information(int n, student stulist[])
{
    for ( int i =0; i<4 ; i++)
    {
        printf("\nThong tin cua sinh vien: %d ", i+1);
        printf("\nName:%s",stulist[i].name);
        printf("\nenglish score:%d",stulist[i].eng);
        printf("\nmath score:%d",stulist[i].math);
        printf("\nphysic score:%d",stulist[i].phys);
    }
}
int main()
{   int n;
    printf("So sinh vien la");
    scanf("%d",&n);
    getchar();
    student stulist[50];
    get_information(n,stulist);
    print_information(n,stulist);
    return 0;
}
