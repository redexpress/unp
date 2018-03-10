unp_error.o:
	gcc -c unp_error.c
unp_wrapsock.o:
	gcc -c unp_wrapsock.c unp_error.o
unp_wrapunix.o:
	gcc -c unp_wrapunix.c unp_error.o
daytimetcpcli: unp_error.o
	gcc daytimetcpcli.c unp_error.o -o daytimetcpcli
daytimetcpsrv: unp_error.o unp_wrapsock.o unp_wrapunix.o
	gcc daytimetcpsrv.c unp_error.o unp_wrapsock.o unp_wrapunix.o -o daytimetcpsrv
daytimetcpcliv6: unp_error.o
	gcc daytimetcpcliv6.c unp_error.o -o daytimetcpcliv6
byteorder:
	gcc -c byteorder.c -o byteorder
clean:
	-rm *.o daytimetcpcli daytimetcpsrv daytimetcpcliv6

