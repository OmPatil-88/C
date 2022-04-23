#include<stdio.h>
#include<string.h>

//DEFINING STRUCT
struct MyPoint_olp {
	int x_olp;
	int y_olp;

};

//DEFINING STRUCT
struct MyPointProperties_olp {
	int quadrant_olp;
	char axis_location_olp[10];
};

int main(void) {
	
	//variable declarations
	struct MyPoint_olp point_olp;
	struct MyPointProperties_olp point_properties_olp;

	//code
	printf("\n\n");
	printf("Enter X-Coordinate For A Point : ");
	scanf("%d", &point_olp.x_olp);
	printf("Enter Y-Coordinate For A Point : ");
	scanf("%d", &point_olp.y_olp);

	printf("\n\n");
	printf("Point Co-ordinates (x, y) Are : (%d, %d) !!!\n\n",point_olp.x_olp,point_olp.y_olp);
	
	if (point_olp.x_olp == 0 && point_olp.y_olp == 0)
		printf("The Point Is The Origin (%d, %d) !!!\n", point_olp.x_olp, point_olp.y_olp);
	else {
		if (point_olp.x_olp == 0) {
			if (point_olp.y_olp < 0)
				strcpy(point_properties_olp.axis_location_olp, "Negative Y");
			if (point_olp.y_olp > 0)
				strcpy(point_properties_olp.axis_location_olp, "Positive Y");
			
			point_properties_olp.quadrant_olp = 0;
			printf("The Point Lies On The %s Axis !!!\n\n\n", point_properties_olp.axis_location_olp);
		}
		else if (point_olp.y_olp == 0) {
			if (point_olp.x_olp < 0)
				strcpy(point_properties_olp.axis_location_olp, "Negative Y");
			if (point_olp.x_olp > 0)
				strcpy(point_properties_olp.axis_location_olp, "Positive Y");
			
			point_properties_olp.quadrant_olp = 0;
			printf("The Point Lies On The %s Axis !!!\n\n\n", point_properties_olp.axis_location_olp);
		
		}
		else {
			point_properties_olp.axis_location_olp[0] = '\0';
			if (point_olp.x_olp > 0 && point_olp.y_olp > 0)
				point_properties_olp.quadrant_olp = 1;
			else if (point_olp.x_olp < 0 && point_olp.y_olp > 0)
				point_properties_olp.quadrant_olp = 2;
			else if (point_olp.x_olp < 0 && point_olp.y_olp < 0)
				point_properties_olp.quadrant_olp = 3;
			else
				point_properties_olp.quadrant_olp = 4;
			printf("The Point Lies In Quadrant Nuumber %d !!!\n\n",point_properties_olp.quadrant_olp);
		}
	}
	return (0);
}