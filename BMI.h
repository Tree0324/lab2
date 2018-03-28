#include <iostream>
#include <string>
using namespace std;

class BMI{
	public:
		BMI();
		BMI(float HEIGHT, float WEIGHT);
		
		float getHeight() const;
		void setHeight(float newheight);

		float getWeight() const;
		void setWeight(float newweight);

		float BMI_calculator();
		string category();

	private:
		float height;
		float weight;
		float value_BMI;

};
		
