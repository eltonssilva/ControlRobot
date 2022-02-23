cmd_/home/pi/drive/Teste1/Module.symvers := sed 's/ko$$/o/' /home/pi/drive/Teste1/modules.order | scripts/mod/modpost -m -a   -o /home/pi/drive/Teste1/Module.symvers -e -i Module.symvers   -T -
