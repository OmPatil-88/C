#include<stdio.h>

int main(void) {

	// variable declarations
	int length_olp, breadth_olp, area_olp;

	struct MyPoint {
		int x;
		int y;
	};

	struct Rectangle {
		struct MyPoint point_01_olp;
		struct MyPoint point_02_olp;
	};
	struct Rectangle rect_olp = { {2,3} ,{5,6} };


	// code
	length_olp = rect_olp.point_02_olp.y - rect_olp.point_01_olp.y;
	if (length_olp < 0)
		length_olp = length_olp * -1;

	breadth_olp = rect_olp.point_02_olp.x - rect_olp.point_01_olp.x;
	if (breadth_olp < 0)
		breadth_olp = breadth_olp * -1;

	area_olp = length_olp * breadth_olp;

	printf("\n\n");
	printf("Length Of Rectangle =%d\n\n", length_olp);
	printf("Breadth Of Rectangle = %d\n\n", breadth_olp);
	printf("Area Of Rectangle = %d\n\n", area_olp);
	return (0);
}