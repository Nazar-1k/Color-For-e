# ColorForсe
Sorting device ColorForce based on the hardware and computing platform Arduino.

![image](https://user-images.githubusercontent.com/82716260/189419034-a3cb2f75-0f14-4fbd-a833-26aee5cae31a.png)

Out of a large number of colors, we consider our favorite colors to be more pleasing to the eye and to some extent "tastier" than others. Remembering us in childhood, when it came to choosing food, of course we chose our favorite shade. M&M's are popular chocolates produced by Mars LLC. Our device will sort this chocolate dragee so that you can enjoy the taste of the "tastiest color" (red, blue, green, orange, yellow, or brown).



The goal of our project is to build a sorting device based on the interaction of the Arduino hardware and computing platform, the TCS230 color sensor, two MG995 Tower Pro servo motors using the Arduino IDE environment using C++/C functions.

# Work of the device

We place M&M's of different colors in ColorForce. These dragees fall into a special tube, where one by one the upper servo motor moves them to the sensor. Then the candy falls under the light of the LEDs of the color sensor. The light is reflected from the candy and falls on the sensor, as a result of which information about the color is read. After that, the lower servo motor rotates the guide bar to a certain angle corresponding to the candy color container. Next, the servo drive releases the M&M's and they fall into the desired tank.

We will use the TCS230 color sensor to read the colors. The TCS230 microcircuit converts the intensity of the color spectrum into a signal of different frequencies. The intensity of the color spectrum is inversely proportional to the frequency of the output signal.


![image](https://user-images.githubusercontent.com/82716260/189423112-872ec05f-d6d4-4606-abbb-3f5690bcdc83.png) 
Color sensor TCS230

# Photo of the device
![IMG_20210220_203801](https://user-images.githubusercontent.com/82716260/189418528-f475b217-5773-4537-b9f3-107d666d276e.jpg)
