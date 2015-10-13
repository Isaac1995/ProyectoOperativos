#!/bin/bash
while read usuarios.txt


do
{
if [$# -eq 1]; then
echo $usuarios
useradd $usuarios -d /home/$usuarios -m
else
echo "Parametro faltante, falta archivo"
fi
}
done < $1
