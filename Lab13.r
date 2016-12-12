
s<-c("red","blue","black","green")

computeEff<-function(p){
n<-2^(2:16)
#E1<-1/(1+((p*(n/p+2*log2(p)))-n)/n)
#E2<-1/(1+((p*(n/p+2*p))-n)/n)
#E3<-1/(1+((p*(n^2/p+5*p))-n^2)/n^2)
E4<-1/(1+((p*(n^3/p+5*p*n))-n^3)/n^3)
#x11()
#plot(E4,col=s[1],log ="y" )
#lines(E2,col=s[2])
#lines(E3,col=s[3])
#lines(E1,col=s[4])
}
x<-c(0:12)
y<-sapply(x, FUN=computeEff)
#computeEff(7)