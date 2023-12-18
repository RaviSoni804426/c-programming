int main()
{
char g;
    int m,age;
    printf("Enter your gender : ");
    scanf("%c",&g);
 
    if(g=='m' || g=='f' || g=='t'){
    printf("Enter money : ");
    scanf("%d",&m);
    printf("Enter your age : ");
    scanf("%d",&age);
        printf("Valid Gender");
        if(age>=58){
            m*=0.9;}
            else{printf("|nmAge is not less than 58 therefore no discount ");}
            printf(" Final money to be paid : %d",m);
        
    }
    else{printf("Please enter g or m or f");}

    return 0;
}

