n<-1:30

plot(n^3+n^2+2*n,pch="+",xlab="DataSize",ylab="Time Growth",col="red")

lines(n^2+3*n+1,pch=2,col="blue")
lines(log(n)+n,col="green")
lines(n*log(n),col="yellow")

