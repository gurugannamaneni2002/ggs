 *simulation of dtl
 .model cba npn
 q1 3 2 0 cba
 r1 4 3 1000
 r2 1 4 47K
 v2 4 0 dc 5
  .MODEL DIODE D
 D1 1 2 DIODE
 D2 1 5 DIODE
 vin 5 0 PULSE (0 5 0 0 0 10m 20m 5)
  .tran 0.1m 100m
.control
run
plot V(3) V(5)
set color0 = white
set color1 = black
set xbrushwidth = 10
.endc
 