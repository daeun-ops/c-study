#include <stdio.h>
int main(void)
{
    // 정수형 변수에 대한 예제
    /*int age = 12;
    printf("%d￦n", age);
    age = 13;
    printf("%d￦n", age); */

    // 실수형 변수에 대한 예제 
    /*float f = 46.5f;
    double d = 4.428;
    printf("%lf￦n" , d);
    printf("%f￦n" , f); */

     // 상수의개념
    /*const int YEAR = 2000;  
    printf("태어난 년도: %d￦n" , YEAR);
    // YEAR = 2001 에러 */

    // printf
    // 연산 
    /*int add = 3+7;
    //printf(" 3 + 7 = %d￦n",add); //10 
    printf("%d + %d = %d￦n", 3, 7, 3 + 7); */

    // scanf
    // 키보드 입력을 받아서 저장 
    /*int input;
    printf("값을 입력하세요 : ");
    scanf("%d", &input);
    printf("입력값 : %d￦n", input); */

    /*int one, two, three;
    printf("3개의 정수를 입력하세요. : ");
    scanf("%d %d %d", &one, &two, &three);
    printf("첫번째 값 : %d￦n", one);
    printf("두번째 값 : %d￦n", two);
    printf("세번째 값 : %d￦n", three); */


    // 문자 (한 글자), 문자열(한 글자 이상의 여러글자)
    /* char c = 'A';
    printf("%c￦n" , c); 

    char str[256];
    scanf("%s", str, sizeof(str));
    printf("%s￦n", str);
    */


    // 프로젝트
    // 경찰관이 범죄자의 정보를 입수 (조서 작성)
    // 이름? 나이? 몸무게? 키? 범죄명?
    char name[256];
    printf("이름이 뭐예요?");
    scanf("%s", name, sizeof(name));
  
    int age;
    printf("몇살이예요?");
    scanf("%d", &age);

    float weight;
    printf("몸무게 몇 kg이에요?");
    scanf("%f", &weight);

    double height;
    printf(" 키 몇 cm 에요?");
    scanf("%lf", &height);

    char what[256];
    printf("너의 죄를 고하거라!!");
    scanf("%s", name, sizeof(name));

    // 조서 내용 출력
    printf("￦n￦n------범죄자 정보----------￦n￦n");
    printf("이름           : %s￦n",  name );
    printf("나이           : %d￦n",  age  );
    printf("몸무게         : %.2f￦n", weight);
    printf("키             : %.lf￦n", height);
    printf("범죄           : %s￦n",  what );
    return 0;
}
