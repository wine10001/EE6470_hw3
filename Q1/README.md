## Double Filter Implementation Using Status HLS

## Usage
1. Clone the file to ./ee6470 folder (Git Bash)
```properties
git clone https://github.com/wine10001/EE6470_hw3.git double_stratus
```
2. Source the setup file
```properties
cd stratus
```
```properties
source staratus_env.sh
```
3. Go to stratus directory
```properties
cd stratus
```
4. Run SystemC-based behavioural simulation
```properties
make sim_B
```
5. Run HLS synthesis and Verilog simulation (BASIC)
```properties
make sim_V_BASIC
```
6. Run HLS synthesis and Verilog simulation (Loop Unrolling)
```properties
make sim_V_FLAT_UNROLL_ALL_FAST
```
7. Run HLS synthesis and Verilog simulation (Loop Pipelining)
(Don't comment out Line 12-14 in DoubleFilter.cpp)
```properties
make sim_V_PIPELINE
```
