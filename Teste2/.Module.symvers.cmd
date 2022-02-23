cmd_/home/pi/drive/Teste2/Module.symvers := sed 's/ko$$/o/' /home/pi/drive/Teste2/modules.order | scripts/mod/modpost -m -a   -o /home/pi/drive/Teste2/Module.symvers -e -i Module.symvers   -T -
