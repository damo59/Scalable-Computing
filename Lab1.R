n<-0:30
m<-c("n^3+n^2+2*n","n^2+3*n+1","log(n)+n","n*log(n)")
s<-c("red","blue","black","green")
v<-c(20,45,25,22)

plot(n^3+n^2+2*n,pch=20,xlab="DataSize",ylab="Time Growth",col=s[1])

lines(n^2+3*n+1,type = "b", pch = 45, col = s[2])
lines(log(n)+n,type = "b", pch = 25,col=s[3])
lines(n*log(n),type = "b", pch = 22,col=s[4])

title("Lab 1 \n Sept 21st" )
legend(0,25000,m,col=s,pch=v)