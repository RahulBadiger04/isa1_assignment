#include<stdio.h>
#include<math.h>

#define pi 3.14159265358979323846

int main() {
    int ch;
    float area, height, breadth, radi, radii, side, length, r;

    printf("Enter 1 to find the area of SQUARE\n2: RECTANGLE\n3: CIRCLE\n4: CYLINDER\n5: SPHERE\n");
    scanf("%d", &ch);

    switch(ch) {
        case 1: 
            printf("Enter the length of the side: ");
            scanf("%f", &side);
            area = pow(side, 2);
            break;
        case 2:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f%f", &length, &breadth);
            area = length * breadth;
            break;
        case 3:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radi);
            area = pi * pow(radi, 2);
            break;
        case 4: 
            printf("Enter height and radius of the cylinder: ");
            scanf("%f%f", &height, &radii);
            area = 2 * pi * radii * (height + radii);
            break;
        case 5: 
            printf("Enter the radius of the sphere: ");
            scanf("%f", &r);
            area = 4.0 / 3.0 * pi * pow(r, 3);
            break;
        default: 
            printf("Invalid option\n");
            return 1;
    }

    printf("Area = %f\n", area);
    return 0;
}
