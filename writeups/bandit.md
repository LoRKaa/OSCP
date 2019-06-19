# Bandit Writeup

![bandit](https://cdn-images-1.medium.com/max/1600/1*VLXFzVtGx16B1iH81bcTPw.png)
#### The Bandit wargame is aimed at absolute beginners. It will teach the basics needed to be able to play other wargames.

##### [+] use : ./[+] Level.sh 0 # the password is bandit0
```
#cat [+] Level.sh
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

```
#### [+] Level17
```

```
#### [+] Level18
```

```
#### [+] Level19
```

```
#### [+] Level20
```

```
#### [+] Level21
```

```
#### [+] Level22
```

```
#### [+] Level23
```

```
#### [+] Level24
```

```
#### [+] Level25
```

```
#### [+] Level26
```

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

