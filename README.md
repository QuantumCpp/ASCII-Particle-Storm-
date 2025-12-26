# 🌪️ Particle Storm

A real-time particle simulation system featuring Newtonian physics, dynamic interaction modes, and GPU-accelerated rendering built with C++ and raylib.

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![C++](https://img.shields.io/badge/C%2B%2B-17-00599C.svg)
![raylib](https://img.shields.io/badge/raylib-5.0-red.svg)

## 🎯 Overview

Particle Storm is a high-performance particle physics simulator capable of handling 2000+ entities at 60fps. The system implements fundamental physics principles through Euler integration, spatial optimization techniques, and interactive force fields that respond to real-time user input.

### Key Features

#### 🔬 **Physics Engine**
- **Newtonian Mechanics**: Full implementation of velocity, acceleration, and force accumulation
- **Euler Integration**: Time-step based numerical integration for smooth motion
- **Gravity Simulation**: Configurable gravitational fields affecting all particles
- **Collision Detection**: Elastic boundary collisions with energy dissipation
- **Force Fields**: Dynamic attraction/repulsion systems based on inverse-square law

#### 🎨 **Visual Systems**
- **Dynamic Coloring**: HSV-based color mapping driven by particle velocity
- **Alpha Blending**: Life-based transparency for natural fade effects
- **Motion Trails**: Optional particle history rendering for trajectory visualization
- **Glow Effects**: Multi-layer rendering for luminous particle appearance
- **Spatial Effects**: Connecting lines between nearby particles (constellation mode)

#### ⚡ **Performance Optimizations**
- **Spatial Partitioning**: Grid-based optimization reducing collision checks from O(n²) to O(n×k)
- **Object Pooling**: Particle recycling system eliminating allocation overhead
- **Cache-Friendly Design**: Contiguous memory layout for optimal CPU cache utilization
- **Double Buffering**: Smooth rendering without tearing or artifacts
- **Frame-Rate Independence**: Delta-time based physics ensuring consistent behavior

#### 🎮 **Interaction Modes**

##### 1. **Explosion Mode**
Radial particle emission from point sources with randomized initial velocities creating expanding spheres of particles with natural dispersion patterns.

##### 2. **Vortex Mode** 
Spiral motion system combining centripetal attraction with tangential rotation forces, simulating fluid dynamics and creating mesmerizing swirl patterns.

##### 3. **Rain Mode**
Continuous particle spawning from top boundary with gravity-driven descent, including lateral wind simulation for realistic precipitation effects.

##### 4. **Attraction/Repulsion**
Real-time force field manipulation via mouse input:
- **Left Click**: Gravitational well pulling particles toward cursor
- **Right Click**: Repulsive force field pushing particles away
- Force strength follows inverse-square law for physical accuracy

#### 🛠️ **Technical Implementation**

**Core Systems:**
- **Vector Mathematics**: Custom 2D vector class with full operator overloading
- **Particle Structure**: Position, velocity, acceleration, life, decay rate, visual properties
- **Force Accumulation**: Multiple force sources applied per frame before integration
- **Boundary Handling**: Reflective collisions with configurable restitution coefficient
- **Life Cycle Management**: Birth, update, and death system with automatic cleanup

**Rendering Pipeline:**
- Clear background with optional fade (for trails)
- Update particle physics (forces → acceleration → velocity → position)
- Apply boundary constraints
- Cull dead particles (life ≤ 0)
- Render visible particles with computed colors/alpha
- Draw UI overlay (FPS, particle count, instructions)
- Present frame buffer
