#!/bin/bash

red="\e[31m"
green="\e[32m"
end="\e[0m"

domain=$1

if [ ! -d "$domain" ]
then
        mkdir $domain
        # mkdir $domain/
fi

echo -e "$red{~}$end$green Scraping  Subdomains from JS/Source Code$end 🚔"

for i in $(cat $domain/final1.txt);do echo $i | httpx -random-agent -retries 2 -no-color -silent -threads 70 | anew -q $domain/for-gospider.txt;

gospider -S $domain/for-gospider.txt --js -t 30 -d 3 --sitemap --robots -a -w -r -q | unfurl -u domain | grep ".$domain$" | anew $domain/final.txt;


echo -e "$red{~}$end$green Resolving every CIDR and PTR record of every ip🏮$end"

cat $domain/$domain-cidrs.txt | xargs -P2 -I $ bash -c " echo $ | dnsx -ptr -resp-only -silent " | tee -a $domain/$domain-resolve-ip.txt > /dev/null

cat $domain/$domain-resolve-ip.txt | grep ".$domain$" | anew $domain/recon/final1.txt


echo -e "$red{~}$end$green Probing for alive domains$end 🧟‍♂️ . . ."

puredns resolve $domain/final1.txt -r /root/100resolvers.txt -l 15000 -q | anew $domain/final.txt;

Total_SubDomain=$(cat $domain/final.txt | wc -l )

echo -e "$red{~}$end$green Total SubDomain Found : $end$red$Total_SubDomain$end 😅"