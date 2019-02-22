#!/bin/bash
python -c "import ctypes; a = ctypes.CDLL('./liba.so', mode=ctypes.RTLD_GLOBAL); b = ctypes.CDLL('./libb.so', mode=ctypes.RTLD_GLOBAL);"
