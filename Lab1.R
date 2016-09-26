n<-0:30
m<-c("n^3+n^2+2*n","n^2+3*n+1","log(n)+n","n*log(n)")
s<-c("red","blue","black","green")
v<-c(20,8,18,3)
v1<-c("-","-")

par(mfrow=c(1,1))
plot(n^3+n^2+2*n,pch=v[1],xlab="DataSize",ylab="Time Growth",col=s[1])

lines(n^2+3*n+1,type = "b", pch = v[2], col = s[2])
lines(log(n)+n,type = "b", pch = v[3],col=s[3])
lines(n*log(n),type = "b", pch = v[4],col=s[4])

title("Lab 1 \n Sept 21st" )
legend(5,26000,col=s,m,pch=v)

x11()
par(mfrow=c(2,2))

#x11()
plot(n^2+4*n+8,type = "l",xlab="DataSize",ylab="Time Growth",col=s[1])
lines(n^3,col=s[2])
text(x=15, y=150,label="n^2+4*n+8",col=s[1])
text(x=10, y=1000,label="n^3",col=s[2])

#x11()
plot(n^3+3*n+1,type = "l",xlab="DataSize",ylab="Time Growth",col=s[1])
lines(n^4,col=s[2])
text(x=15, y=100,label="n^3+3*n+1",col=s[1])
text(x=12, y=24000,label="n^4",col=s[2])

#x11()
plot(n^2+16*n+11,type = "l",xlab="DataSize",ylab="Time Growth",col=s[1])
lines(n^3+4*n,col=s[2])
text(x=15, y=175,label="n^2+16*n+11",col=s[1])
text(x=8, y=1000,label="n^3+4",col=s[2])

#x11()
plot(n^2+4*n+16,type = "l",xlab="DataSize",ylab="Time Growth",col=s[1])
lines(n^3,col=s[2])
text(x=15, y=150,label="n^2+4*n+16",col=s[1])
text(x=10, y=1000,label="n^3",col=s[2])