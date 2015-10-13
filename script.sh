#!/bin/bash

if [$# -eq 2]; then
useradd $1 -d /home/$1 /m /g $2
cd /home/$1
echo "Bienvenido" > Read.me
else
echo "Parametro faltante, falta parametro"
fi
