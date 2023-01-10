//Estruturas

// wx = posição em X(sprite), wy = posição em Y(sprite), w = largura, h = altura, id = identificação

struct obj {int wx, wy ,w, h, x, y, frame, timer, id, life;};
struct obj p1 = {0,0,16,24,64,40,0,0,0,0},
hb_p1 = {0,0,10,10,(p1.x+4),(p1.y+40),0,0,0,0},
p2 = {},
hard_wall = {0,0,16,16,0,0,0,0,0,0},
soft_wall = {34,0,16,16,0,0,0,0,0,0},
floor = {17,0,16,16,0,0,0,0,0,0},
bomb = {0,0,16,16,-1,-1,0,0,0,0},
fire = {};
