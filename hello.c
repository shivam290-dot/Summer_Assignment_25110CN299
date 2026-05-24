

//#include <stdio.h>
//int main () {
//    int a , b , sum ;
//    printf("enter the value of a \n");
 //   scanf("%d",&a);
//    printf("enter the value of b \n");
//    scanf("%d",&b);
//    sum = a + b ;
//    printf("the sum is %d",sum) ;
//    return 0 ;
//}

//#include<stdio.h>
//int main() {
//    float a,area;
//    printf("side of square is :- ");
 //   scanf("%f",&a) ;
//    area = a*a ;
//    printf("area of the square is:- %f ",area);
//    return 0;

//}
/*
#include<stdio.h>
int main() {
    float a,b,perimeter ;
    printf("length of the rectangle ");
    scanf("%f",&a);
    printf("breath of the rectangle ");
    scanf("%f",&b) ;
    perimeter = 2*(a+b) ;
    printf("perimeter of the given rectangle is:- %f",perimeter);
    return 0;

}
*/
/*
#include<stdio.h>
int main() {
    int a,b;
    printf("enter any number:- ");
    scanf("%d",&a);
    b=a%2==0 ;
    printf(" %d ",b);
    
    return 0;

}
*/

/*
#include<stdio.h>
int main() {
    int x ;
    printf("enter no. ");
    scanf("%d \n",&x);
    printf("print even if %d\n",x%2==0);
    printf("print odd if %d\n",x%2!=0);
    return 0;
    }
*/

/*
#include<stdio.h>
   int main() {
    int marks ;
    printf("select any no.between 1 to 100");
    scanf("%d",&marks);
    if(marks>30){
        printf("pass");
    }
    else{
        printf("fail");
    }
    return 0;
   }

*/

#include<stdio.h>
#include<math.h>
int main() {
    int marks;
    printf("enter any no.(1-100):- \n");
    scanf("%d",&marks);
    switch(marks) {
        case(1) : printf("c") ;
        break;
        case(2) : printf("B");
        break;
        case(3) : printf("A");
        break ;
        case(4): printf("A+");
        break;
        
    }
    return 0;
}


