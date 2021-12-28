#Multiple Correlation
X = c(32,36,31,42,54,23,34)
Y = c(12,20,41,54,43,24,13)
Z = c(17,22,32,40,50,22,12)
r_xy = cor(X,Y)
r_xy
r_yz = cor(Y,Z)
r_yz
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