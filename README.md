# ECCamp2017 Testbench/Setting code for sensors

### BlueTooth HC-05
1. Enter AT mode.
2. Upload code and open the serial monitor window.
	* Slave: BT_ATC_Setting_slave
	* Master: BT_ATC_Setting_master
3. Copy down the information / Type the AT-commands.
	* For Slave: The device address should appear automatically. If not, type `AT+ADDR?` to get the address of slave.
	* For Master: The Master device needs to construct binding bundle with slave. So, type `AT+BIND=<slave_address>` to complete process.
	* **Notice: the format of address would be different between Slave/Master monitor windows. In Master, you should replace the colon`:` with comma`,`.**
4. Check if two BT device are connected to each other.

### 3-axis Accerometer ADXL345
1. In Arduino IDE, add "/ADXL345/I2Cdev.zip" and "/ADXL345/ADXL345.zip" two libraries by "草稿碼" > "匯入程式庫" > "加入.zip程式庫".
2. Upload code in /ADXL345/ADXL345_raw, and open the serial monitor windows to check if the device works.

### MotorDriver L9110
1. Connect LEDs with Dubons.
2. Upload code in /MotorDriver_L9110/

### Buzzer & Ultrasonic
1. Upload codes from "檔案" > "範例"