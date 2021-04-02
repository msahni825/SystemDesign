#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string generateShortUrl(int n){
	char map[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string shortUrl;
	while(n){
		shortUrl.push_back(map[n%62]);
		n=n/62;
	}
	reverse(shortUrl.begin(),shortUrl.end());
	return shortUrl;
}
long int generateUrlId(string shortUrl){
	long int id=0;
	for(int i=0;i<shortUrl.length();i++){
		if('a'<=shortUrl[i] && shortUrl[i]<='z'){
			id=id*62+shortUrl[i]-'a';
		}
		if('A'<=shortUrl[i] && shortUrl[i]<='Z'){
			id=id*62+shortUrl[i]-'A'+26;
		}
		if('0'<=shortUrl[i] && shortUrl[i]<='9'){
			id=id*62+shortUrl[i]-'0'+52;
		}
	}
	return id;
}
int main(){
	/*n:id of the long-url*/
	int n=123456789;
	string shortUrl=generateShortUrl(n);
	cout<<"Generated Short URL: "<<shortUrl<<endl;
	cout<<"ID from Short URL: "<<generateUrlId(shortUrl)<<endl;
	return 0;
}
