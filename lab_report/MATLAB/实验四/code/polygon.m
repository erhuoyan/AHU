% 6.9
% polygon
function polygon(n)
if n >=3
    t = 2*pi/n;
    theta = 0:t:2*pi;
    r = 2*ones(size(theta));
    polar(theta,r);
else
    disp('error')
end
