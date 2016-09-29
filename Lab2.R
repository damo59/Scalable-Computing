
data<-read.table("f:/r/mpstat.dat",header=1)

plot(data$X.idle,type="l",ylab="idle",xlab="time",pch=20)
x11()
plot(data$X.usr,type="l",ylab="usr",xlab="time",pch=20)

idle_mean<-mean(data$X.idle)
idle_max<-max(data$X.idle)
idle_min<-min(data$X.idle)

usr_mean<-mean(data$X.usr)
usr_max<-max(data$X.usr)
usr_min<-min(data$X.usr)

sys_mean<-mean(data$X.sys)
sys_max<-max(data$X.sys)
sys_min<-min(data$X.sys)

iowait_mean<-mean(data$X.iowait)
iowait_max<-max(data$X.iowait)
iowait_min<-min(data$X.iowait)


par(mfrow=c(2,2))

plot(data$X.idle,ylab="%",xlab="time",pch=20,main="idle")
plot(data$X.usr,ylab="%",xlab="time",pch=20,main="usr")
plot(data$X.sys,ylab="%",xlab="time",pch=20,main="sys")
plot(data$X.iowait,ylab="%",xlab="time",pch=20,main="iowait")

x11()
par(mfrow=c(2,2))

boxplot(data$X.idle,ylab="%",main="idle")
text(x=1.2, y=81,label="Mean")
text(x=1.2, y=80,label=idle_mean)

boxplot(data$X.usr,ylab="%",main="usr")
text(x=1.2, y=21,label="Mean")
text(x=1.2, y=20,label=usr_mean)

boxplot(data$X.sys,ylab="%",main="sys")
text(x=1.2, y=3.4,label="Mean")
text(x=1.2, y=3,label=sys_mean)

boxplot(data$X.iowait,ylab="%",main="iowait")
text(x=1.2, y=3.4,label="Mean")
text(x=1.2, y=3,label=iowait_mean)