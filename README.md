TouchGfx NumericKeypad CustomContainer:
 [ReadMe.doc.docx](https://github.com/user-attachments/files/24112331/ReadMe.doc.docx)
![image](https:////github.com/user-attachments/files/24112331/numeric_keypd.PNG)

Steps to use it in your TouchGFX project:
1.	Import the CustomContainer package “ModelKeypadCntnr1.tpkg” in your TouchGFX project (Edit->import->Custom Container)
2.	Goto your CustomContainer  components and pick the ModelKeypadCntr1 and place that on your Screen ( we used Screen2 in this example), preferably under modalWindow.
3.	Then Modify your Screen2View.c and Scren2View.h files as shown in the attached files
4.	You can use this for password or for normal application by setting or resetting the flag in the function call 
modelKeypadCntnr11.setType((const char *)"ENTER PASSWORD",4,true);
5.	send an email to sailurao@yahoo.com if you need any help


