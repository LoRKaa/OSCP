> Command Line Memo

### NMAP

```
nmap -sS -sV -PN ip -oN nmap-log.txt
nmap 192.168.1.113 -p-
nmap --script all -sV -O 5.34.149.3 -p 1-65535
nmap 192.168.1.136 -T5 -p- -oN nmap.log
nmap 192.168.1.135 -p 139 -sV -n -A
nmap -p80 192.168.1.137 -oG - | nikto -h -
nmap -T4 -A -v 10.10.10.4
nmap 192.168.1.132 -Pn -p- -sV -oN nmap.txt ## cool for ctf
nmap -p 1-65535 -T5 -A -v -sT 192.168.1.130
nmap --script vuln -p445 10.10.10.4
nmap -T4 -F 10.10.10.5 ## Fast
nmap -sCV 192.168.1.113
nmap -sC -sV -O -o nmapFull.txt 10.10.10.115 ## fast CTF 
nmap -sV -sT -sC -o nmapinitial ghoul.htb 
nmap -sL 10.10.10.162 # obtener hostname
```