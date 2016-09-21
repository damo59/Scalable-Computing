n<-0:30
m<-c("n^3+n^2+2*n","n^2+3*n+1","log(n)+n","n*log(n)")
s<-c("red","blue","black","green")
v<-c(20,8,18,3)

plot(n^3+n^2+2*n,pch=v[1],xlab="DataSize",ylab="Time Growth",col=s[1])

lines(n^2+3*n+1,type = "b", pch = v[2], col = s[2])
lines(log(n)+n,type = "b", pch = v[3],col=s[3])
lines(n*log(n),type = "b", pch = v[4],col=s[4])

title("Lab 1 \n Sept 21st" )
legend(5,26000,col=s,m,pch=v)

x11()
plot(n^2+4*n+8,type = "l",xlab="DataSize",ylab="Time Growth",col=s[1])
lines(n^3,col=s[2])