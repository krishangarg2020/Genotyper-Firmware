# Objective

* To detect different DNA concentration samples using photodiode.
* PSOC internal Transimpedance amplifier will be used to convert the current from the Photodiode to Voltage

# Equipment used


* PSOC5LP                                           
* USB-A CABLE Female to male                                        
* DNA Quantification Setup
* (Photo Diode & UV LED )
* PSOC Creator software                                    
* LT3092 current source
* DC Supply 7.5V, 160mA
* Resistors - R_set=22k, R_out= 1 Ohm for 160mA current   

# PSOC Configuration to sense photodiode current using internal Transimpedance Amplifier



![dna_detection_psoc_config](https://user-images.githubusercontent.com/86110190/147202938-74631f4c-c5a3-43ff-9c4f-2ae2b5b16dc2.png)

![dna_detection_pinout](https://user-images.githubusercontent.com/86110190/147202949-4d8439d4-6c3c-4e98-a0fe-d96e7ecbe15c.png)
![dna_detection_main_cpp](https://user-images.githubusercontent.com/86110190/147202954-29bee2fb-778e-445d-bea6-a64ae92b22c1.png)
 # 1st Setup
 * Photodidoe - [PC10-2-TO5](https://www.mouser.in/ProductDetail/First-Sensor/PC10-2-TO5?qs=IxDs%252B9hDEuBXeJgE5fsD8A%3D%3D)
 * Active area - 10 mm square
 * UV LED - [XST-3535-UV-A60-CE275-00](https://www.mouser.in/ProductDetail/Luminus-Devices/XST-3535-UV-A60-CE275-00?qs=XeJtXLiO41SVe8YDB0XxlA%3D%3D)
 * Wavelength - 275nm
 * Current- 160mA
 * R_out -1 Ohm
 * ![dna_detection_setup](https://user-images.githubusercontent.com/86110190/147203541-05c1fa1a-aa9a-4da5-b43d-23d88b4d639c.jpeg)
 * ![setup](https://user-images.githubusercontent.com/86110190/147203549-c154c46d-8c18-405e-a902-14642da40ad0.jpeg)

## Test Results
| Reading  | Blank Sample  | Sample 1  | Sample 2  | Sample 3  | Sample 4  | Sample 5  |
|  ---- | ----  | ----  | ----  | ----  | ----  | ----  |
| 1st Reading   | 1.86  | 1.38  |  1.68 | 2.02  | 2  | 2.02  |
| 2nd Reading  |  2.14 |  1.4 |  1.82 |  2.06 | 1.96  | 2  |
| 3rd Reading  |  1.96 | 1.38  |  1.8 | 2.12  | 1.96  | 2  |
| 4th Reading  |  2.03 |  1.38 |  1.8 | 2.12  | 1.96  |  1.97 |
| 5th Reading  |  2.13 |  1.36 |  1.72 | 2.02  | 2  | 1.9  |

### DNA concentration
| Sample  | Actual |  Calculated |
| ----  | ----  | ----  |
| Sample 1  | 86.343  |  93.4   | 
| Sample 2  | 10.625  |  13.34   |  
| Sample 3  | 0.603  |   1.9  |  
| Sample 4  | -7.43  |   0.27  |  
| Sample 5  |  -3.682 |   0.03  |  

![dna_conc](https://user-images.githubusercontent.com/86110190/147212137-442aa5e9-2c90-497d-8451-5d884cc8340a.jpeg)
![dna_conc_actual](https://user-images.githubusercontent.com/86110190/147212142-d78acf58-cf7c-4c57-9b1d-965ff2e9a5ea.jpeg)

# Graphical Representation of results
![graphical_representation_of_different_conc_dna_detected_in_volt](https://user-images.githubusercontent.com/86110190/147212015-43fe24a7-ae74-4823-bd96-b77746d81e43.png)




