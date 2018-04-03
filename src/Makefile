.PHONY: daytime tcp checkopts udp build clean
OBJS := unp_wrapsock.o unp_wrapunix.o unp_wraplib.o unp_wrapstdio.o unp_error.o
OBJS2 := unp_wrapsock.o unp_wrapunix.o unp_error.o
build:
	make byteorder daytime tcp udp checkopts ping
strcliselect01.o:
	$(CC) -I$(shell pwd) -c select/strcliselect01.c
strcliselect02.o:
	$(CC) -I$(shell pwd) -c select/strcliselect02.c
byteorder:
	@echo "build :::::::: $@ ::::::::"
	$(CC) $@.c -o $@
daytimetcpcli: unp_error.o
	$(CC) $@.c unp_error.o -o $@
daytimetcpsrv: $(OBJS2)
	$(CC) $@.c $(OBJS2) -o $@
daytimetcpsrv1: $(OBJS2) unp_wraplib.o
	$(CC) $@.c $(OBJS2) unp_wraplib.o -o $@
daytimetcpcliv6: unp_error.o
	$(CC) $@.c unp_error.o -o $@
tcpserv01: $(OBJS2) str_echo.o writen.o
	$(CC) $@.c $(OBJS2) str_echo.o writen.o -o $@
tcpserv04: $(OBJS2) str_echo.o writen.o unp_signal.o sigchldwaitpid.o
	$(CC) $@.c $(OBJS2) str_echo.o writen.o unp_signal.o sigchldwaitpid.o -o $@
tcpserv08: $(OBJS2) str_echo08.o writen.o unp_signal.o sigchldwaitpid.o readline.o
	$(CC) $@.c $(OBJS2) str_echo08.o writen.o unp_signal.o sigchldwaitpid.o readline.o -o $@
tcpserv09: $(OBJS2) str_echo09.o writen.o unp_signal.o sigchldwaitpid.o readn.o 
	$(CC) $@.c $(OBJS2) str_echo09.o writen.o unp_signal.o sigchldwaitpid.o readn.o  -o $@
tcpcli01: $(OBJS) str_cli.o writen.o readline.o
	$(CC) tcpcli01.c $(OBJS) str_cli.o writen.o readline.o -o tcpcli01
tcpcli04: $(OBJS) str_cli.o writen.o readline.o 
	$(CC) $@.c $(OBJS) str_cli.o writen.o readline.o -o $@
tcpcli08: $(OBJS) str_cli08.o writen.o readline.o 
	$(CC) $@.c $(OBJS) str_cli08.o writen.o readline.o -o $@
tcpcli09: $(OBJS) str_cli09.o writen.o readn.o 
	$(CC) $@.c $(OBJS) str_cli09.o writen.o readn.o -o $@
tcpcli11: $(OBJS) str_cli11.o writen.o readline.o
	$(CC) $@.c $(OBJS) str_cli11.o writen.o readline.o -o $@
tcpcliselect01: $(OBJS) writen.o readline.o strcliselect01.o
	$(CC) select/tcpcli01.c -I$(shell pwd) -L$(shell pwd) $(OBJS) strcliselect01.o writen.o readline.o -o $@
tcpcliselect02: $(OBJS) writen.o readline.o strcliselect02.o
	$(CC) select/tcpcli01.c -I$(shell pwd) -L$(shell pwd) $(OBJS) strcliselect02.o writen.o readline.o -o $@
tcpcliservselect01: $(OBJS) writen.o readline.o
	$(CC) $@.c $(OBJS) writen.o readline.o -o $@
tcpservpoll01: $(OBJS) writen.o readline.o
	$(CC) $@.c $(OBJS) writen.o readline.o -o $@
checkopts: $(OBJS2)
	@echo "build :::::::: $@ ::::::::"
	$(CC) $@.c $(OBJS2) -o $@
udpserv01: $(OBJS2) dg_echo.o
	$(CC) $@.c $(OBJS2) dg_echo.o -o $@
udpcli01: $(OBJS) dg_cli.o
	$(CC) $@.c $(OBJS) dg_cli.o -o $@
udpcli04: $(OBJS) dgcliconnect.o
	$(CC) $@.c $(OBJS) dgcliconnect.o -o $@
ping: $(OBJS) host_serv.o sock_ntop_host.o unp_signal.o
	$(CC) $@.c $(OBJS) host_serv.o sock_ntop_host.o unp_signal.o -o $@
daytime: daytimetcpcli daytimetcpcliv6 daytimetcpsrv daytimetcpsrv1
	@echo "build :::::::: $@ ::::::::"
tcp: tcpserv01 tcpserv04 tcpserv08 tcpserv09 tcpcli01 tcpcli04 tcpcli08 tcpcli09 tcpcli11 tcpcliselect01 tcpcliselect02
	@echo "build :::::::: $@ ::::::::"
udp: udpserv01 udpcli01 udpcli04
	@echo "build :::::::: $@ ::::::::"
clean:
	-rm *.o
	-rm byteorder
	-rm daytimetcpcli daytimetcpcliv6 daytimetcpsrv daytimetcpsrv1
	-rm tcpserv0[1489] tcpcli0[1489] tcpcli11 tcpcliselect0[12] tcpcliservselect01 tcpservpoll01
	-rm checkopts
	-rm ping
	-rm udpserv01 udpcli0[14]
