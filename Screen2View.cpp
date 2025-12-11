#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View()
//Define the viewcallback by tying it to a handler
 : viewCallback(this, &Screen2View::modalKeypadCntnr1ExitHandler)
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

//invoke password screen - calling keypad custom container "ModelKeypadCntr11"
void Screen2View::PasswordScreen()
{
	modalWindow1.show();
	modelKeypadCntnr11.setViewCallback(viewCallback);    //setting Callback function for CustomContainer1
	modelKeypadCntnr11.setType((const char *)"ENTER PASSWORD",4,true); //4 characters max
	modelKeypadCntnr11.setVisible(true);
	modelKeypadCntnr11.invalidate();
}


//Custom Container Callback function -KeypadContainer callback on exit
void Screen2View::modalKeypadCntnr1ExitHandler(uint8_t val)
{

	// Show or hide custom container based on the type received from callback
	//touchgfx_printf("Received callback from: %d\n", val)
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s", modelKeypadCntnr11.stringvalue); //string to be displayed
    textArea3.invalidate();
    modelKeypadCntnr11.setVisible(false);
    modelKeypadCntnr11.invalidate();
	modalWindow1.hide();

}
