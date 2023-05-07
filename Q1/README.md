## Median and Mean Filter Implementation Using Status HLS

## Usage
1. Clone file to ./ee6470 folder (Git Bash)
```properties
git clone https://github.com/wine10001/EE6470_hw3
```
2. Source the setup file
```properties
cd EE6470_hw3/Q1/stratus
```
```properties
source /usr/cadtool/user_setup/01-cadence_license_set.cshset
source /usr/cad/cadence/cic_setup/stratus.cshrc
source /usr/cadtool/user_setup/03-xcelium.csh
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

