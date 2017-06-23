# ECCamp2017 Testbench/Setting code for sensors

### BlueTooth HC-05
	1. Enter AT mode.
	2. Upload code and open the serial monitor window.
		* Slave: BT_ATC_Setting_slave
		* Master: BT_ATC_Setting_master
	3. Copy down the information / Type the AT-commands.
		* For Slave: The device address should appear automatically. If not, type `AT+ADDR?` to get the address of slave.
		* For Master: The Master device needs to construct binding bundle with slave. So, type `AT+BIND=<slave_address>` to complete process.
		* **Notice: the format of address would be different between Slave/Master monitor windows. In Master, you should replace the colon`:` with comma`,`.