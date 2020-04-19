double x1=0, y1=1, x2=3, y2=7, x3=-1, y3=7; // y=2x^{2}-4x+1

void setup() {
  Serial.begin(9600);
  double a, b, c;

	a = (x1*(y3-y2) + x2*(y1-y3) + x3*(y2-y1))/((x1-x2)*(x1-x3)*(x2-x3));
	b = (y2-y1)/(x2-x1) - a*(x1+x2);
	c = y1 - a*x1*x1 - b*x1;
	
    Serial.print("a = ");
    Serial.println(a,5);
    Serial.print("b = ");
    Serial.println(b,5);
    Serial.print("c = ");
    Serial.println(c,5);

}

void loop() {

}
