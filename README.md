# RL_NOTE

---
+ **Locomotion**
  
![image](https://github.com/rlawlsdn1130/RL_NOTE/assets/88181153/911bb458-f8b0-4d2b-bf0e-7d21b74e45b2)
<img src="https://github.com/rlawlsdn1130/RL_NOTE/assets/88181153/642881e8-058c-4d8d-8fe1-84afb4678a9c" width="322px" height="177px">
<img src="https://github.com/rlawlsdn1130/RL_NOTE/assets/88181153/b9b92cef-f9b6-4a2a-a89a-9a8d2718ea33" width="360px" height="180px">

+ ~~**Fall Recovery**~~

+ **Generate Terrain**

<img src="https://github.com/rlawlsdn1130/RL_NOTE/assets/88181153/9edb3527-d3b1-4659-a122-6e0a7a7ce3b8" width="320" height="200"/>
<img src="https://github.com/rlawlsdn1130/RL_NOTE/assets/88181153/38020cf5-6a52-4e2a-8a48-3542e39fe28f"/>

---
**TODO**

>* [x] HR robot model

>* [ ] **Locomotion in generated custom terrain**
>>* [ ] Debug gathering height map information in generated custom terrain
>>* [x] ~~Add 6d commands to low-level policy~~
>>* [ ] Add spherical scans to high-level policy
>
>  **Reference**
>  * **[Learning to walk in confined spaces using 3D representation](https://takahiromiki.com/publication-posts/learning-to-walk-in-confined-spaces-using-3d-representation/?i=1)**
>  * [IsaacGym point-cloud example](https://gist.github.com/gavrielstate/8c855eb3b4b1f23e2990bc02c534792e)
>  * [Nvidia / wrap](https://github.com/NVIDIA/warp)
>  * [parkour-ANYmal](https://www.science.org/doi/10.1126/scirobotics.adi7566)
>  * [DTC-ANYmal](https://www.science.org/doi/10.1126/scirobotics.adh5401)
>  * [extreme-parkour](https://github.com/chengxuxin/extreme-parkour)
>  * [parkour](https://github.com/ZiwenZhuang/parkour)


>* [ ] **Learning manipulation and locomotion**
>>* [ ] Fall recovery with manipulator
>>* [ ] Fall recovery using exteroception observation
>
>  **Reference**
>  * [Pedipulate-ANYmal](https://sites.google.com/leggedrobotics.com/pedipulate)
>  * [Loco manipulation-ANYmal](https://www.science.org/doi/10.1126/scirobotics.adg5014)
>  * [Fall recovery-ANYmal](https://arxiv.org/abs/2303.05486)
>  * [Deep-Whole-Body-Control](https://github.com/MarkFzp/Deep-Whole-Body-Control)
>  * [DexterousHands](https://github.com/PKU-MARL/DexterousHands)


>* [ ] **Multi-agent DRL**
>>* [ ] Create URDF that includes two robots and stretcher, DOF : 12+12+6+6
>>* [ ] Mapping using multi robot
>
>  **Reference**
>  * [openrl](https://github.com/OpenRL-Lab/openrl)
>  * [MQE](https://github.com/ziyanx02/multiagent-quadruped-environment)
>  * [sledge](https://github.com/autonomousvision/sledge)
>  * [CMPC](https://www.youtube.com/watch?v=QwijfXioXVg)
