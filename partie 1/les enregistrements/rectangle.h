
struct rectangle{
	float x;
	float y;
	float s;
	float p;
	
};
typedef struct rectangle rectangle;

float superficie(rectangle r){
	return r.x*r.y;
}
float perimetre(rectangle r){
	return (r.x+r.y)/2;
}
