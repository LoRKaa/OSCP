git add .
git commit -m "$(w3m whatthecommit.com | head -n 1)"
git push -u origin master
