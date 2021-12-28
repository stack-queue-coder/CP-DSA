#Multiple Correlation
X = c(23, 27, 28, 28, 29, 30, 31, 33, 35, 36)
Y = c(18, 20, 22, 27, 21, 29, 27, 29, 28, 29)
Z = c(10, 12, 18, 23, 27, 31, 25, 29, 19, 34)

Y=c(110,80,70,120,150,90,70,120)
X1=c(30,40,20,50,60,40,20,60)
X2=c(11,10,7,15,19,12,8,14)

age=c(15,25,35,45,55,65)
hrs=c(302.38 ,193.63,185.46,198.49,224.30,288.71)

r1=cov

r_yx1 = cor(Y,X1)
r_yx1

r_yx2 = cor(Y,X2)
r_yx2

r_xz = cor(X,Z)
r_xz
#Computing multiple correlation for X on Y and Z
R_X_YZ = sqrt((r_xy^2+r_xz^2-2*r_xy*r_yz*r_xz)/(1-r_yz^2))
R_X_YZ

#Computing partial correlation between X and Y, where z is kept as constant
r_xy_z = (r_xy-r_xz*r_yz)/sqrt((1-r_xz^2)*(1-r_yz^2))
r_xy_z

#Compute the followings 
R_Y_XZ= sqrt((r_xy^2+r_yz^2-2*r_xy*r_yz*r_xz)/(1-r_xz^2))
R_Y_XZ
R_Z_XY = sqrt((r_xz^2+r_yz^2-2*r_xy*r_yz*r_xz)/(1-r_xy^2))

r_yz_x=(r_yz-r_xy*r_xz)/sqrt((1-r_xy^2)*(1-r_xz^2))
r_xz_y=(r_yz-r_xz*r_yz)/sqrt((1-r_xy^2)*(1-r_yz^2))
r_yz_x
r_xz_y