#include<stdio.h>

union shape{
    int sides;
    int radius;
    int l_b[2]; 
};

enum shapeType{
    circle,triangle,rectangle
};

struct shapeInfo{
    union shape s;
    enum shapeType st;

};

void printShapeInfo(struct shapeInfo T){
    switch (T.st)
    {
    case 0:
        printf("Shape : Cirlce\nRadius: %d\n",T.s.radius);
        break;
    
    case 1:
        printf("Shape : Triangle\nNo. of sides: %d\n",T.s.sides);
        break;
    
    case 2:
        printf("Shape : Rectangle\nBase: %d\nLength: %d\n",T.s.l_b[1],T.s.l_b[0]);
        break;
    
    default:
        break;
    }
}
int main(){

    struct shapeInfo s1,s2,s3;
    s1.s.radius = 5;
    s1.st = circle;
    printShapeInfo(s1);
    s2.s.sides = 3;
    s2.st = triangle;
    printShapeInfo(s2);
    s3.s.l_b[0] = 6;
    s3.s.l_b[1] = 6;
    s3.st = rectangle;
    printShapeInfo(s3);


}