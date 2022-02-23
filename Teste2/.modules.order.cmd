cmd_/home/pi/drive/Teste2/modules.order := {   echo /home/pi/drive/Teste2/motorModulo.ko; :; } | awk '!x[$$0]++' - > /home/pi/drive/Teste2/modules.order
