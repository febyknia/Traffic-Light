# ESP32-BASED TRAFFIC LIGHT SIMULATION
> This project is a traffic light simulation activity using Wokwi based on ESP3 Microcontroller and Visual Studio Code C++ language. The output of this simulation is red (20 seconds), yellow (5 seconds), and green (30 seconds) lights that are lit alternately.
<img width="794" alt="Screenshot 2025-02-25 104820" src="https://github.com/user-attachments/assets/0dc15b47-ae84-4734-8e5a-f8e33eb6cee1" />

        {
          "version": 1,
          "author": "Anonymous maker",
          "editor": "wokwi",
          "parts": [
            { "type": "board-esp32-devkit-c-v4", "id": "esp", "top": -28.8, "left": -91.16, "attrs": {} },
            {
              "type": "wokwi-led",
              "id": "led1",
              "top": 37.2,
              "left": 141,
              "rotate": 90,
              "attrs": { "color": "red", "flip": "" }
            },
            {
              "type": "wokwi-led",
              "id": "led2",
              "top": 75.6,
              "left": 141,
              "rotate": 90,
              "attrs": { "color": "green", "flip": "" }
            },
            {
              "type": "wokwi-led",
              "id": "led3",
              "top": 56.4,
              "left": 141,
              "rotate": 90,
              "attrs": { "color": "yellow", "flip": "" }
            },
            {
              "type": "wokwi-resistor",
              "id": "r1",
              "top": 80.75,
              "left": 48,
              "attrs": { "value": "1000" }
            },
            {
              "type": "wokwi-resistor",
              "id": "r2",
              "top": 99.95,
              "left": 48,
              "attrs": { "value": "1000" }
            },
            {
              "type": "wokwi-resistor",
              "id": "r3",
              "top": 61.55,
              "left": 48,
              "attrs": { "value": "1000" }
            }
          ],
          "connections": [
            [ "esp:TX", "$serialMonitor:RX", "", [] ],
            [ "esp:RX", "$serialMonitor:TX", "", [] ],
            [ "esp:16", "r2:1", "black", [ "h0" ] ],
            [ "esp:5", "r1:1", "black", [ "h0" ] ],
            [ "esp:19", "r3:1", "black", [ "h0" ] ],
            [ "r3:2", "led1:A", "black", [ "v0" ] ],
            [ "r1:2", "led3:A", "black", [ "v0" ] ],
            [ "r2:2", "led2:A", "black", [ "v0" ] ],
            [ "esp:GND.3", "led1:C", "black", [ "h0" ] ],
            [ "led1:C", "led3:C", "black", [ "h-9.6", "v19.6" ] ],
            [ "led3:C", "led2:C", "black", [ "h-9.6", "v19.6" ] ]
          ],
          "dependencies": {}
        }

# Traffic Light Program Code
        #include <Arduino.h> 
        
        int red = 19;
        int yellow = 5;
        int green = 16;
        
        void setup() {
         pinMode(red, OUTPUT);
         pinMode(yellow, OUTPUT);
         pinMode(green, OUTPUT);
        }
        
        void loop() {
         digitalWrite(green, HIGH);
         delay(30000);
         digitalWrite(green, LOW);
        
         digitalWrite(yellow, HIGH);
         delay(5000);
         digitalWrite(yellow, LOW);
        
         digitalWrite(red, HIGH);
         delay(20000);
         digitalWrite(red, LOW);
        }

# Simulation result documentation
![Uploading Screenshot 2025-02-25 104955.png…]()
![Uploading Screenshot 2025-02-25 105143.png…]()
![Uploading Screenshot 2025-02-25 105218.png…]()



