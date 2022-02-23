cmd_/home/pi/drive/Teste1/modules.order := {   echo /home/pi/drive/Teste1/modulo1.ko; :; } | awk '!x[$$0]++' - > /home/pi/drive/Teste1/modules.order
