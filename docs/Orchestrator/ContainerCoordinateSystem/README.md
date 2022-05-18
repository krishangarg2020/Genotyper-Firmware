

# Containers Co-Ordinate [Opentron Code VS. Standard]

## Objective:-

- To determine and understand the position and geometric co-ordinate of the modules (containers) used in Opentron OT-2 robotic fluid handling system.
- To verify and compare the modules (containers) used in Opentron OT-2 robotic fluid handling system with the standard modules (containers) along with the Geometric coordinate codes. 



## How the Co-ordinate system works for Opentron OT-2 robotic fluid handling system :

For example, lets take a simple geometric co-ordinate code of 6 well plate.

###### Dimension of the plate -

- Depth of well : 17.4mm
- Diameter: 22.5mm
- Total working liquid volume: 16800ul
- Centre distance between one well to another well in X direction is **39.12mm** as well as in Y direction also is **39.12mm**.

Now the code For reaching the pipette each and every well -  

```json
"6-well-plate": {
               "origin-offset": {                          
                    "x": 23.16,
                    "y": 24.76
               },
               "locations": {
                    "A1": {
                         "x": 0,
                         "y": 0,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    },
                    "B1": {
                         "x": 39.12,
                         "y": 0,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    },
                    "A2": {
                         "x": 0,
                         "y": 39.12,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    },
                    "B2": {
                         "x": 39.12,
                         "y": 39.12,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    },
                    "A3": {
                         "x": 0,
                         "y": 78.24,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    },
                    "B3": {
                         "x": 39.12,
                         "y": 78.24,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    }
               }
          }
```

The Opentron OT-2 robotic fluid handling system has 3 Axis (XYZ) where the Electronic pipette can travel.

- **X-axis** for linier traveling the pipette in X direction.
- **Y-axis** for linier traveling the pipette in Y direction.
- **Z-axis** for linier traveling the pipette in Z direction.

Each well named for simplify and defining the code. The 6 well plate have 6 wells. 2 column and 3 rows. The column named as **A** and **B** and the rows named as **1**, **2** & **3**.





```json origin offset for 6 well plate
"origin-offset": {                         
                    "x": 23.16,
                    "y": 24.76
                 }
```

That line of code define the safe origin-offset position of the pipette.


```json move location to A1 well
"A1": {
                         "x": 0,
                         "y": 0,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    }
```

- From the safe origin-offset position the Pipette move **23.16mm** in **X** direction and **24.76mm** in **Y** direction to reach **A1** position.
- The coordinate of the **A1** position is X=0mm, Y=0mm & Z=0mm.
- **"depth": 17.4** means the pipette can travel **17.4mm** in **Z** direction to reach the bottom of the plate in short the height of the well.
- **"diameter": 22.5** means the maximum diameter of the wells is **22.5mm**.
- **"total-liquid-volume": 16800** means the maximum volume of liquid store in one well is **16800ul**.


Similarly for reaching the position at **B1** the following code will be follows.

```json move location to B1 well
"B1": {
                         "x": 39.12,
                         "y": 0,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                   }
```

- From the **A1** position the Pipette move **39.12mm** in **X** direction and **0.0mm** in **Y** direction and **0.0mm** in **Z** direction to reach **B1** position.
- The coordinate of the **B1** position is X=39.12mm, Y=0mm & Z=0mm.
- Similarly **"depth": 17.4** means the pipette can travel **17.4mm** in **Z** direction to reach the bottom of the plate in short the height of the well.
- Similarly **"diameter": 22.5** means the maximum diameter of the wells is **22.5mm**.
- Similarly **"total-liquid-volume": 16800** means the maximum volume of liquid store in one well is **16800ul**.

Folloded by reaching the **B3** position the following code will be follows.

```json move location to B3 well
"B3": {
                         "x": 39.12,
                         "y": 78.24,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    }
```
- From the **A1** position the Pipette move **39.12mm** in **X** direction and **78.24mm** in **Y** direction and **0.0mm** in **Z** direction to reach **B3** position.
- The coordinate of the **B3** position is X=39.12mm, Y=78.24mm & Z=0mm.
- **"depth": 17.4** means the pipette can travel **17.4mm** in **Z** direction to reach the bottom of the plate in short the height of the well.
- **"diameter": 22.5** means the maximum diameter of the wells is **22.5mm**.
- **"total-liquid-volume": 16800** means the maximum volume of liquid store in one well is **16800ul**.



## All Comparison table with match and missmatch data of the container modules.
###### Table-1 : 96 WELL PLATE

|                         | FROM OPENTRON CODE FOR 96 WELL PLATE | BIORAD PCR 96 WELL PLATE | STANDARD 96 WELL PLATE |  RESULT   | CODE LINK / CAD LINK |
| :---------------------: | :----------------------------------: | :----------------------: | :--------------------: | :-------: | :------------------: |
|        **Depth**        |               20.2 mm                |         15.0 mm          |        11.1 mm         | Not Match |                      |
|      **Diameter**       |               5.46 mm                |         5.50 mm          |         6.6 mm         | Not Match |                      |
| **Total Liquid Volume** |                300 ul                |          230 ul          |         379 ul         | Not Match |                      |
| **Geometric position**  |                  -                   |            -             |           -            |   Match   |                      |





###### Table-2 : 6 WELL PLATE

|                         | FROM OPENTRON CODE 6 WELL PLATE | STANDARD 6 WELL PLATE | RESULT    | CODE LINK / CAD LINK |
| ----------------------- | ------------------------------- | --------------------- | --------- | -------------------- |
| **Depth**               | 17.4 mm                         | 17.0 mm               | Not Match |                      |
| **Diameter**            | 22.5 mm                         | 35.0 mm               | Not Match |                      |
| **Total Liquid Volume** | 16800 ul                        | 16355 ul              | Not Match |                      |
| **Geometric position**  | -                               | -                     | Match     |                      |





###### Table-3 : TIP RACK 10ul

|                        | FROM OPENTRON CODE TIP RACK 10ul | STANDARD TIP RACK 10ul | RESULT | CODE LINK / CAD LINK |
| ---------------------- | -------------------------------- | ---------------------- | ------ | -------------------- |
| **Depth**              | 56 mm                            | -                      | -      |                      |
| **Diameter**           | 3.5 mm                           | 3.5 mm                 | Match  |                      |
| **Geometric position** | -                                | -                      | Match  |                      |





###### Table-4 : TIP RACK 1000ul

|                        | FROM OPENTRON CODE TIP RACK 1000ul | STANDARD TIP RACK 1000ul | RESULT    | CODE LINK / CAD LINK |
| ---------------------- | ---------------------------------- | ------------------------ | --------- | -------------------- |
| **Depth**              | 98.07 mm                           | -                        | -         |                      |
| **Diameter**           | 7.62 mm                            | 7.5 mm                   | Not Match |                      |
| **Geometric position** | -                                  | -                        | Match     |                      |





###### Table-5 : T75 FLASK

|                         | FROM OPENTRON CODE T75 FLASK | STANDARD T75 FLASK | RESULT | CODE LINK / CAD LINK |
| ----------------------- | ---------------------------- | ------------------ | ------ | -------------------- |
| **Depth**               | 163 mm                       | -                  | -      |                      |
| **Diameter**            | 25 mm                        | 25 mm              | Match  |                      |
| **Total Liquid Volume** | 75000 ul                     | 75000 ul           | Match  |                      |
| **Geometric position**  | -                            | -                  | Match  |                      |





###### Table-6 : T25 FLASK

|                         | FROM OPENTRON CODE T25 FLASK | STANDARD T25 FLASK | RESULT    | CODE LINK / CAD LINK |
| ----------------------- | ---------------------------- | ------------------ | --------- | -------------------- |
| **Depth**               | 99 mm                        | -                  | -         |                      |
| **Diameter**            | 18 mm                        | 16 mm              | Not Match |                      |
| **Total Liquid Volume** | 25000 ul                     | 25000 ul           | Match     |                      |
| **Geometric position**  | -                            | -                  | Match     |                      |









