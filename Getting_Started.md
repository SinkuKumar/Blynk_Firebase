# Introduction to IoT using Blynk & Google Firebase Cloud

## Day - 1:
1. Download and Install Arduino IDE Software
2. Install the ESP8266 board support package in Arduino IDE
3. Introduction to ESP8266 and GPIO pins
4. Programming on-board LED & Pushbutton Switch
5. Programming RGB LED
6. Programming Photoresistor(LDR) Sensor with LED
7. Programming Temperature & Humidity Sensors
8. Programming Relay & Install Blynk application

## Day - 2:
9. Create a Google-Firebase Cloud Account
10. Programming to Push Temperature and Humidity data to Google Firebase Cloud
11. Design Graphical User Interface(GUI) using Blynk App.
12. Programming Blynk Server to Control Light/Fan anywhere in the World using Blynk App.
13. Programming Blynk Server to Monitor Temperature & Humidity anywhere in the World using Blynk App.

### 1. Download and Install Arduino IDE Software:
- Visit [Software | Arduino](https://www.arduino.cc/en/software) and download the latest Arduino IDE suitable for your Operating System(OS).
![Arduino_IDE_Download.png](https://raw.githubusercontent.com/SinkuKumar/Blynk_Firebase/main/Assets/Arduino_IDE_Download.png "Arduino_IDE_Download")

- __Note:__ Avoid Installing Experimental Software i.e. Arduino IDE 2.0 beta.

- Locate setup file and Install Arduino IDE
![Arduino_IDE_Setup](https://raw.githubusercontent.com/SinkuKumar/Blynk_Firebase/main/Assets/Arduino_IDE_Setup.png "Arduino_IDE_Setup")

- Accept the license terms by clicking "I Agree"<br>
![Arduino_IDE_License](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/Arduino_IDE_License.png "Arduino_IDE_License")

- Make sure every component is selected and click "Next >"
![Arduino_IDE_Installation_Options](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/Arduino_IDE_Installation_Options.png "Arduino_IDE_Installation_Options")

- Leave destination folder to default and click "Install"
![Arduino_IDE_Installation_Folder](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/Arduino_IDE_Installation_Folder.png "Arduino_IDE_Installation_Folder")

- While installation OS may ask for permission. Tick Always trust software from "Arduino LLC" and click on install button.
![Arduino_IDE_Driver](https://raw.githubusercontent.com/SinkuKumar/Blynk_Firebase/main/Assets/Arduino_IDE_Driver.png "Arduino_IDE_Driver")

- To exit out of installation wizard, click on "Close"<br>
![Arduino_IDE_Completed](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/Arduino_IDE_Completed.png "Arduino_IDE_Completed") 
 

### 2. Install the ESP8266 board support package in Arduino IDE
### Installing with Boards Manager

Starting with 1.6.4, Arduino allows installation of third-party platform packages using Boards Manager. We have packages available for Windows, Mac OS, and Linux (32 and 64 bit).

- Install the current upstream Arduino IDE at the 1.8.9 level or later. The current version is on the [Arduino website](https://www.arduino.cc/en/main/software).
- Start Arduino and open the Preferences window.
![Arduino_IDE_File_Menu](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/Arduino_IDE_File_Menu.png "Arduino_IDE_File_Menu")

- Enter ```https://arduino.esp8266.com/stable/package_esp8266com_index.json``` into the *File>Preferences>Additional Boards Manager URLs* field of the Arduino IDE. You can add multiple URLs, separating them with commas.
![Arduino_IDE_Preferences](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/Arduino_IDE_Preferences.png "Arduino_IDE_Preferences")
- Click on "OK"
  
- Open Boards Manager from Tools > Board menu
![Arduino_IDE_Tools_Board_Menu](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/Arduino_IDE_Tools_Board_Menu.png "Arduino_IDE_Tools_Board_Menu")

- and install *esp8266* platform 
![Arduino_IDE_Tools_Board_Manager](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/Arduino_IDE_Tools_Board_Manager.png "Arduino_IDE_Tools_Board_Manager")

- once esp8266 board support is installed click on "Close"
![Arduino_IDE_Tools_ESP8266_Installation_Done](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/Arduino_IDE_Tools_ESP8266_Installation_Done.png "Arduino_IDE_Tools_ESP8266_Installation_Done")

- (and don't forget to select your ESP8266 board from Tools > Board menu after installation).
![Arduino_IDE_ESP8266_Board_Selection](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/Arduino_IDE_ESP8266_Board_Selection.png "Arduino_IDE_ESP8266_Board_Selection")

### 3. Introduction to ESP8266 and GPIO pins
![node-mcu_pin-out](https://github.com/SinkuKumar/Blynk_Firebase/raw/main/Assets/node-mcu_pin-out.jpg "node-mcu_pin-out")

