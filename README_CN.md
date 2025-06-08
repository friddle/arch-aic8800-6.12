# Tenda AIC8800 Linux 驱动 (适用于内核 6.12)

## 简介
本仓库包含经过修改的 Tenda AIC8800 USB WiFi 驱动，以支持 Linux 内核 6.12。该驱动源自 Tenda 的 Debian 软件包，并已进行补丁修改以适配 6.12 内核版本。

## 特性
- 支持 Tenda AX300 USB WiFi 适配器
- 兼容 Linux 内核 6.12
- 基于官方 Tenda Debian 软件包修改

## 系统要求
- Linux 内核 6.12
- Tenda AX300 USB WiFi 适配器
- 基本编译工具（make、gcc）

## 安装步骤
```bash
# 克隆仓库
git clone https://github.com/yourusername/aic8800.git
cd aic8800

# 编译并安装驱动
make
sudo make install
```

## 使用方法
安装完成后，插入 Tenda AX300 USB WiFi 适配器。驱动应该会自动加载。

## 故障排除
如果遇到问题：
1. 检查设备是否被识别：`lsusb`
2. 验证驱动加载状态：`dmesg | grep aic8800`
3. 检查 WiFi 接口：`iwconfig`

## 免责声明
这是 Tenda 驱动的非官方修改版本。使用风险自负。
