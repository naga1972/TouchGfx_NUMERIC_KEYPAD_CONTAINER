#ifndef SCREEN2VIEW_HPP
#define SCREEN2VIEW_HPP

#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

class Screen2View : public Screen2ViewBase
{
public:
    Screen2View();
    virtual ~Screen2View() {}
    virtual void tearDownScreen();
    virtual void setupScreen();
    virtual void PasswordScreen(); //show the password prompt screen
    void modalKeypadCntnr1ExitHandler(uint8_t); //call back function of ModalKeyPadCntainor exit handler

protected:
	//Declare callback used by the custom containers to communicate with the view
    Callback<Screen2View, uint8_t> viewCallback;



};

#endif // SCREEN2VIEW_HPP
