#include <stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a=0, b=0, c=0, d=0, e=0;
  	double r=0.0, s=0.0, t=0.0, u=0.0, v=0.0;
  	//function calling (a-k)

    printf("a) %lf\n", functionM()); // runได้ไม่มีปัญหา ค่าที่ออกมาจะเป็น 1.100000
    
    a = functionM(); 
    printf("b)%lf\n", functionM()); // runได้ไม่มีปัญหา ค่าที่ออกมาจะเป็น 1.100000

    b = functionN(a, b);
    printf("c) %d\n", functionN(a, b)); // runได้ไม่มีปัญหา ค่าที่ออกมาจะเป็น 0

    r = functionO(r, a, s, b);
    printf("d) %lf\n", functionO(r, a, s, b)); // runได้ไม่มีปัญหา ค่าที่ออกมาจะเป็น 0.000000

    //s = functionP(a, b, c, d, e); // runไม่ได้เพราะ functionP รับพารามิเตอร์แค่ 4 ตัว แต่เราใส่ไป 5 ตัว

    u = functionM();
    printf("f) %lf\n", functionM()); // runได้ไม่มีปัญหา ค่าที่ออกมาจะเป็น 1.100000

    c = d + functionN(r, s);
    printf("g) %d\n", functionN(r, s)); // runได้ไม่มีปัญหา ค่าที่ได้เป็น 0 ตามชนิดฟังก์ชัน แต่ค่าที่ใส่เป็น double ซึ่งจะถูกฟังก์ชั้นเปปลี่ยนชนิดเป็น int ก่อนส่งเข้าไปในฟังก์ชัน

    t = s * functionO(r, a, r, a);
    printf("h) %lf\n", functionO(r, a, r, a)); //runได้ไม่มีปัญหา ค่าที่ออกมาจะเป็น 0.000000

    a = v + functionP(r, s, t, t);
    printf("i) %lf\n", functionP(r, s, s, t)); // runได้ไม่มีปัญหา ค่าที่ออกมาจะเป็น 0.000000 เพราะ functionP รับพารามิเตอร์เป็น int แต่เราใส่เป็น double ซึ่งจะถูกฟังก์ชั้นเปปลี่ยนชนิดเป็น int ก่อนส่งเข้าไปในฟังก์ชัน

    functionP(functionN(a, a), s, t,t+r);
    printf("j) %lf \n", functionP(functionN(a, a), s, t, t+r)); // runได้ไม่มีปัญหา ค่าที่ออกมาจะเป็น 0.000000 เพราะ functionP รับพารามิเตอร์เป็น int แต่เราใส่เป็น double ซึ่งจะถูกฟังก์ชั้นเปปลี่ยนชนิดเป็น int ก่อนส่งเข้าไปในฟังก์ชัน

    v = functionP(functionN(a, a), s, t, t+r);
    printf("k)%lf \n", functionP(functionN(a, a), s, t, t+r)); // runได้ไม่มีปัญหา ค่าที่ออกมาจะเป็น 0.000000 เพราะ functionP รับพารามิเตอร์เป็น int แต่เราใส่เป็น double ซึ่งจะถูกฟังก์ชั้นเปปลี่ยนชนิดเป็น int ก่อนส่งเข้าไปในฟังก์ชัน

}

double functionM(void){
    return 1.1;
}

int functionN(int n, double x){
    return 0;
}
double functionO(double A, int B, double C, int D){
    return 0.0;
}
double functionP(int a, int n, int b, int c){
    return 0.0;
}