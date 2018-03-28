#include "BMI.h"


BMI::BMI(){
	height=0;
	weight=0;
 }

// constructor without given value

BMI::BMI( float HEIGHT , float WEIGHT ){
	setHeight( HEIGHT );
	setWeight( WEIGHT );
}

// use set&get function read the initial data and get data member


float BMI::getHeight() const {
    	return height;
}

// avoiding changing the data 

void BMI::setHeight(float newheight) {
	height = newheight;
}
    
float BMI::getWeight() const {
    	return weight;
}

void BMI::setWeight(float newweight) {
    	weight = newweight;
}


// the smae detail as above

float BMI::BMI_calculator() {
        if ( weight==0 ) {
           cout<< "wrong expression" << endl ;
           return 0;
	}  
	else  {
            value_BMI = weight/(0.01*height)/(0.01*height) ;
        }
        return value_BMI;
    }

// BMI calculating
    
        
    string BMI::category() {

        return  (value_BMI < 15  ) ? "Very severely underweight" :
                (value_BMI < 16  ) ? ("Severely underweight") :
                (value_BMI < 18.5) ? ("Underweight") :
                (value_BMI < 25  ) ? ("Normal") :
                (value_BMI < 30  ) ? ("Overweight") :
                (value_BMI < 35  ) ? ("Obese Class I (Moderately obese)") :
                (value_BMI < 40  ) ? ("Obese Class II (Severely obese) ") :
               			     ("Obese Class III (Very severely obese)") ;
        
    }

// category classification

        
