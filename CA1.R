n<-0:10
m<-c("n^2","n")
s<-c("red","blue")
v<-c(20,20)

plot(n^2,pch=v[1],type = "b",xlab="DataSize",ylab="Time Growth",col=s[1],log="y")
lines(n,type = "b", pch = v[2], col = s[2])
text(x=150, y=40000,label="n^2",col=s[1])
text(x=250, y=6000,label="n",col=s[2])

title("CA 1 \n Question 1 Part 3" )
legend(5,80000,col=s,m,pch=v)

