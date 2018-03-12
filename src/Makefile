unp_error.o:
	gcc -c unp_error.c
unp_wrapsock.o:
	gcc -c unp_wrapsock.c
unp_wrapunix.o:
	gcc -c unp_wrapunix.c
unp_wraplib.o:
	gcc -c unp_wraplib.c
unp_wrapstdio.o:
	gcc -c unp_wrapstdio.c
byteorder.o:
	gcc -c byteorder.c
readline.o:
	gcc -c readline.c
readline.o:
	gcc -c readline.c
readn.o:
	gcc -c readn.c
str_cli.o:
	gcc -c str_cli.c
str_echo.o:
	gcc -c str_echo.c
writen.o:
	gcc -c writen.c
unp_signal.o:
	gcc -c unp_signal.c
byteorder:
	gcc -c byteorder.c -o byteorder
daytimetcpcli: unp_error.o
	gcc daytimetcpcli.c unp_error.o -o daytimetcpcli
daytimetcpsrv: unp_error.o unp_wrapsock.o unp_wrapunix.o
	gcc daytimetcpsrv.c unp_error.o unp_wrapsock.o unp_wrapunix.o -o daytimetcpsrv
daytimetcpsrv1: unp_error.o unp_wrapsock.o unp_wrapunix.o unp_wraplib.o
	gcc daytimetcpsrv1.c unp_error.o unp_wrapsock.o unp_wrapunix.o unp_wraplib.o -o daytimetcpsrv1
daytimetcpcliv6: unp_error.o
	gcc daytimetcpcliv6.c unp_error.o -o daytimetcpcliv6
tcpserv01: unp_wrapsock.o unp_wrapunix.o unp_error.o str_echo.o writen.o
	gcc tcpserv01.c unp_wrapsock.o unp_wrapunix.o unp_error.o str_echo.o writen.o -o tcpserv01

clean:
	-rm *.o
	-rm byteorder
	-rm 
	-rm daytimetcpcli daytimetcpcliv6
	-rm daytimetcpsrv daytimetcpsrv1
	-rm tcpserv01

