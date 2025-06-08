# Tenda AIC8800 Linux Driver for Kernel 6.12

## Description
This repository contains the modified Tenda AIC8800 USB WiFi driver to support Linux kernel 6.12. The original driver was sourced from Tenda's Debian package and has been patched to work with 6.12 kernel versions.

## Features
- Support for Tenda AX300 USB WiFi adapter
- Compatible with Linux kernel 6.12
- Modified from official Tenda Debian package

## Requirements
- Linux kernel 6.12
- Tenda AX300 USB WiFi adapter
- Basic build tools (make, gcc)

## Installation
```bash
# Clone the repository
git clone https://github.com/yourusername/aic8800.git
cd aic8800

# Build and install the driver
make
sudo make install
```

## Usage
After installation, plug in your Tenda AX300 USB WiFi adapter. The driver should be automatically loaded.

## Troubleshooting
If you encounter any issues:
1. Check if the device is recognized: `lsusb`
2. Verify driver loading: `dmesg | grep aic8800`
3. Check WiFi interface: `iwconfig`


## Disclaimer
This is an unofficial modification of Tenda's driver. Use at your own risk. 