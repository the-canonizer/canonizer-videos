float3 pos;
float r = sqrt(pow(inipos.x,2)+pow(inipos.y,2)+pow(inipos.z,2)) * mult_r;
float v =  (2*atan(1/(2*r)))*mult_v;
float rho = 3.1416-v;
pos = float3(inipos.x*rho/r,inipos.y*rho/r,inipos.z*rho/r);
return pos;