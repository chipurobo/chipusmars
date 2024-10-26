# ChipuRobo Robot - Open Robotics Platform


Welcome to the **ChipuRobo Robot Project**, a comprehensive robotics educational kit designed to teach STEAM concepts such as robotics, AI, 3D printing, and sustainability using the Open Robotics Platform. This kit is a part of ChipuRobo's vision to empower young African innovators with future-ready skills. 

---

## Table of Contents

- [Overview](#overview)
- [Key Features](#key-features)
- [Hardware Components](#hardware-components)
- [Software Components](#software-components)
- [Getting Started](#getting-started)
  - [Setup](#setup)
  - [Installation](#installation)
- [Basic Usage](#basic-usage)
- [Contributing](#contributing)
- [License](#license)

---

## Overview

The **ChipuRobo Robot** is an open-source robotics platform designed for learning and experimentation in robotics and STEAM (Science, Technology, Engineering, Arts, and Mathematics) education. The robot is fully customizable and expandable, making it a great tool for students, hobbyists, and educators. It incorporates advanced components such as LIDAR, motor drivers, a Raspberry Pi controller, and much more.

The robot platform also supports **AI-based** applications, thanks to its powerful integration with Raspberry Pi, ROS (Robot Operating System), and other modules. It’s built with sustainability in mind, utilizing **3D-printed components** from recycled materials, especially PET plastics.

---

## Key Features

- **Modular Design:** Build and expand your robot with different modules including sensors, motor drivers, and AI processors.
- **AI & Robotics Learning:** Supports machine learning, vision processing, and AI-based algorithms.
- **3D Printing Integration:** The robot's chassis and other components can be 3D-printed, promoting the use of recycled materials in education.
- **Open-Source Software:** Fully supported by ROS (Robot Operating System) for a wide range of robotics applications.
- **PET Recycling Initiative:** Promotes sustainability by using parts made from recycled PET plastic.

---

## Hardware Components

The ChipuRobo Robot includes the following hardware:

1. **Raspberry Pi 4B** - The main processor running ROS and AI applications.
2. **Motor Shield** - Used to control the movement of the robot’s motors.
3. **ISD1820 Sound Module** - A voice recording module that adds interactivity.
4. **RPLIDAR A1M8** - A 2D LIDAR sensor for obstacle detection and SLAM.
5. **Distance Sensor Module** - For detecting nearby objects and enhancing safety.
6. **Line Following Module** - To enable the robot to follow lines.
7. **USB Microphone and Speaker** - For interactive voice commands and responses.
8. **3D-Printed Chassis** - Printed from recycled PET plastic using the Open Robotics Platform.
9. **Power Supply** - Powered by 9V batteries or through USB-C.

---

## Software Components

- **ROS (Robot Operating System)** - The primary framework for robotics software development.
- **Python 3** - Used for writing control algorithms and AI code.
- **OpenCV** - Computer vision library for image processing tasks.
- **ChatGPT API** - Integrated for voice-based AI interaction with the robot.
- **RPLIDAR ROS Package** - ROS package to handle LIDAR operations for navigation and mapping.

---

## Getting Started

### Setup

To start with the ChipuRobo Robot, you need the following:

- A computer with internet access
- Raspberry Pi 4B (with microSD card pre-installed with Raspbian OS)
- ROS Noetic installed
- Basic robotics tools such as a screwdriver and USB cables

### Installation

1. **Install ROS Noetic on Raspberry Pi:**

   Follow the official ROS installation guide for Raspberry Pi:
   ```bash
   sudo apt update
   sudo apt install ros-noetic-desktop-full
