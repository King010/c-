#include"myatoi"
int main()  
{  
    char *s1="333640";  
    char *s2="-12345";  
    char *s3="123.3113";  
    char *s4="-8362865623872387698";  
    char *s5="+246653278";  
  
  
    int sum1=atoi(s1);  
    int sum_1=atoi_my(s1);  
  
    int sum2=atoi(s2);  
    int sum_2=atoi_my(s2);  
  
    int sum3=atoi(s3);  
    int sum_3=atoi_my(s3);  
  
    int sum4=atoi(s4);  
    int sum_4=atoi_my(s4);  
  
    int sum5=atoi(s5);  
    int sum_5=atoi_my(s5);  
  
    cout<<"atoi:  :"<<sum1<<endl;  
    cout<<"atoi_my:"<<sum_1<<endl;  
  
    cout<<"atoi:  :"<<sum2<<endl;  
    cout<<"atoi_my:"<<sum_2<<endl;  
  
    cout<<"atoi:  :"<<sum3<<endl;  
    cout<<"atoi_my:"<<sum_3<<endl;  
  
    cout<<"atoi:  :"<<sum4<<endl;  
    cout<<"atoi_my:"<<sum_4<<endl;  
  
    cout<<"atoi:  :"<<sum5<<endl;  
    cout<<"atoi_my:"<<sum_5<<endl;  
  
    system("pause");  
    return 0;  
}  