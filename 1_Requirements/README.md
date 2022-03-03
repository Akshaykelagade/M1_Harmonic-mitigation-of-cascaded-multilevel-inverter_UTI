# Description
This project presents a new idea to solve the selective harmonic elimination (SHE) equations with non equal dc sources using Newton Raphson Method (NRM).
The NRM technique effectively eliminates the lower order harmonics from the output voltage of the converter.
In this project, it has been also shown that, if the notch angles determined for equal dc sources are used for unequal dc sources then the content of lower order harmonics 
increases, as a result of this voltage THD also increases.
           Simulation results of 11-level cascaded multilevel inverter with unequal dc sources are shown and the effects of variation of input dc voltage on output voltage THD
of the converter are presented. The proposed technique effectively calculates the optimum value of switching angles with variation in input dc bus voltage over the entire 
range of modulation index.  

# Requirements
## High level requirements
| Id          |  Description  |    status  |
| :--:        | :--:          |   :--:     |
| HLR1        | Reduce harmonic distortion | Implemented |
| HLR2        | Protects motor from long lead effects | Implemented |
| HLR3        | Improves electrical system efficiency | Implemented |
| HLR4        | Reduction of harmonics to 5% or less  | Implemented |
| HLR5        | Improved power factors and reduce system loss | Implemented |


## Low level requirements
| Id          |  Description  |    status  |
| :--:        | :--:          |   :--:     |
| LLR1        | Use "Hybrid Newton Raphson Method" which effectively eliminates the lower order harmonics from the output voltage of the converter| Implemented |
|LLR2         | The conditions for switching angle is φ should lie between following condition:0≤φ1≤φ2≤φ3≤.....φ5≤π/2 | Implemented |

# Objectives.
1) We propose a DC-AC conversion system based on a single-phase inverter.

2) We propose a converter architecture id based on a full bridge topology with additional power
switches and diodes connected to the midpoint of dc link.

3) The reference signal is produced as a multilevel shaped output voltage wave.

4) The results demonstrate that the system can achieve lower total harmonic distortion on the output
voltage and load current.

5) We propose the development of a novel modified H-bridge single phase multilevel inverter that
has two diodes switches and a novel pulse width modulated technique. 

## SWOT ANALYSIS

![swot 2](https://user-images.githubusercontent.com/98802184/156630444-e7c2edf3-a57e-443b-b9f2-da7884e9a12b.PNG)


## 4W’s and 1H  
![swot2](https://user-images.githubusercontent.com/98802184/156630403-e4eb373a-2221-40d1-948d-b84762b6f89c.PNG)


