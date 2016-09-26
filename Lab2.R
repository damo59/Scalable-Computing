
data<-read.table("f:/r/mpstat.dat",header=1)

plot(data$"X.idle",type="l")