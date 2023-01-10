#include "Struct.h"
#define UPSCALE 4

char map [11][13];

//Funções

void map_create(){
    for(int x=0; x < 13; x++){
        for(int y=0; y < 11; y++){
            if(x==0 || x==12 || y==0 || y==10 || (x>1 && x<11 && !(x % 2) && (y>1 && y<9 && !(y % 2)))) {
                map[y][x]=1;
            }
        else map [y][x] = (rand() % 2) * 2 ;
        }
    }
map[1][1]=0;
map[1][2]=0;
map[2][1]=0;
map[8][11]=0;
map[9][10]=0;
map[9][11]=0;
}

void draw(){
        ALLEGRO_BITMAP *tiles;
        tiles = al_load_bitmap("image_tiles.png");
        for(int x=0; x < 13; x++){
            for(int y=0; y < 11; y++){
                switch(map[y][x]){
                    case 0:al_draw_scaled_bitmap(tiles,floor.wx,floor.wy,floor.w,floor.h,floor.w*x*UPSCALE,floor.h*y*UPSCALE,floor.w*UPSCALE,floor.h*UPSCALE,0); break;
                    case 1:al_draw_scaled_bitmap(tiles,hard_wall.wx,hard_wall.wy,hard_wall.w,hard_wall.h,hard_wall.w*x*UPSCALE,hard_wall.h*y*UPSCALE,hard_wall.w*UPSCALE,hard_wall.h*UPSCALE,0); break;
                    case 2:al_draw_scaled_bitmap(tiles,soft_wall.wx,soft_wall.wy,soft_wall.w,soft_wall.h,soft_wall.w*x*UPSCALE,soft_wall.h*y*UPSCALE,soft_wall.w*UPSCALE,soft_wall.h*UPSCALE,0); break;
                    case 3:al_draw_scaled_bitmap(tiles,bomb.wx,bomb.wy,bomb.w,bomb.h,bomb.w*x*UPSCALE,bomb.h*y*UPSCALE,bomb.w*UPSCALE,bomb.h*UPSCALE,0); break;
                }
            }
        }
}

void b_bomb(){
    for(int x=0; x < 13; x++){
            for(int y=0; y < 11; y++){
                    map [((p1.y+(21*UPSCALE)) /(16*UPSCALE))][((p1.x+(8*UPSCALE))/(16*UPSCALE))] = 3;
            }
    }
}

bool dtt_colid (int Ax, int Ay, int Aw, int Ah, int Bx, int By, int Bw, int Bh) {
    if(Ax + Aw >= Bx && Ax <= Bx + Bw && Ay + Ah >= By && Ay <= By + Bh || (Ax + Aw >= Bx && Ax <= Bx + Bw && !Ay && !Ah && !By && !Bh)){
        return 1;
    }
	return 0;
}
