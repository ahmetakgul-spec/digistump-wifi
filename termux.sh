#!/bin/bash
clear
echo -e "\e[92mDinleme İslemi Basliyor"
sleep 1
clear
nc -lvp 4444 > secret.txt && cat secret.txt


