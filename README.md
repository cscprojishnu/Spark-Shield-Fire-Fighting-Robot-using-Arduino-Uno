# 🔥 Spark Shield: Arduino-Powered Fire Extinguisher Robot  

### 🚀 Autonomous Fire Detection and Extinguishing System  

**Authors:**  
- 🧑‍💻 Jishnu Teja Dandamudi  
- 🧑‍💻 Rama Muni Reddy Yanamala  
- 🧑‍🏫 Anand Kumar V
**Institution:** Amrita School of Artificial Intelligence, Amrita Vishwa Vidyapeetham, Coimbatore, India  


---

## 🧠 Abstract  

**Spark Shield** is an Arduino-based autonomous firefighting robot designed to **detect, navigate, and extinguish fires** in closed environments.  
The robot integrates **flame sensors**, **ultrasonic sensors**, and **a water pump system** to perform autonomous fire suppression while avoiding obstacles.  
It aims to **reduce human intervention** in hazardous environments and ensure **rapid response** during fire emergencies.  

---

## ⚙️ Features  

✅ **Autonomous Fire Detection** – Detects flames using multiple sensors.  
✅ **Smart Navigation** – Uses ultrasonic sensors to avoid obstacles.  
✅ **Automatic Extinguishing** – Activates a water pump via relay and servo mechanisms.  
✅ **Cost-Effective Design** – Built with affordable components (Arduino Uno, L298N driver, 5V water pump).  
✅ **Compact and Portable** – Small chassis enables movement in confined spaces.  
✅ **Future-Ready** – Expandable with GSM, GPS, and AI-based fire-type detection.  

---

## 🧩 System Architecture  

**Core Components:**
- Arduino Uno (Microcontroller)  
- Flame Sensors (x3)  
- Ultrasonic Sensor (HC-SR04)  
- L298N Motor Driver Module  
- 5V Relay Module  
- 5V Mini Water Pump  
- SG90 Servo Motor  
- DC Motors and Chassis  
- 9V Power Source  

---

## 🧰 Working Principle  

1. 🔍 **Detection:** Flame sensors detect fire up to 1.97 meters.  
2. 🧭 **Navigation:** Arduino calculates direction; motors move the robot toward the fire.  
3. 💧 **Action:** Relay and servo activate the water pump to spray water for a few seconds.  
4. 🧠 **Decision:** The robot halts until another flame is detected.  

---

## 🧪 Experimental Results  

| Distance (m) | Extinguishing Time (s) | Message Time (s) |
|--------------|-------------------------|------------------|
| 0.50         | 3.4                     | 1.2              |
| 1.00         | 4.2                     | 1.5              |
| 2.00         | 5.7                     | 2.2              |

**Performance Equations:**  
- 🔸 `Text = -0.757D² + 3.530D + 1.633`  
- 🔸 `Tmsg = -0.322D² + 1.544D + 0.382`  

---


## 💡 Advantages  

- Reduces human exposure to fire hazards  
- Low power consumption and autonomous control  
- Compact, mobile, and easy to deploy  
- Highly cost-effective and efficient  
- Fast response and high detection accuracy  

---

## 🔮 Future Enhancements  

- Integration of **GSM & GPS modules** for real-time alerting  
- Implementation of **AI-based fire classification**  
- **360° sensor coverage** and **terrain adaptability**  
- Development of **waterproof and self-balancing** chassis  
- Use of multiple extinguishing agents (CO₂, foam, etc.)  

---

## 🧭 Repository Structure  

